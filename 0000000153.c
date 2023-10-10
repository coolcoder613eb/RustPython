#include "w2c2_base.h"

#include "rustpython.h"

U32 f15330(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=7410U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=2973168U;
si3=2973172U;
si4=1U;
si0=f15322(i,si0,si1,si2,si3,si4);
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=2973168U;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+2973172U);
si0=f15334(i,si0,si1,si2,si3);
l4=si0;
L1:;
si0=-1U;
l0=si0;
si0=l4;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L3;
L4:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973168U);
si2=l1;
si3=l2;
si0=f15316(i,si0,si1,si2,si3);
l0=si0;
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15331(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=7410U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=2973168U;
si3=2973172U;
si4=1U;
si0=f15322(i,si0,si1,si2,si3,si4);
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=2973168U;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+2973172U);
si0=f15334(i,si0,si1,si2,si3);
l4=si0;
L1:;
si0=-1U;
l0=si0;
si0=l4;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L3;
L4:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973168U);
si2=l1;
si3=l2;
si0=f15315(i,si0,si1,si2,si3);
l0=si0;
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f15332(rustpythonInstance*i) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2973184U);
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2973184U);
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=3U;
l1=si0;
L4:;
{
si0=l1;
si1=l0;
si2=8U;
si1+=si2;
si0=f15300(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2973184U,si1);
goto L1;
L5:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=1U;
si0+=si1;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=l3;
si0=f15301(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si0=f15333(i,si0,si1);
if(si0){
goto L2;
}
si0=l2;
f15271(i,si0);
L6:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L4;
}
L3:;
si0=71U;
f15289(i,si0);
UNREACHABLE;
L2:;
si0=70U;
f15289(i,si0);
UNREACHABLE;
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15333(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L1;
default:
goto L2;
}
L2:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973176U);
l2=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973188U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973180U);
l3=si0;
si0=8U;
si1=l2;
si2=1U;
si1<<=(si2&31);
si2=4U;
si3=l2;
si1=si3?si1:si2;
l4=si1;
si0=f15273(i,si0,si1);
l5=si0;
if(si0){
goto L4;
}
si0=-1U;
goto L0;
L4:;
si0=l5;
si1=l3;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2973188U,si1);
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+2973180U,si1);
si0=l3;
f15271(i,si0);
L3:;
L6:;
{
si0=l1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L8;
default:
goto L5;
}
L8:;
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
goto L6;
L7:;
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=47U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=2U;
si0+=si1;
l1=si0;
goto L6;
}
L5:;
si0=l3;
si0=f15397(i,si0);
l3=si0;
if(si0){
goto L9;
}
si0=-1U;
goto L0;
L9:;
si0=0U;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2973176U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973180U);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
goto L0;
L1:;
f15312(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f15334(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=7410U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l2;
si3=l4;
si4=12U;
si3+=si4;
si4=0U;
si0=f15322(i,si0,si1,si2,si3,si4);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si2=l2;
si0=f15335(i,si0,si1,si2);
l3=si0;
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f15335(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
si0=l0;
si1=-1U;
si0+=si1;
l3=si0;
f15332(i);
L1:;
{
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L1;
}
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973176U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973180U);
l6=si0;
si0=-1U;
l7=si0;
L4:;
{
si0=l6;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=f15399(i,si0);
l10=si0;
si0=l7;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l10;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L5;
}
L6:;
si0=l10;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=47U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l3;
si1=l9;
si2=l10;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L5;
}
si0=l9;
si1=-1U;
si0+=si1;
l11=si0;
si0=l10;
l12=si0;
L10:;
{
si0=l12;
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=-1U;
si0+=si1;
l12=si0;
si0=l11;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L10;
}
}
L9:;
si0=l3;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=47U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
if(si0){
goto L5;
}
L7:;
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l10;
l4=si0;
L5:;
si0=l5;
if(si0){
goto L4;
}
}
si0=l7;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
goto L0;
L2:;
si0=l3;
si1=l4;
si0+=si1;
si1=-1U;
si0+=si1;
l0=si0;
L11:;
{
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si1=47U;
si0=si0 == si1;
if(si0){
goto L11;
}
}
si0=l2;
si1=l0;
si2=2942314U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
L0:;
return si0;
}

U32 f15336(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
if(si0){
goto L1;
}
si0=i->m0.pages;
si1=16U;
si0<<=(si1&31);
goto L0;
L1:;
si0=l0;
si1=65535U;
si0&=si1;
if(si0){
goto L2;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0>>=(si1&31);
si0=wasmMemoryGrow(&i->m0,si0);
l0=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
goto L0;
L3:;
si0=l0;
si1=16U;
si0<<=(si1&31);
goto L0;
L2:;
f15312(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f15337(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
f15290(i);
si0=l0;
si1=61U;
si0=f15393(i,si0,si1);
l1=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
l2=si0;
si0=l0;
si1=l1;
si2=l0;
si1-=si2;
l3=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967004U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
L4:;
{
si0=l0;
si1=l1;
si2=l3;
si0=f15400(i,si0,si1,si2);
if(si0){
goto L5;
}
si0=l1;
si1=l3;
si0+=si1;
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L3;
}
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l1;
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
L2:;
si0=l2;
L0:;
return si0;
}

U32 f15338(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
f15290(i);
si0=0U;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967004U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l3=si0;
si0=l4;
l1=si0;
L2:;
{
si0=l0;
si1=l5;
si2=l6;
si0=f15400(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
f15339(i,si0,si1);
si0=0U;
goto L0;
L3:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
si1=2U;
si0<<=(si1&31);
l6=si0;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973192U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si0=f15274(i,si0,si1);
l5=si0;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l5;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l4;
si2=l6;
si0=f15390(i,si0,si1,si2);
L7:;
si0=l1;
f15271(i,si0);
L5:;
si0=0U;
l1=si0;
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+2973192U,si1);
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+2967004U,si1);
si0=l5;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l1=si0;
si0=0U;
si1=l2;
f15339(i,si0,si1);
L8:;
si0=l1;
goto L0;
L4:;
si0=l2;
f15271(i,si0);
si0=-1U;
L0:;
return si0;
}

void f15339(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973200U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973196U);
l3=si0;
si0=l2;
l4=si0;
L2:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
f15271(i,si0);
goto L0;
L3:;
si0=l5;
if(si0){
goto L4;
}
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L4:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973196U);
si1=l2;
si2=2U;
si1<<=(si2&31);
l4=si1;
si2=4U;
si1+=si2;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2973196U,si1);
si0=0U;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2973200U,si1);
si0=l3;
si1=l4;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L5:;
L0:;
}

U32 f15340(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=61U;
si0=f15393(i,si0,si1);
l3=si0;
si1=l0;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=l0;
si1-=si2;
l3=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
goto L0;
L1:;
si0=l2;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
si0=l0;
si0=f15337(i,si0);
if(si0){
goto L3;
}
L4:;
si0=l3;
si1=l1;
si1=f15399(i,si1);
l2=si1;
si0+=si1;
si1=2U;
si0+=si1;
si0=f15269(i,si0);
l4=si0;
if(si0){
goto L5;
}
si0=-1U;
goto L0;
L5:;
si0=l4;
si1=l0;
si2=l3;
si0=f15390(i,si0,si1,si2);
l0=si0;
si1=l3;
si0+=si1;
l4=si0;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
si1=l1;
si2=l2;
si3=1U;
si2+=si3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l0;
si0=f15338(i,si0,si1,si2);
l2=si0;
L3:;
si0=l2;
L0:;
return si0;
}

U32 f15341(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si1=61U;
si0=f15393(i,si0,si1);
l1=si0;
si1=l0;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l0;
si1-=si2;
l2=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
goto L0;
L1:;
f15290(i);
si0=0U;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967004U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l5=si0;
L4:;
{
si0=l0;
si1=l4;
si2=l2;
si0=f15400(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=l4;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=0U;
f15339(i,si0,si1);
goto L5;
L6:;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l3;
l1=si0;
L5:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L4;
}
}
si0=0U;
l3=si0;
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l3;
L0:;
return si0;
}

U32 f15342(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973228U);
l1=si0;
if(si0){
goto L1;
}
si0=2973204U;
l1=si0;
si0=0U;
si1=2973204U;
i32_store(&i->m0,(U64)si0+2973228U,si1);
L1:;
si0=0U;
si1=l0;
si2=l0;
si3=76U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0<<=(si1&31);
si1=2949184U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=2947632U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=f15347(i,si0,si1);
L0:;
return si0;
}

void f15343(rustpythonInstance*i) {
L0:;
}

void f15344(rustpythonInstance*i) {
f15343(i);
f15343(i);
L0:;
}

void f15345(rustpythonInstance*i,U32 l0) {
U32 si0;
f15343(i);
f15343(i);
si0=l0;
f15289(i,si0);
UNREACHABLE;
L0:;
}

U32 f15346(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l0;
L0:;
return si0;
}

U32 f15347(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f15346(i,si0,si1);
L0:;
return si0;
}

U32 f15348(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=14U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=2942305U;
si1=2942297U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si0=si2?si0:si1;
goto L0;
L1:;
si0=l0;
si1=65535U;
si0&=si1;
l2=si0;
si0=l0;
si1=16U;
si0=(U32)((I32)si0>>(si1&31));
l3=si0;
si0=l0;
si1=393215U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=65535U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=8U;
si0+=si1;
si1=2942303U;
si2=l4;
si0=si2?si0:si1;
goto L0;
L2:;
si0=2942315U;
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L3;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L3;
}
L9:;
si0=2949338U;
l5=si0;
si0=l2;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L5;
}
goto L3;
L8:;
si0=2949344U;
l5=si0;
si0=l2;
si1=49U;
si0=si0 <= si1;
if(si0){
goto L5;
}
goto L3;
L7:;
si0=2942315U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
goto L3;
L6:;
si0=2949664U;
l5=si0;
si0=l2;
si1=3U;
si0=si0 > si1;
if(si0){
goto L3;
}
L5:;
si0=l2;
if(si0){
goto L11;
}
si0=l5;
l4=si0;
goto L10;
L11:;
si0=l2;
si1=-1U;
si0+=si1;
l6=si0;
si0=l0;
si1=3U;
si0&=si1;
l7=si0;
if(si0){
goto L13;
}
si0=l5;
l4=si0;
goto L12;
L13:;
si0=0U;
l8=si0;
L14:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
l5=si0;
si0=l0;
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L12:;
si0=l6;
si1=3U;
si0=si0 < si1;
if(si0){
goto L10;
}
L15:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
l4=si0;
si0=l0;
if(si0){
goto L15;
}
L16:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
l5=si0;
si0=l0;
if(si0){
goto L16;
}
}
L17:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
l4=si0;
si0=l0;
if(si0){
goto L17;
}
}
L18:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
l5=si0;
si0=l0;
if(si0){
goto L18;
}
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
if(si0){
goto L15;
}
}
L10:;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si2=l3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f15347(i,si0,si1);
l4=si0;
L3:;
si0=l4;
L0:;
return si0;
}

U32 f15349(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973228U);
l1=si0;
if(si0){
goto L1;
}
si0=2973204U;
l1=si0;
si0=0U;
si1=2973204U;
i32_store(&i->m0,(U64)si0+2973228U,si1);
L1:;
si0=l0;
si1=l1;
si0=f15348(i,si0,si1);
L0:;
return si0;
}

F64 f15350(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072693248U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=-1072693248U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
si0|=si1;
if(si0){
goto L2;
}
sd0=0;
sd1=3.1415926535897931;
sj2=l1;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
sd0=si2?sd0:sd1;
goto L0;
L2:;
sd0=0;
sd1=l0;
sd2=l0;
sd1-=sd2;
sd0/=sd1;
goto L0;
L1:;
si0=l2;
si1=1071644671U;
si0=si0 > si1;
if(si0){
goto L4;
}
sd0=1.5707963267948966;
l3=sd0;
si0=l2;
si1=1012924417U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=6.123233995736766e-17;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l3=sd2;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=l3;
sd7=l3;
sd8=3.4793310759602117e-05;
sd7*=sd8;
sd8=0.00079153499428981453;
sd7+=sd8;
sd6*=sd7;
sd7=-0.040055534500679411;
sd6+=sd7;
sd5*=sd6;
sd6=0.20121253213486293;
sd5+=sd6;
sd4*=sd5;
sd5=-0.32556581862240092;
sd4+=sd5;
sd3*=sd4;
sd4=0.16666666666666666;
sd3+=sd4;
sd2*=sd3;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=l3;
sd7=0.077038150555901935;
sd6*=sd7;
sd7=-0.68828397160545329;
sd6+=sd7;
sd5*=sd6;
sd6=2.0209457602335057;
sd5+=sd6;
sd4*=sd5;
sd5=-2.4033949117344142;
sd4+=sd5;
sd3*=sd4;
sd4=1;
sd3+=sd4;
sd2/=sd3;
sd1*=sd2;
sd0-=sd1;
sd1=l0;
sd0-=sd1;
sd1=1.5707963267948966;
sd0+=sd1;
goto L0;
L4:;
sj0=l1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
sd0=1.5707963267948966;
sd1=l0;
sd2=1;
sd1+=sd2;
sd2=0.5;
sd1*=sd2;
l0=sd1;
sd1=sqrt(sd1);
l3=sd1;
sd2=l3;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=l0;
sd9=3.4793310759602117e-05;
sd8*=sd9;
sd9=0.00079153499428981453;
sd8+=sd9;
sd7*=sd8;
sd8=-0.040055534500679411;
sd7+=sd8;
sd6*=sd7;
sd7=0.20121253213486293;
sd6+=sd7;
sd5*=sd6;
sd6=-0.32556581862240092;
sd5+=sd6;
sd4*=sd5;
sd5=0.16666666666666666;
sd4+=sd5;
sd3*=sd4;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=0.077038150555901935;
sd7*=sd8;
sd8=-0.68828397160545329;
sd7+=sd8;
sd6*=sd7;
sd7=2.0209457602335057;
sd6+=sd7;
sd5*=sd6;
sd6=-2.4033949117344142;
sd5+=sd6;
sd4*=sd5;
sd5=1;
sd4+=sd5;
sd3/=sd4;
sd2*=sd3;
sd3=-6.123233995736766e-17;
sd2+=sd3;
sd1+=sd2;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
goto L0;
L5:;
sd0=1;
sd1=l0;
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=3.4793310759602117e-05;
sd5*=sd6;
sd6=0.00079153499428981453;
sd5+=sd6;
sd4*=sd5;
sd5=-0.040055534500679411;
sd4+=sd5;
sd3*=sd4;
sd4=0.20121253213486293;
sd3+=sd4;
sd2*=sd3;
sd3=-0.32556581862240092;
sd2+=sd3;
sd1*=sd2;
sd2=0.16666666666666666;
sd1+=sd2;
sd0*=sd1;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=0.077038150555901935;
sd4*=sd5;
sd5=-0.68828397160545329;
sd4+=sd5;
sd3*=sd4;
sd4=2.0209457602335057;
sd3+=sd4;
sd2*=sd3;
sd3=-2.4033949117344142;
sd2+=sd3;
sd1*=sd2;
sd2=1;
sd1+=sd2;
sd0/=sd1;
sd1=l0;
sd1=sqrt(sd1);
l4=sd1;
sd0*=sd1;
sd1=l0;
sd2=l4;
sj2=i64_reinterpret_f64(sd2);
sj3=-4294967296ULL;
sj2&=sj3;
sd2=f64_reinterpret_i64(sj2);
l3=sd2;
sd3=l3;
sd2*=sd3;
sd1-=sd2;
sd2=l4;
sd3=l3;
sd2+=sd3;
sd1/=sd2;
sd0+=sd1;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
l3=sd0;
L3:;
sd0=l3;
L0:;
return sd0;
}

F64 f15351(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072693248U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=-1072693248U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
si0|=si1;
if(si0){
goto L2;
}
sd0=l0;
sd1=1.5707963267948966;
sd0*=sd1;
sd1=7.5231638452626401e-37;
sd0+=sd1;
goto L0;
L2:;
sd0=0;
sd1=l0;
sd2=l0;
sd1-=sd2;
sd0/=sd1;
goto L0;
L1:;
si0=l2;
si1=1071644671U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=-1048576U;
si0+=si1;
si1=1044381696U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=l0;
sd1=l0;
sd2=l0;
sd1*=sd2;
l3=sd1;
sd2=l3;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=l3;
sd7=3.4793310759602117e-05;
sd6*=sd7;
sd7=0.00079153499428981453;
sd6+=sd7;
sd5*=sd6;
sd6=-0.040055534500679411;
sd5+=sd6;
sd4*=sd5;
sd5=0.20121253213486293;
sd4+=sd5;
sd3*=sd4;
sd4=-0.32556581862240092;
sd3+=sd4;
sd2*=sd3;
sd3=0.16666666666666666;
sd2+=sd3;
sd1*=sd2;
sd2=l3;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=0.077038150555901935;
sd5*=sd6;
sd6=-0.68828397160545329;
sd5+=sd6;
sd4*=sd5;
sd5=2.0209457602335057;
sd4+=sd5;
sd3*=sd4;
sd4=-2.4033949117344142;
sd3+=sd4;
sd2*=sd3;
sd3=1;
sd2+=sd3;
sd1/=sd2;
sd0*=sd1;
sd1=l0;
sd0+=sd1;
goto L0;
L4:;
sd0=1;
sd1=l0;
sd1=fabs(sd1);
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=3.4793310759602117e-05;
sd5*=sd6;
sd6=0.00079153499428981453;
sd5+=sd6;
sd4*=sd5;
sd5=-0.040055534500679411;
sd4+=sd5;
sd3*=sd4;
sd4=0.20121253213486293;
sd3+=sd4;
sd2*=sd3;
sd3=-0.32556581862240092;
sd2+=sd3;
sd1*=sd2;
sd2=0.16666666666666666;
sd1+=sd2;
sd0*=sd1;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=0.077038150555901935;
sd4*=sd5;
sd5=-0.68828397160545329;
sd4+=sd5;
sd3*=sd4;
sd4=2.0209457602335057;
sd3+=sd4;
sd2*=sd3;
sd3=-2.4033949117344142;
sd2+=sd3;
sd1*=sd2;
sd2=1;
sd1+=sd2;
sd0/=sd1;
l4=sd0;
sd0=l0;
sd0=sqrt(sd0);
l3=sd0;
si0=l2;
si1=1072640819U;
si0=si0 < si1;
if(si0){
goto L6;
}
sd0=1.5707963267948966;
sd1=l3;
sd2=l4;
sd1*=sd2;
sd2=l3;
sd1+=sd2;
l0=sd1;
sd2=l0;
sd1+=sd2;
sd2=-6.123233995736766e-17;
sd1+=sd2;
sd0-=sd1;
l0=sd0;
goto L5;
L6:;
sd0=0.78539816339744828;
sd1=l3;
sj1=i64_reinterpret_f64(sd1);
sj2=-4294967296ULL;
sj1&=sj2;
sd1=f64_reinterpret_i64(sj1);
l5=sd1;
sd2=l5;
sd1+=sd2;
sd0-=sd1;
sd1=l3;
sd2=l3;
sd1+=sd2;
sd2=l4;
sd1*=sd2;
sd2=6.123233995736766e-17;
sd3=l0;
sd4=l5;
sd5=l5;
sd4*=sd5;
sd3-=sd4;
sd4=l3;
sd5=l5;
sd4+=sd5;
sd3/=sd4;
l0=sd3;
sd4=l0;
sd3+=sd4;
sd2-=sd3;
sd1-=sd2;
sd0-=sd1;
sd1=0.78539816339744828;
sd0+=sd1;
l0=sd0;
L5:;
sd0=l0;
sd0=-(sd0);
sd1=l0;
sj2=l1;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
sd0=si2?sd0:sd1;
l0=sd0;
L3:;
sd0=l0;
L0:;
return sd0;
}

F64 f15352(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1141899264U;
si0=si0 < si1;
if(si0){
goto L2;
}
sd0=l0;
sd1=l0;
si0=sd0 != sd1;
if(si0){
goto L1;
}
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
goto L0;
L2:;
si0=l2;
si1=1071382527U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=-1U;
l3=si0;
si0=l2;
si1=1044381696U;
si0=si0 >= si1;
if(si0){
goto L3;
}
goto L1;
L4:;
sd0=l0;
sd0=fabs(sd0);
l0=sd0;
si0=l2;
si1=1072889855U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=1072037887U;
si0=si0 > si1;
if(si0){
goto L6;
}
sd0=l0;
sd1=l0;
sd0+=sd1;
sd1=-1;
sd0+=sd1;
sd1=l0;
sd2=2;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=0U;
l3=si0;
goto L3;
L6:;
sd0=l0;
sd1=-1;
sd0+=sd1;
sd1=l0;
sd2=1;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=1U;
l3=si0;
goto L3;
L5:;
si0=l2;
si1=1073971199U;
si0=si0 > si1;
if(si0){
goto L7;
}
sd0=l0;
sd1=-1.5;
sd0+=sd1;
sd1=l0;
sd2=1.5;
sd1*=sd2;
sd2=1;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=2U;
l3=si0;
goto L3;
L7:;
sd0=-1;
sd1=l0;
sd0/=sd1;
l0=sd0;
si0=3U;
l3=si0;
L3:;
sd0=l0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l4;
sd0*=sd1;
l5=sd0;
sd1=l5;
sd2=l5;
sd3=l5;
sd4=l5;
sd5=-0.036531572744216916;
sd4*=sd5;
sd5=-0.058335701337905735;
sd4+=sd5;
sd3*=sd4;
sd4=-0.0769187620504483;
sd3+=sd4;
sd2*=sd3;
sd3=-0.11111110405462356;
sd2+=sd3;
sd1*=sd2;
sd2=-0.19999999999876483;
sd1+=sd2;
sd0*=sd1;
l6=sd0;
sd0=l4;
sd1=l5;
sd2=l5;
sd3=l5;
sd4=l5;
sd5=l5;
sd6=0.016285820115365782;
sd5*=sd6;
sd6=0.049768779946159324;
sd5+=sd6;
sd4*=sd5;
sd5=0.066610731373875312;
sd4+=sd5;
sd3*=sd4;
sd4=0.090908871334365066;
sd3+=sd4;
sd2*=sd3;
sd3=0.14285714272503466;
sd2+=sd3;
sd1*=sd2;
sd2=0.33333333333332932;
sd1+=sd2;
sd0*=sd1;
l5=sd0;
si0=l2;
si1=1071382527U;
si0=si0 > si1;
if(si0){
goto L8;
}
sd0=l0;
sd1=l0;
sd2=l6;
sd3=l5;
sd2+=sd3;
sd1*=sd2;
sd0-=sd1;
goto L0;
L8:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=2949696U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l0;
sd2=l6;
sd3=l5;
sd2+=sd3;
sd1*=sd2;
si2=l2;
si3=2949728U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd1-=sd2;
sd2=l0;
sd1-=sd2;
sd0-=sd1;
l0=sd0;
sd0=-(sd0);
sd1=l0;
sj2=l1;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
sd0=si2?sd0:sd1;
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

F64 f15353(rustpythonInstance*i,F64 l0,F64 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
F64 l8=0;
U32 si0,si1;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2;
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
sd1=l0;
sd2=l0;
si1=sd1 == sd2;
si0&=si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=l1;
sd0+=sd1;
goto L0;
L1:;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=-1072693248U;
si0+=si1;
sj1=l2;
si1=(U32)(sj1);
l4=si1;
si0|=si1;
if(si0){
goto L2;
}
sd0=l0;
sd0=f15352(i,sd0);
goto L0;
L2:;
si0=l3;
si1=30U;
si0>>=(si1&31);
si1=2U;
si0&=si1;
l5=si0;
sd1=l0;
sj1=i64_reinterpret_f64(sd1);
l2=sj1;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si0|=si1;
l6=si0;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l7=si0;
sj1=l2;
si1=(U32)(sj1);
si0|=si1;
if(si0){
goto L4;
}
sd0=l0;
l8=sd0;
si0=l6;
switch(si0){
case 0:
goto L3;
case 1:
goto L3;
case 2:
goto L6;
case 3:
goto L5;
default:
goto L3;
}
L6:;
sd0=3.1415926535897931;
goto L0;
L5:;
sd0=-3.1415926535897931;
goto L0;
L4:;
si0=l3;
si1=2147483647U;
si0&=si1;
l3=si0;
si1=l4;
si0|=si1;
if(si0){
goto L7;
}
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
goto L0;
L7:;
si0=l3;
si1=2146435072U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l7;
si1=2146435072U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=2949760U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
goto L0;
L9:;
si0=l7;
si1=2146435072U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=67108864U;
si0+=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L10;
}
L11:;
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
goto L0;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
sd0=0;
l8=sd0;
si0=l7;
si1=67108864U;
si0+=si1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L12;
}
L13:;
sd0=l0;
sd1=l1;
sd0/=sd1;
sd0=fabs(sd0);
sd0=f15352(i,sd0);
l8=sd0;
L12:;
si0=l6;
switch(si0){
case 0:
goto L3;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L14;
}
L16:;
sd0=l8;
sd0=-(sd0);
goto L0;
L15:;
sd0=3.1415926535897931;
sd1=l8;
sd2=-1.2246467991473532e-16;
sd1+=sd2;
sd0-=sd1;
goto L0;
L14:;
sd0=l8;
sd1=-1.2246467991473532e-16;
sd0+=sd1;
sd1=-3.1415926535897931;
sd0+=sd1;
goto L0;
L8:;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=2949792U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l8=sd0;
L3:;
sd0=l8;
L0:;
return sd0;
}

F64 f15354(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0,si1;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=2146435072U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=l0;
sd0+=sd1;
goto L0;
L1:;
si0=715094163U;
l3=si0;
si0=l2;
si1=1048575U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=696219795U;
l3=si0;
sd0=l0;
sd1=18014398509481984;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l2;
si1=3U;
si0=DIV_U(si0,si1);
si1=l3;
si0+=si1;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=-9223372036854775808ULL;
sj1&=sj2;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
sd1=l4;
sd0*=sd1;
sd1=l4;
sd2=l0;
sd1/=sd2;
sd0*=sd1;
l5=sd0;
sd1=l5;
sd2=l5;
sd1*=sd2;
sd0*=sd1;
sd1=l5;
sd2=0.14599619288661245;
sd1*=sd2;
sd2=-0.75839793477876605;
sd1+=sd2;
sd0*=sd1;
sd1=l5;
sd2=l5;
sd3=1.6214297201053545;
sd2*=sd3;
sd3=-1.8849797954337717;
sd2+=sd3;
sd1*=sd2;
sd2=1.8759518242717701;
sd1+=sd2;
sd0+=sd1;
sd1=l4;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
sj1=2147483648ULL;
sj0+=sj1;
sj1=-1073741824ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
l5=sd0;
sd1=l0;
sd2=l5;
sd3=l5;
sd2*=sd3;
sd1/=sd2;
l0=sd1;
sd2=l5;
sd1-=sd2;
sd2=l5;
sd3=l5;
sd2+=sd3;
sd3=l0;
sd2+=sd3;
sd1/=sd2;
sd0*=sd1;
sd1=l5;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
L0:;
return sd0;
}

F64 f15355(rustpythonInstance*i,F64 l0,F64 l1) {
F64 l2=0;
F64 l3=0;
F64 l4=0;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=1;
sd1=l0;
sd2=l0;
sd1*=sd2;
l2=sd1;
sd2=0.5;
sd1*=sd2;
l3=sd1;
sd0-=sd1;
l4=sd0;
sd1=1;
sd2=l4;
sd1-=sd2;
sd2=l3;
sd1-=sd2;
sd2=l2;
sd3=l2;
sd4=l2;
sd5=l2;
sd6=2.4801587289476729e-05;
sd5*=sd6;
sd6=-0.001388888888887411;
sd5+=sd6;
sd4*=sd5;
sd5=0.041666666666666602;
sd4+=sd5;
sd3*=sd4;
sd4=l2;
sd5=l2;
sd4*=sd5;
l3=sd4;
sd5=l3;
sd4*=sd5;
sd5=l2;
sd6=l2;
sd7=-1.1359647557788195e-11;
sd6*=sd7;
sd7=2.0875723212981748e-09;
sd6+=sd7;
sd5*=sd6;
sd6=-2.7557314351390663e-07;
sd5+=sd6;
sd4*=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l0;
sd4=l1;
sd3*=sd4;
sd2-=sd3;
sd1+=sd2;
sd0+=sd1;
L0:;
return sd0;
}

U32 f15356(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
F64 l36=0;
F64 l37=0;
F64 l38=0;
F64 l39=0;
U32 si0,si1,si2,si3,si4;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=560U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l2;
si1=-3U;
si0+=si1;
si1=24U;
si0=I32_DIV_S(si0,si1);
l7=si0;
si1=0U;
si2=l7;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l8=si0;
si1=-24U;
si0*=si1;
si1=l2;
si0+=si1;
l9=si0;
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=2949824U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l3;
si2=-1U;
si1+=si2;
l11=si1;
si0+=si1;
l2=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l8;
si1=l11;
si0-=si1;
l12=si0;
si0=l10;
si1=l3;
si0+=si1;
l13=si0;
si1=1U;
si0&=si1;
l14=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=2949848U;
si0+=si1;
l7=si0;
si0=l13;
si1=-2U;
si0&=si1;
l15=si0;
si0=l5;
si1=320U;
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
L3:;
{
sd0=0;
l16=sd0;
sd0=0;
l17=sd0;
si0=l12;
si1=l6;
si0+=si1;
l13=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
sd0=(F64)(I32)(si0);
l17=sd0;
L4:;
si0=l2;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l13;
si1=-1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
sd0=(F64)(I32)(si0);
l16=sd0;
L5:;
si0=l2;
si1=8U;
si0+=si1;
sd1=l16;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l15;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l12;
si1=l6;
si0+=si1;
l12=si0;
L2:;
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L7;
}
sd0=0;
l17=sd0;
goto L6;
L7:;
si0=l12;
si1=2U;
si0<<=(si1&31);
si1=2949840U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
sd0=(F64)(I32)(si0);
l17=sd0;
L6:;
si0=l5;
si1=320U;
si0+=si1;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
L1:;
si0=l9;
si1=-24U;
si0+=si1;
l18=si0;
si0=0U;
l2=si0;
si0=l10;
si1=0U;
si2=l10;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l19=si0;
si0=l3;
si1=-2U;
si0&=si1;
l13=si0;
si0=l3;
si1=1U;
si0&=si1;
l14=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=320U;
si1+=si2;
si0+=si1;
si1=-16U;
si0+=si1;
l15=si0;
L8:;
{
si0=l2;
l12=si0;
si0=l3;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L10;
}
sd0=0;
l17=sd0;
goto L9;
L10:;
si0=0U;
l7=si0;
sd0=0;
l17=sd0;
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
si0=l15;
l2=si0;
si0=l0;
l6=si0;
L12:;
{
si0=l6;
si1=8U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
si1=l6;
sd1=f64_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd1*=sd2;
sd2=l17;
sd1+=sd2;
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l13;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l14;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l5;
si2=320U;
si1+=si2;
si2=l12;
si3=l11;
si2+=si3;
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
L9:;
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l12;
si1=1U;
si0+=si1;
l2=si0;
si0=l12;
si1=l19;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=l3;
si1=-2U;
si0&=si1;
l13=si0;
si0=l3;
si1=1U;
si0&=si1;
l20=si0;
si0=l10;
si1=-1U;
si0^=si1;
l21=si0;
si0=47U;
si1=l9;
si0-=si1;
l22=si0;
si0=48U;
si1=l9;
si0-=si1;
l23=si0;
si0=l5;
si1=480U;
si0+=si1;
si1=-4U;
si0+=si1;
l24=si0;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l5;
si1=320U;
si0+=si1;
si1=-8U;
si0+=si1;
l26=si0;
si0=l5;
si1=480U;
si0+=si1;
si1=-16U;
si0+=si1;
l27=si0;
si0=l5;
si1=-16U;
si0+=si1;
l28=si0;
si0=l9;
si1=-25U;
si0+=si1;
l29=si0;
si0=l10;
l12=si0;
L14:;
{
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l17=sd0;
si0=l12;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
l30=si0;
if(si0){
goto L15;
}
si0=l12;
si1=1U;
si0&=si1;
l31=si0;
si0=0U;
l7=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l12;
l2=si0;
goto L16;
L17:;
si0=l12;
si1=-2U;
si0&=si1;
l14=si0;
si0=l28;
si1=l2;
si0+=si1;
l2=si0;
si0=0U;
l7=si0;
si0=l5;
si1=480U;
si0+=si1;
l6=si0;
L18:;
{
sd0=l17;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l16=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L20;
}
sd0=l16;
si0=I32_TRUNC_S_F64(sd0);
l15=si0;
goto L19;
L20:;
si0=-2147483648U;
l15=si0;
L19:;
si0=l15;
sd0=(F64)(I32)(si0);
l16=sd0;
sd1=-16777216;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L22;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l15=si0;
goto L21;
L22:;
si0=-2147483648U;
l15=si0;
L21:;
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l16;
sd0+=sd1;
l17=sd0;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l16=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L24;
}
sd0=l16;
si0=I32_TRUNC_S_F64(sd0);
l15=si0;
goto L23;
L24:;
si0=-2147483648U;
l15=si0;
L23:;
si0=l15;
sd0=(F64)(I32)(si0);
l16=sd0;
sd1=-16777216;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L26;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l15=si0;
goto L25;
L26:;
si0=-2147483648U;
l15=si0;
L25:;
si0=l6;
si1=4U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l16;
sd0+=sd1;
l17=sd0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l14;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l12;
si1=l7;
si0-=si1;
l2=si0;
L16:;
si0=l31;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si1=2U;
si0<<=(si1&31);
l6=si0;
sd0=l17;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l16=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L28;
}
sd0=l16;
si0=I32_TRUNC_S_F64(sd0);
l7=si0;
goto L27;
L28:;
si0=-2147483648U;
l7=si0;
L27:;
si0=l5;
si1=480U;
si0+=si1;
si1=l6;
si0+=si1;
l6=si0;
si0=l7;
sd0=(F64)(I32)(si0);
l16=sd0;
sd1=-16777216;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L30;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l7=si0;
goto L29;
L30:;
si0=-2147483648U;
l7=si0;
L29:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l16;
sd0+=sd1;
l17=sd0;
L15:;
sd0=l17;
si1=l18;
sd0=f15383(i,sd0,si1);
l17=sd0;
sd1=0.125;
sd0*=sd1;
sd0=floor(sd0);
sd1=-8;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L32;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l32=si0;
goto L31;
L32:;
si0=-2147483648U;
l32=si0;
L31:;
sd0=l17;
si1=l32;
sd1=(F64)(I32)(si1);
sd0-=sd1;
l17=sd0;
si0=l18;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
l33=si0;
if(si0){
goto L37;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l2;
si3=l23;
si2=(U32)((I32)si2>>(si3&31));
l2=si2;
si3=l23;
si2<<=(si3&31);
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l22;
si0=(U32)((I32)si0>>(si1&31));
l34=si0;
si0=l2;
si1=l32;
si0+=si1;
l32=si0;
goto L36;
L37:;
si0=l18;
if(si0){
goto L35;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=23U;
si0=(U32)((I32)si0>>(si1&31));
l34=si0;
L36:;
si0=l34;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L33;
}
goto L34;
L35:;
si0=2U;
l34=si0;
sd0=l17;
sd1=0.5;
si0=sd0 >= sd1;
if(si0){
goto L34;
}
si0=0U;
l34=si0;
goto L33;
L34:;
si0=l30;
si0=!(si0);
if(si0){
goto L39;
}
si0=0U;
l6=si0;
goto L38;
L39:;
si0=l12;
si1=1U;
si0&=si1;
l35=si0;
si0=0U;
l14=si0;
si0=0U;
l6=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l12;
si1=-2U;
si0&=si1;
l31=si0;
si0=0U;
l14=si0;
si0=l5;
si1=480U;
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
L41:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=16777215U;
l15=si0;
si0=l6;
if(si0){
goto L43;
}
si0=16777216U;
l15=si0;
si0=l7;
if(si0){
goto L43;
}
si0=1U;
l15=si0;
goto L42;
L43:;
si0=l2;
si1=l15;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l15=si0;
L42:;
si0=l2;
si1=4U;
si0+=si1;
l30=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=16777215U;
l6=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L45;
}
si0=16777216U;
l6=si0;
si0=l7;
if(si0){
goto L45;
}
si0=0U;
l6=si0;
goto L44;
L45:;
si0=l30;
si1=l6;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
L44:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l31;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L41;
}
}
L40:;
si0=l35;
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
si1=480U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=16777215U;
l7=si0;
si0=l6;
if(si0){
goto L46;
}
si0=16777216U;
l7=si0;
si0=l2;
if(si0){
goto L46;
}
si0=0U;
l6=si0;
goto L38;
L46:;
si0=l15;
si1=l7;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
L38:;
si0=l33;
if(si0){
goto L47;
}
si0=8388607U;
l2=si0;
si0=l29;
switch(si0){
case 0:
goto L48;
case 1:
goto L49;
default:
goto L47;
}
L49:;
si0=4194303U;
l2=si0;
L48:;
si0=l12;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
L47:;
si0=l32;
si1=1U;
si0+=si1;
l32=si0;
si0=l34;
si1=2U;
si0=si0 != si1;
if(si0){
goto L33;
}
sd0=1;
sd1=l17;
sd0-=sd1;
l17=sd0;
si0=2U;
l34=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L33;
}
sd0=l17;
sd1=1;
si2=l18;
sd1=f15383(i,sd1,si2);
sd0-=sd1;
l17=sd0;
L33:;
sd0=l17;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L50;
}
si0=l12;
si1=l10;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L51;
}
si0=l12;
si1=l10;
si0-=si1;
l2=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=0U;
l6=si0;
si0=l12;
l15=si0;
si0=l12;
si1=l21;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l2;
si1=-4U;
si0&=si1;
l14=si0;
si0=l27;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
si0=l12;
l15=si0;
L53:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si3|=si4;
si2|=si3;
si1|=si2;
si0|=si1;
l6=si0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l15;
si1=-4U;
si0+=si1;
l15=si0;
si0=l14;
si1=-4U;
si0+=si1;
l14=si0;
if(si0){
goto L53;
}
}
L52:;
si0=l7;
si0=!(si0);
if(si0){
goto L54;
}
si0=l24;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
L55:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0|=si1;
l6=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L55;
}
}
L54:;
si0=l6;
si0=!(si0);
if(si0){
goto L51;
}
si0=l5;
si1=480U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l2=si0;
si0=l18;
l9=si0;
L56:;
{
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
si0=l9;
si1=-24U;
si0+=si1;
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L56;
}
goto L13;
}
L51:;
si0=l25;
l2=si0;
si0=l12;
l15=si0;
L57:;
{
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L57;
}
}
si0=l26;
si1=l3;
si2=l12;
si1+=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L58:;
{
si0=l5;
si1=320U;
si0+=si1;
si1=l12;
si2=l3;
si1+=si2;
l30=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si2=l8;
si1+=si2;
si2=2U;
si1<<=(si2&31);
si2=2949840U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
sd1=(F64)(I32)(si1);
f64_store(&i->m0,(U64)si0,sd1);
si0=l3;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L60;
}
sd0=0;
l17=sd0;
goto L59;
L60:;
si0=0U;
l7=si0;
sd0=0;
l17=sd0;
si0=l11;
si0=!(si0);
if(si0){
goto L61;
}
si0=l14;
l2=si0;
si0=l0;
l6=si0;
L62:;
{
si0=l6;
si1=8U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
si1=l6;
sd1=f64_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd1*=sd2;
sd2=l17;
sd1+=sd2;
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l13;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L62;
}
}
L61:;
si0=l20;
si0=!(si0);
if(si0){
goto L59;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l5;
si2=320U;
si1+=si2;
si2=l30;
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
L59:;
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l12;
si1=l15;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L58;
}
}
si0=l15;
l12=si0;
goto L14;
L50:;
}
sd0=l17;
si1=24U;
si2=l9;
si1-=si2;
sd0=f15383(i,sd0,si1);
l17=sd0;
sd1=16777216;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L64;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
l6=si0;
sd0=l17;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l16=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L66;
}
sd0=l16;
si0=I32_TRUNC_S_F64(sd0);
l2=si0;
goto L65;
L66:;
si0=-2147483648U;
l2=si0;
L65:;
si0=l5;
si1=480U;
si0+=si1;
si1=l6;
si0+=si1;
l6=si0;
si0=l2;
sd0=(F64)(I32)(si0);
sd1=-16777216;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L68;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l7=si0;
goto L67;
L68:;
si0=-2147483648U;
l7=si0;
L67:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
goto L63;
L64:;
sd0=l17;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L70;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l2=si0;
goto L69;
L70:;
si0=-2147483648U;
l2=si0;
L69:;
si0=l18;
l9=si0;
L63:;
si0=l5;
si1=480U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L13:;
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L71;
}
sd0=1;
si1=l9;
sd0=f15383(i,sd0,si1);
l17=sd0;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L73;
}
si0=l12;
l6=si0;
goto L72;
L73:;
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
si2=l5;
si3=480U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l12;
si1=-1U;
si0+=si1;
l6=si0;
sd0=l17;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l17=sd0;
L72:;
si0=l12;
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l2=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
l6=si0;
L75:;
{
si0=l6;
sd1=l17;
sd2=5.9604644775390625e-08;
sd1*=sd2;
l16=sd1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l6;
si1=8U;
si0+=si1;
sd1=l17;
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l6;
si1=-16U;
si0+=si1;
l6=si0;
sd0=l16;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l17=sd0;
si0=l7;
si1=-2U;
si0+=si1;
l7=si0;
if(si0){
goto L75;
}
}
L74:;
si0=0U;
l14=si0;
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L71;
}
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l12;
l3=si0;
L76:;
{
si0=l19;
si1=l14;
si2=l19;
si3=l14;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=1U;
si0+=si1;
l6=si0;
si1=1U;
si0&=si1;
l30=si0;
si0=l2;
if(si0){
goto L78;
}
si0=0U;
l6=si0;
sd0=0;
l17=sd0;
goto L77;
L78:;
si0=l6;
si1=-2U;
si0&=si1;
l15=si0;
sd0=0;
l17=sd0;
si0=0U;
l2=si0;
si0=0U;
l6=si0;
L79:;
{
si0=l2;
si1=2952616U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l13;
si2=l2;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
si1=l2;
si2=2952608U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
si2=l7;
sd2=f64_load(&i->m0,(U64)si2);
sd1*=sd2;
sd2=l17;
sd1+=sd2;
sd0+=sd1;
l17=sd0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l15;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L79;
}
}
L77:;
si0=l12;
si1=l3;
si0-=si1;
l2=si0;
si0=l30;
si0=!(si0);
if(si0){
goto L80;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=2952608U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l5;
si2=l6;
si3=l3;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
L80:;
si0=l5;
si1=160U;
si0+=si1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l14;
si1=l12;
si0=si0 != si1;
l2=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l2;
if(si0){
goto L76;
}
}
L71:;
si0=l4;
switch(si0){
case 0:
goto L86;
case 1:
goto L85;
case 2:
goto L85;
case 3:
goto L87;
default:
goto L81;
}
L87:;
sd0=0;
l36=sd0;
si0=l12;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L82;
}
si0=l12;
si1=-1U;
si0+=si1;
l13=si0;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sd0=f64_load(&i->m0,(U64)si0);
l16=sd0;
si0=l12;
si1=1U;
si0&=si1;
if(si0){
goto L89;
}
sd0=l16;
l17=sd0;
si0=l12;
l2=si0;
goto L88;
L89:;
si0=l5;
si1=160U;
si0+=si1;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l6;
sd1=f64_load(&i->m0,(U64)si1);
l37=sd1;
sd2=l16;
sd1+=sd2;
l17=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
sd1=l16;
sd2=l37;
sd3=l17;
sd2-=sd3;
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l13;
l2=si0;
L88:;
si0=l13;
si0=!(si0);
if(si0){
goto L90;
}
si0=l2;
si1=1U;
si0+=si1;
l6=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=160U;
si1+=si2;
si0+=si1;
si1=-16U;
si0+=si1;
l2=si0;
L91:;
{
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
l38=sd1;
si2=l2;
si3=8U;
si2+=si3;
l7=si2;
sd2=f64_load(&i->m0,(U64)si2);
l39=sd2;
sd3=l17;
sd2+=sd3;
l16=sd2;
sd1+=sd2;
l37=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=16U;
si0+=si1;
sd1=l17;
sd2=l39;
sd3=l16;
sd2-=sd3;
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l7;
sd1=l16;
sd2=l38;
sd3=l37;
sd2-=sd3;
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
sd0=l37;
l17=sd0;
si0=l6;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L91;
}
}
L90:;
si0=l12;
si1=2U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L82;
}
si0=l12;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=-8U;
si0+=si1;
l2=si0;
si0=l7;
sd0=f64_load(&i->m0,(U64)si0);
l17=sd0;
L92:;
{
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
l37=sd1;
sd2=l17;
sd1+=sd2;
l16=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=8U;
si0+=si1;
sd1=l17;
sd2=l37;
sd3=l16;
sd2-=sd3;
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
sd0=l16;
l17=sd0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si1=2U;
si0=si0 > si1;
if(si0){
goto L92;
}
}
si0=l12;
si1=2U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L82;
}
si0=l12;
si1=-2U;
si0+=si1;
l7=si0;
si0=l13;
si1=3U;
si0&=si1;
l6=si0;
if(si0){
goto L84;
}
sd0=0;
l36=sd0;
goto L83;
L86:;
si0=l12;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L94;
}
sd0=0;
l17=sd0;
goto L93;
L94:;
si0=l12;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l7=si0;
if(si0){
goto L96;
}
sd0=0;
l17=sd0;
si0=l12;
l6=si0;
goto L95;
L96:;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sd0=0;
l17=sd0;
si0=l12;
l6=si0;
L97:;
{
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
sd0=l17;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L97;
}
}
L95:;
si0=l12;
si1=3U;
si0=si0 < si1;
if(si0){
goto L93;
}
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l2=si0;
L98:;
{
sd0=l17;
si1=l2;
si2=24U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-32U;
si0+=si1;
l2=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L98;
}
}
L93:;
si0=l1;
sd1=l17;
sd1=-(sd1);
sd2=l17;
si3=l34;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0,sd1);
goto L81;
L85:;
si0=l12;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L100;
}
sd0=0;
l17=sd0;
goto L99;
L100:;
si0=l12;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l7=si0;
if(si0){
goto L102;
}
sd0=0;
l17=sd0;
si0=l12;
l6=si0;
goto L101;
L102:;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sd0=0;
l17=sd0;
si0=l12;
l6=si0;
L103:;
{
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
sd0=l17;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L103;
}
}
L101:;
si0=l12;
si1=3U;
si0=si0 < si1;
if(si0){
goto L99;
}
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l2=si0;
L104:;
{
sd0=l17;
si1=l2;
si2=24U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-32U;
si0+=si1;
l2=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L104;
}
}
L99:;
si0=l1;
sd1=l17;
sd1=-(sd1);
sd2=l17;
si3=l34;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+160U);
sd1=l17;
sd0-=sd1;
l17=sd0;
si0=1U;
l2=si0;
si0=l12;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L105;
}
si0=l12;
si1=3U;
si0&=si1;
l6=si0;
si0=l12;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L106;
}
si0=l12;
si1=-4U;
si0&=si1;
l13=si0;
si0=l5;
si1=160U;
si0+=si1;
si1=32U;
si0+=si1;
l2=si0;
si0=0U;
l7=si0;
L107:;
{
sd0=l17;
si1=l2;
si2=-24U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=-16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=-8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=32U;
si0+=si1;
l2=si0;
si0=l13;
si1=l7;
si2=4U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L107;
}
}
si0=l7;
si1=1U;
si0+=si1;
l2=si0;
L106:;
si0=l6;
si0=!(si0);
if(si0){
goto L105;
}
si0=l5;
si1=160U;
si0+=si1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
L108:;
{
sd0=l17;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L108;
}
}
L105:;
si0=l1;
sd1=l17;
sd1=-(sd1);
sd2=l17;
si3=l34;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L81;
L84:;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sd0=0;
l36=sd0;
L109:;
{
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
sd0=l36;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l36=sd0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L109;
}
}
L83:;
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l12;
si1=4U;
si0+=si1;
l6=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l2=si0;
L110:;
{
sd0=l36;
si1=l2;
si2=24U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l36=sd0;
si0=l2;
si1=-32U;
si0+=si1;
l2=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si1=5U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L110;
}
}
L82:;
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+160U);
l17=sd0;
si0=l34;
if(si0){
goto L111;
}
si0=l1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l36;
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l1;
si1=l5;
sd1=f64_load(&i->m0,(U64)si1+168U);
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L81;
L111:;
si0=l1;
sd1=l17;
sd1=-(sd1);
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l36;
sd1=-(sd1);
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l1;
si1=l5;
sd1=f64_load(&i->m0,(U64)si1+168U);
sd1=-(sd1);
f64_store(&i->m0,(U64)si0+8U,sd1);
L81:;
si0=l5;
si1=560U;
si0+=si1;
i->g0=si0;
si0=l32;
si1=7U;
si0&=si1;
L0:;
return si0;
}

U32 f15357(rustpythonInstance*i,F64 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
U32 l9=0;
F64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=2147483647U;
si0&=si1;
l5=si0;
si1=1074752122U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=1048575U;
si0&=si1;
si1=598523U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=1073928572U;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=l3;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L6;
}
si0=l1;
sd1=l0;
sd2=-1.5707963267341256;
sd1+=sd2;
l0=sd1;
sd2=-6.0771005065061922e-11;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=-6.0771005065061922e-11;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=1U;
l4=si0;
goto L1;
L6:;
si0=l1;
sd1=l0;
sd2=1.5707963267341256;
sd1+=sd2;
l0=sd1;
sd2=6.0771005065061922e-11;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=6.0771005065061922e-11;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=-1U;
l4=si0;
goto L1;
L5:;
sj0=l3;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L7;
}
si0=l1;
sd1=l0;
sd2=-3.1415926534682512;
sd1+=sd2;
l0=sd1;
sd2=-1.2154201013012384e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=-1.2154201013012384e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=2U;
l4=si0;
goto L1;
L7:;
si0=l1;
sd1=l0;
sd2=3.1415926534682512;
sd1+=sd2;
l0=sd1;
sd2=1.2154201013012384e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=1.2154201013012384e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=-2U;
l4=si0;
goto L1;
L4:;
si0=l5;
si1=1075594811U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l5;
si1=1075183036U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=1074977148U;
si0=si0 == si1;
if(si0){
goto L3;
}
sj0=l3;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L10;
}
si0=l1;
sd1=l0;
sd2=-4.7123889802023768;
sd1+=sd2;
l0=sd1;
sd2=-1.8231301519518578e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=-1.8231301519518578e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=3U;
l4=si0;
goto L1;
L10:;
si0=l1;
sd1=l0;
sd2=4.7123889802023768;
sd1+=sd2;
l0=sd1;
sd2=1.8231301519518578e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=1.8231301519518578e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=-3U;
l4=si0;
goto L1;
L9:;
si0=l5;
si1=1075388923U;
si0=si0 == si1;
if(si0){
goto L3;
}
sj0=l3;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L11;
}
si0=l1;
sd1=l0;
sd2=-6.2831853069365025;
sd1+=sd2;
l0=sd1;
sd2=-2.4308402026024769e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=-2.4308402026024769e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=4U;
l4=si0;
goto L1;
L11:;
si0=l1;
sd1=l0;
sd2=6.2831853069365025;
sd1+=sd2;
l0=sd1;
sd2=2.4308402026024769e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=2.4308402026024769e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=-4U;
l4=si0;
goto L1;
L8:;
si0=l5;
si1=1094263290U;
si0=si0 > si1;
if(si0){
goto L2;
}
L3:;
si0=l1;
sd1=l0;
sd2=l0;
sd3=0.63661977236758138;
sd2*=sd3;
sd3=6755399441055744;
sd2+=sd3;
sd3=-6755399441055744;
sd2+=sd3;
l6=sd2;
sd3=-1.5707963267341256;
sd2*=sd3;
sd1+=sd2;
l7=sd1;
sd2=l6;
sd3=6.0771005065061922e-11;
sd2*=sd3;
l8=sd2;
sd1-=sd2;
l0=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l5;
si1=20U;
si0>>=(si1&31);
l5=si0;
sd1=l0;
sj1=i64_reinterpret_f64(sd1);
sj2=52ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
si0-=si1;
si1=17U;
si0=(U32)((I32)si0<(I32)si1);
l9=si0;
sd0=l6;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L13;
}
sd0=l6;
si0=I32_TRUNC_S_F64(sd0);
l4=si0;
goto L12;
L13:;
si0=-2147483648U;
l4=si0;
L12:;
si0=l9;
if(si0){
goto L14;
}
si0=l1;
sd1=l7;
sd2=l6;
sd3=6.077100506303966e-11;
sd2*=sd3;
l0=sd2;
sd1-=sd2;
l10=sd1;
sd2=l6;
sd3=2.0222662487959506e-21;
sd2*=sd3;
sd3=l7;
sd4=l10;
sd3-=sd4;
sd4=l0;
sd3-=sd4;
sd2-=sd3;
l8=sd2;
sd1-=sd2;
l0=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l5;
sd1=l0;
sj1=i64_reinterpret_f64(sd1);
sj2=52ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
si0-=si1;
si1=50U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L15;
}
sd0=l10;
l7=sd0;
goto L14;
L15:;
si0=l1;
sd1=l10;
sd2=l6;
sd3=2.0222662487111665e-21;
sd2*=sd3;
l0=sd2;
sd1-=sd2;
l7=sd1;
sd2=l6;
sd3=8.4784276603688996e-32;
sd2*=sd3;
sd3=l10;
sd4=l7;
sd3-=sd4;
sd4=l0;
sd3-=sd4;
sd2-=sd3;
l8=sd2;
sd1-=sd2;
l0=sd1;
f64_store(&i->m0,(U64)si0,sd1);
L14:;
si0=l1;
sd1=l7;
sd2=l0;
sd1-=sd2;
sd2=l8;
sd1-=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L1;
L2:;
si0=l5;
si1=2146435072U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
sd1=l0;
sd2=l0;
sd1-=sd2;
l0=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=0U;
l4=si0;
goto L1;
L16:;
sj0=l3;
sj1=4503599627370495ULL;
sj0&=sj1;
sj1=4710765210229538816ULL;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L18;
}
sd0=l0;
si0=I32_TRUNC_S_F64(sd0);
l4=si0;
goto L17;
L18:;
si0=-2147483648U;
l4=si0;
L17:;
si0=l2;
si1=l4;
sd1=(F64)(I32)(si1);
l6=sd1;
f64_store(&i->m0,(U64)si0+16U,sd1);
sd0=l0;
sd1=l6;
sd0-=sd1;
sd1=16777216;
sd0*=sd1;
l0=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L20;
}
sd0=l0;
si0=I32_TRUNC_S_F64(sd0);
l4=si0;
goto L19;
L20:;
si0=-2147483648U;
l4=si0;
L19:;
si0=l2;
si1=l4;
sd1=(F64)(I32)(si1);
l6=sd1;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
si1=32U;
si0+=si1;
l4=si0;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=16777216;
sd1*=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=4U;
l9=si0;
L21:;
{
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l4;
sd0=f64_load(&i->m0,(U64)si0);
l0=sd0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
sd0=l0;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L21;
}
}
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=l5;
si3=20U;
si2>>=(si3&31);
si3=-1046U;
si2+=si3;
si3=l9;
si4=1U;
si0=f15356(i,si0,si1,si2,si3,si4);
l4=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0);
l0=sd0;
sj0=l3;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L22;
}
si0=l1;
sd1=l0;
sd1=-(sd1);
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd1=-(sd1);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=0U;
si1=l4;
si0-=si1;
l4=si0;
goto L1;
L22:;
si0=l1;
sd1=l0;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+8U);
f64_store(&i->m0,(U64)si0+8U,sd1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

F64 f15358(rustpythonInstance*i,F64 l0,F64 l1,U32 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0;
F64 sd0,sd1,sd2,sd3,sd4;
sd0=l0;
sd1=l0;
sd0*=sd1;
l3=sd0;
sd1=l3;
sd2=l3;
sd1*=sd2;
sd0*=sd1;
sd1=l3;
sd2=1.5896909952115501e-10;
sd1*=sd2;
sd2=-2.5050760253406863e-08;
sd1+=sd2;
sd0*=sd1;
sd1=l3;
sd2=l3;
sd3=2.7557313707070068e-06;
sd2*=sd3;
sd3=-0.00019841269829857949;
sd2+=sd3;
sd1*=sd2;
sd2=0.0083333333333224895;
sd1+=sd2;
sd0+=sd1;
l4=sd0;
sd0=l3;
sd1=l0;
sd0*=sd1;
l5=sd0;
si0=l2;
if(si0){
goto L1;
}
sd0=l5;
sd1=l3;
sd2=l4;
sd1*=sd2;
sd2=-0.16666666666666632;
sd1+=sd2;
sd0*=sd1;
sd1=l0;
sd0+=sd1;
goto L0;
L1:;
sd0=l0;
sd1=l3;
sd2=l1;
sd3=0.5;
sd2*=sd3;
sd3=l4;
sd4=l5;
sd3*=sd4;
sd2-=sd3;
sd1*=sd2;
sd2=l1;
sd1-=sd2;
sd2=l5;
sd3=0.16666666666666632;
sd2*=sd3;
sd1+=sd2;
sd0-=sd1;
L0:;
return sd0;
}

F64 f15359(rustpythonInstance*i,F64 l0) {
U32 l1=0;
U32 l2=0;
F64 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072243195U;
si0=si0 > si1;
if(si0){
goto L2;
}
sd0=1;
l3=sd0;
si0=l2;
si1=1044816030U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=0;
sd0=f15355(i,sd0,sd1);
l3=sd0;
goto L1;
L2:;
si0=l2;
si1=2146435072U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=l0;
sd1=l0;
sd0-=sd1;
l3=sd0;
goto L1;
L3:;
sd0=l0;
si1=l1;
si0=f15357(i,sd0,si1);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
default:
goto L4;
}
L7:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd0=f15355(i,sd0,sd1);
l3=sd0;
goto L1;
L6:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=1U;
sd0=f15358(i,sd0,sd1,si2);
sd0=-(sd0);
l3=sd0;
goto L1;
L5:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd0=f15355(i,sd0,sd1);
sd0=-(sd0);
l3=sd0;
goto L1;
L4:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=1U;
sd0=f15358(i,sd0,sd1,si2);
l3=sd0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
sd0=l3;
L0:;
return sd0;
}

F64 f15360(rustpythonInstance*i,F64 l0) {
F64 sd0,sd1;
sd0=l0;
sd1=-1416.0996898839683;
sd0+=sd1;
sd0=f15365(i,sd0);
sd1=2.2471164185778949e+307;
sd0*=sd1;
sd1=2.2471164185778949e+307;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15361(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
U32 si0,si1;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
l1=sj0;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
sj0=l1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si1=1072049729U;
si0=si0 > si1;
if(si0){
goto L2;
}
sd0=1;
l3=sd0;
si0=l2;
si1=1045430272U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd0=f15369(i,sd0);
l0=sd0;
sd1=l0;
sd0*=sd1;
sd1=l0;
sd2=1;
sd1+=sd2;
l0=sd1;
sd2=l0;
sd1+=sd2;
sd0/=sd1;
sd1=1;
sd0+=sd1;
goto L0;
L2:;
si0=l2;
si1=1082535489U;
si0=si0 > si1;
if(si0){
goto L3;
}
sd0=l0;
sd0=f15365(i,sd0);
l0=sd0;
sd1=1;
sd2=l0;
sd1/=sd2;
sd0+=sd1;
sd1=0.5;
sd0*=sd1;
goto L0;
L3:;
sd0=l0;
sd0=f15360(i,sd0);
l3=sd0;
L1:;
sd0=l3;
L0:;
return sd0;
}

F64 f15362(rustpythonInstance*i,U32 l0,F64 l1) {
U32 si2;
F64 sd0,sd1;
sd0=l1;
sd0=-(sd0);
sd1=l1;
si2=l0;
sd0=si2?sd0:sd1;
sd1=l1;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15363(rustpythonInstance*i,U32 l0) {
U32 si0;
F64 sd0,sd1;
si0=l0;
sd1=1.2882297539194267e-231;
sd0=f15362(i,si0,sd1);
L0:;
return sd0;
}

F64 f15364(rustpythonInstance*i,U32 l0) {
U32 si0;
F64 sd0,sd1;
si0=l0;
sd1=3.1050361846014179e+231;
sd0=f15362(i,si0,sd1);
L0:;
return sd0;
}

F64 f15365(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
F64 l4=0;
F64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l2=si0;
si1=-969U;
si0+=si1;
si1=63U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l2;
l3=si0;
goto L2;
L3:;
sd0=1;
l4=sd0;
si0=l2;
si1=969U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l2;
si1=1033U;
si0=si0 < si1;
if(si0){
goto L2;
}
sd0=0;
l4=sd0;
sj0=l1;
sj1=-4503599627370496ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l2;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L4;
}
sd0=l0;
sd1=1;
sd0+=sd1;
goto L0;
L4:;
sj0=l1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
si0=0U;
sd0=f15363(i,si0);
goto L0;
L5:;
si0=0U;
sd0=f15364(i,si0);
goto L0;
L2:;
si0=0U;
sd0=f64_load(&i->m0,(U64)si0+2952672U);
sd1=l0;
sd0*=sd1;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+2952680U);
l4=sd1;
sd0+=sd1;
l5=sd0;
sd1=l4;
sd0-=sd1;
l4=sd0;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+2952696U);
sd0*=sd1;
sd1=l4;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952688U);
sd1*=sd2;
sd2=l0;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l4;
sd0*=sd1;
sd1=l0;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952728U);
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952720U);
sd1+=sd2;
sd0*=sd1;
sd1=l4;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2952712U);
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2952704U);
sd2+=sd3;
sd1*=sd2;
sd2=l5;
sj2=i64_reinterpret_f64(sd2);
l1=sj2;
si2=(U32)(sj2);
si3=4U;
si2<<=(si3&31);
si3=2032U;
si2&=si3;
l2=si2;
si3=2952784U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd3=l0;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
si0=l2;
si1=2952792U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l1;
sj2=45ULL;
sj1<<=(sj2&63);
sj0+=sj1;
l6=sj0;
si0=l3;
if(si0){
goto L6;
}
sd0=l0;
sj1=l6;
sj2=l1;
sd0=f15366(i,sd0,sj1,sj2);
goto L0;
L6:;
sj0=l6;
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
sd1=l0;
sd0*=sd1;
sd1=l4;
sd0+=sd1;
l4=sd0;
L1:;
sd0=l4;
L0:;
return sd0;
}

F64 f15366(rustpythonInstance*i,F64 l0,U64 l1,U64 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4;
sj0=l2;
sj1=2147483648ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l1;
sj1=-4544132024016830464ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
sd1=l3;
sd0+=sd1;
sd1=5.4861240687936887e+303;
sd0*=sd1;
goto L0;
L1:;
sj0=l1;
sj1=4602678819172646912ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd1=1;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L2;
}
sd0=l0;
sd1=1;
sd0+=sd1;
l5=sd0;
sd1=l4;
sd2=l3;
sd3=l0;
sd2-=sd3;
sd1+=sd2;
sd2=l0;
sd3=1;
sd4=l5;
sd3-=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
sd1=-1;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
sd1=2.2250738585072014e-308;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15367(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l2=si0;
si1=-969U;
si0+=si1;
si1=63U;
si0=si0 < si1;
if(si0){
goto L2;
}
sd0=1;
l3=sd0;
si0=l2;
si1=969U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=1033U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=0;
l3=sd0;
sj0=l1;
sj1=-4503599627370496ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l2;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L4;
}
sd0=l0;
sd1=1;
sd0+=sd1;
goto L0;
L4:;
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
si0=0U;
sd0=f15364(i,si0);
goto L0;
L5:;
sj0=l1;
sj1=-4570929321408987136ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=0U;
sd0=f15363(i,si0);
goto L0;
L3:;
si0=0U;
si1=l2;
sj2=l1;
sj3=1ULL;
sj2<<=(sj3&63);
sj3=-9143996093422370816ULL;
si2=sj2 > sj3;
si0=si2?si0:si1;
l2=si0;
L2:;
sd0=l0;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+2952736U);
l3=sd1;
sd2=l0;
sd1+=sd2;
l4=sd1;
sd2=l3;
sd1-=sd2;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0*=sd1;
l3=sd0;
sd1=l3;
sd0*=sd1;
sd1=l0;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952776U);
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952768U);
sd1+=sd2;
sd0*=sd1;
sd1=l3;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2952760U);
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2952752U);
sd2+=sd3;
sd1*=sd2;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2952744U);
sd2*=sd3;
sd3=l4;
sj3=i64_reinterpret_f64(sd3);
l1=sj3;
si3=(U32)(sj3);
si4=4U;
si3<<=(si4&31);
si4=2032U;
si3&=si4;
l5=si3;
si4=2952784U;
si3+=si4;
sd3=f64_load(&i->m0,(U64)si3);
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
sj0=l1;
sj1=45ULL;
sj0<<=(sj1&63);
si1=l5;
si2=2952792U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
si0=l2;
if(si0){
goto L6;
}
sd0=l0;
sj1=l6;
sj2=l1;
sd0=f15368(i,sd0,sj1,sj2);
goto L0;
L6:;
sj0=l6;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
sd1=l3;
sd0+=sd1;
l3=sd0;
L1:;
sd0=l3;
L0:;
return sd0;
}

F64 f15368(rustpythonInstance*i,F64 l0,U64 l1,U64 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4;
sj0=l2;
sj1=2147483648ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l1;
sj1=-4503599627370496ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
goto L0;
L1:;
sj0=l1;
sj1=4602678819172646912ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd1=1;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L2;
}
sd0=l0;
sd1=1;
sd0+=sd1;
l5=sd0;
sd1=l4;
sd2=l3;
sd3=l0;
sd2-=sd3;
sd1+=sd2;
sd2=l0;
sd3=1;
sd4=l5;
sd3-=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
sd1=-1;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
sd1=2.2250738585072014e-308;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15369(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1078159482U;
si0=si0 < si1;
if(si0){
goto L6;
}
sd0=l0;
sd1=l0;
si0=sd0 != sd1;
if(si0){
goto L1;
}
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L7;
}
sd0=-1;
goto L0;
L7:;
sd0=l0;
sd1=709.78271289338397;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L5;
}
sd0=l0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
goto L0;
L6:;
si0=l2;
si1=1071001155U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=1072734897U;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L8;
}
sd0=l0;
sd1=-0.69314718036912382;
sd0+=sd1;
l3=sd0;
si0=1U;
l2=si0;
sd0=1.9082149292705877e-10;
l4=sd0;
goto L4;
L8:;
sd0=l0;
sd1=0.69314718036912382;
sd0+=sd1;
l3=sd0;
si0=-1U;
l2=si0;
sd0=-1.9082149292705877e-10;
l4=sd0;
goto L4;
L5:;
sd0=l0;
sd1=1.4426950408889634;
sd0*=sd1;
sd1=0.5;
sd2=l0;
sd1=copysign(sd1,sd2);
sd0+=sd1;
l3=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L10;
}
sd0=l3;
si0=I32_TRUNC_S_F64(sd0);
l2=si0;
goto L9;
L10:;
si0=-2147483648U;
l2=si0;
L9:;
si0=l2;
sd0=(F64)(I32)(si0);
l3=sd0;
sd1=1.9082149292705877e-10;
sd0*=sd1;
l4=sd0;
sd0=l0;
sd1=l3;
sd2=-0.69314718036912382;
sd1*=sd2;
sd0+=sd1;
l3=sd0;
L4:;
sd0=l3;
sd1=l3;
sd2=l4;
sd1-=sd2;
l0=sd1;
sd0-=sd1;
sd1=l4;
sd0-=sd1;
l4=sd0;
goto L2;
L3:;
si0=l2;
si1=1016070144U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
L2:;
sd0=l0;
sd1=l0;
sd2=0.5;
sd1*=sd2;
l5=sd1;
sd0*=sd1;
l3=sd0;
sd1=l3;
sd2=l3;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=-2.0109921818362437e-07;
sd5*=sd6;
sd6=4.0082178273293624e-06;
sd5+=sd6;
sd4*=sd5;
sd5=-7.9365075786748794e-05;
sd4+=sd5;
sd3*=sd4;
sd4=0.0015873015872548146;
sd3+=sd4;
sd2*=sd3;
sd3=-0.033333333333333132;
sd2+=sd3;
sd1*=sd2;
sd2=1;
sd1+=sd2;
l6=sd1;
sd2=3;
sd3=l6;
sd4=l5;
sd3*=sd4;
sd2-=sd3;
l5=sd2;
sd1-=sd2;
sd2=6;
sd3=l0;
sd4=l5;
sd3*=sd4;
sd2-=sd3;
sd1/=sd2;
sd0*=sd1;
l5=sd0;
si0=l2;
if(si0){
goto L11;
}
sd0=l0;
sd1=l0;
sd2=l5;
sd1*=sd2;
sd2=l3;
sd1-=sd2;
sd0-=sd1;
goto L0;
L11:;
sd0=l0;
sd1=l5;
sd2=l4;
sd1-=sd2;
sd0*=sd1;
sd1=l4;
sd0-=sd1;
sd1=l3;
sd0-=sd1;
l3=sd0;
si0=l2;
si1=1U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L12;
case 2:
goto L13;
default:
goto L12;
}
L14:;
sd0=l0;
sd1=l3;
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
sd1=-0.5;
sd0+=sd1;
goto L0;
L13:;
sd0=l0;
sd1=-0.25;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L15;
}
sd0=l3;
sd1=l0;
sd2=0.5;
sd1+=sd2;
sd0-=sd1;
sd1=-2;
sd0*=sd1;
goto L0;
L15:;
sd0=l0;
sd1=l3;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
sd1=1;
sd0+=sd1;
goto L0;
L12:;
si0=l2;
si1=1023U;
si0+=si1;
sj0=(U64)(si0);
sj1=52ULL;
sj0<<=(sj1&63);
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
si0=l2;
si1=57U;
si0=si0 < si1;
if(si0){
goto L16;
}
sd0=l0;
sd1=l3;
sd0-=sd1;
sd1=1;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
sd1=8.9884656743115795e+307;
sd0*=sd1;
sd1=l0;
sd2=l4;
sd1*=sd2;
si2=l2;
si3=1024U;
si2=si2 == si3;
sd0=si2?sd0:sd1;
sd1=-1;
sd0+=sd1;
goto L0;
L16:;
si0=1023U;
si1=l2;
si0-=si1;
sj0=(U64)(si0);
sj1=52ULL;
sj0<<=(sj1&63);
sd0=f64_reinterpret_i64(sj0);
l5=sd0;
si0=l2;
si1=19U;
si0=si0 > si1;
if(si0){
goto L18;
}
sd0=1;
sd1=l5;
sd0-=sd1;
sd1=l0;
sd2=l3;
sd1-=sd2;
sd0+=sd1;
l0=sd0;
goto L17;
L18:;
sd0=l0;
sd1=l3;
sd2=l5;
sd1+=sd2;
sd0-=sd1;
sd1=1;
sd0+=sd1;
l0=sd0;
L17:;
sd0=l0;
sd1=l4;
sd0*=sd1;
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

F64 f15370(rustpythonInstance*i,F64 l0,F64 l1,F64 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
F32 sf0;
F64 sd0,sd1,sd2;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=2047U;
si0&=si1;
l5=si0;
if(si0){
goto L1;
}
sd0=l0;
sd1=9.2233720368547758e+18;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l5=si0;
si1=-63U;
si0+=si1;
si1=2048U;
si2=l5;
si0=si2?si0:si1;
l5=si0;
L1:;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l6=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=2047U;
si0&=si1;
l8=si0;
if(si0){
goto L2;
}
sd0=l1;
sd1=9.2233720368547758e+18;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l6=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l9=si0;
si1=-63U;
si0+=si1;
si1=2048U;
si2=l9;
si0=si2?si0:si1;
l8=si0;
L2:;
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
l10=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l11=si0;
si1=2047U;
si0&=si1;
l9=si0;
if(si0){
goto L3;
}
sd0=l2;
sd1=9.2233720368547758e+18;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l10=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l9=si0;
si1=-63U;
si0+=si1;
si1=2048U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L3:;
si0=l5;
si1=2046U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l8;
si1=2047U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
L5:;
sd0=l0;
sd1=l1;
sd0*=sd1;
sd1=l2;
sd0+=sd1;
goto L0;
L4:;
si0=l9;
si1=-1076U;
si0+=si1;
l12=si0;
si0=l9;
si1=2047U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
sd0=l2;
sd1=l0;
sd2=l1;
sd1*=sd2;
sd2=l2;
sd1+=sd2;
si2=l12;
si3=971U;
si2=si2 == si3;
sd0=si2?sd0:sd1;
goto L0;
L6:;
si0=l11;
si1=2048U;
si0&=si1;
l11=si0;
sj0=l10;
sj1=1ULL;
sj0<<=(sj1&63);
sj1=9007199254740990ULL;
sj0&=sj1;
sj1=9007199254740992ULL;
sj0|=sj1;
l10=sj0;
sj0=l6;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=2097151ULL;
sj0&=sj1;
sj1=2097152ULL;
sj0|=sj1;
l13=sj0;
sj1=l3;
sj2=1ULL;
sj1<<=(sj2&63);
l3=sj1;
sj2=4294967294ULL;
sj1&=sj2;
l14=sj1;
sj0*=sj1;
sj1=l6;
sj2=4294967294ULL;
sj1&=sj2;
l6=sj1;
sj2=l3;
sj3=32ULL;
sj2>>=(sj3&63);
sj3=2097151ULL;
sj2&=sj3;
sj3=2097152ULL;
sj2|=sj3;
l3=sj2;
sj1*=sj2;
sj0+=sj1;
l15=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l13;
sj2=l3;
sj1*=sj2;
sj0+=sj1;
sj1=l15;
sj2=32ULL;
sj1<<=(sj2&63);
l3=sj1;
sj2=l6;
sj3=l14;
sj2*=sj3;
sj1+=sj2;
l6=sj1;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l13=sj0;
si0=l12;
si1=l5;
si2=l8;
si1+=si2;
si2=-2152U;
si1+=si2;
l5=si1;
si0-=si1;
l8=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L8;
}
si0=l8;
si1=63U;
si0=si0 > si1;
if(si0){
goto L9;
}
sj0=l10;
si1=l8;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
sj0=l10;
si1=64U;
si2=l8;
si1-=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l10=sj0;
goto L7;
L9:;
si0=l9;
si1=-1140U;
si0+=si1;
l5=si0;
si0=l8;
si1=-64U;
si0+=si1;
l9=si0;
if(si0){
goto L10;
}
sj0=0ULL;
l3=sj0;
goto L7;
L10:;
si0=l8;
si1=127U;
si0=si0 <= si1;
if(si0){
goto L11;
}
sj0=1ULL;
l6=sj0;
sj0=0ULL;
l13=sj0;
sj0=0ULL;
l3=sj0;
goto L7;
L11:;
sj0=0ULL;
l3=sj0;
sj0=l13;
si1=128U;
si2=l8;
si1-=si2;
sj1=(U64)(si1);
l14=sj1;
sj0<<=(sj1&63);
sj1=l6;
si2=l9;
sj2=(U64)(si2);
l15=sj2;
sj1>>=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=l14;
sj1<<=(sj2&63);
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0|=sj1;
l6=sj0;
sj0=l13;
sj1=l15;
sj0>>=(sj1&63);
l13=sj0;
goto L7;
L8:;
si0=l12;
si1=l5;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l12;
l5=si0;
sj0=l10;
l3=sj0;
sj0=0ULL;
l10=sj0;
goto L7;
L12:;
sj0=1ULL;
l3=sj0;
si0=l8;
si1=-63U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L13;
}
sj0=0ULL;
l10=sj0;
goto L7;
L13:;
sj0=l10;
si1=0U;
si2=l8;
si1-=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l3=sj0;
sj0=l10;
si1=l8;
si2=64U;
si1+=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l14=sj0;
sj0=0ULL;
l10=sj0;
sj0=l3;
sj1=l14;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0|=sj1;
l3=sj0;
L7:;
si0=l7;
si1=l4;
si0^=si1;
l8=si0;
si1=2048U;
si0&=si1;
l9=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L17;
}
sj0=l10;
sj1=l13;
sj0+=sj1;
sj1=l3;
sj2=l6;
sj1+=sj2;
l6=sj1;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
goto L16;
L17:;
sj0=l6;
sj1=l3;
sj0-=sj1;
l14=sj0;
sj0=l13;
sj1=l10;
sj0-=sj1;
sj1=l6;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l3=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L19;
}
sj0=l14;
l6=sj0;
si0=l9;
l11=si0;
goto L18;
L19:;
sj0=0ULL;
sj1=l14;
sj0-=sj1;
l6=sj0;
si0=l8;
si1=11U;
si0>>=(si1&31);
si1=1U;
si0^=si1;
l11=si0;
sj0=-1ULL;
sj1=0ULL;
sj2=l14;
sj3=0ULL;
si2=sj2 != sj3;
sj0=si2?sj0:sj1;
sj1=l3;
sj0-=sj1;
l3=sj0;
L18:;
sj0=l3;
si0=!(sj0);
if(si0){
goto L15;
}
L16:;
sj0=l3;
sj1=l3;
sj1=I64_CLZ(sj1);
l10=sj1;
si1=(U32)(sj1);
si2=-1U;
si1+=si2;
l9=si1;
sj1=(U64)(si1);
l13=sj1;
sj0<<=(sj1&63);
sj1=l6;
sj2=65ULL;
sj3=l10;
sj2-=sj3;
sj1>>=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=l13;
sj1<<=(sj2&63);
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0|=sj1;
l3=sj0;
si0=l5;
si1=64U;
si0+=si1;
l5=si0;
goto L14;
L15:;
sj0=l6;
si0=!(sj0);
if(si0){
goto L21;
}
sj0=l6;
sj0=I64_CLZ(sj0);
si0=(U32)(sj0);
l9=si0;
if(si0){
goto L20;
}
sj0=l6;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=l6;
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l3=sj0;
si0=-1U;
l9=si0;
goto L14;
L21:;
sd0=l0;
sd1=l1;
sd0*=sd1;
sd1=l2;
sd0+=sd1;
goto L0;
L20:;
sj0=l6;
si1=l9;
si2=-1U;
si1+=si2;
l9=si1;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
L14:;
sj0=0ULL;
sj1=l3;
sj0-=sj1;
sj1=l3;
si2=l11;
sj0=si2?sj0:sj1;
sd0=(F64)(I64)(sj0);
l2=sd0;
si0=l5;
si1=l9;
si0-=si1;
l5=si0;
si1=-1085U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L22;
}
si0=l5;
si1=-1085U;
si0=si0 != si1;
if(si0){
goto L23;
}
sd0=-9.2233720368547758e+18;
sd1=9.2233720368547758e+18;
si2=l11;
sd0=si2?sd0:sd1;
l0=sd0;
sd1=l2;
si0=sd0 == sd1;
if(si0){
goto L24;
}
sj0=l3;
sj1=2047ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L22;
}
sj0=0ULL;
sj1=l3;
sj2=1ULL;
sj1&=sj2;
sj2=l3;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
sj2=4611686018427387904ULL;
sj1|=sj2;
l3=sj1;
sj0-=sj1;
sj1=l3;
si2=l11;
sj0=si2?sj0:sj1;
sd0=(F64)(I64)(sj0);
l2=sd0;
sd1=l2;
sd0+=sd1;
sd1=l0;
sd0-=sd1;
l2=sd0;
sd1=1.8928834978668395e-270;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd0*=sd1;
sd1=l2;
sd2=l2;
sd1-=sd2;
sd0*=sd1;
sd1=l2;
sd0+=sd1;
si1=l5;
sd0=f15383(i,sd0,si1);
goto L0;
L24:;
sd0=l2;
sd1=1.2744734909236908e-57;
sd0*=sd1;
sf0=(F32)(sd0);
sd0=(F64)(sf0);
sd1=1.8928834978668395e-270;
sd0*=sd1;
goto L0;
L23:;
sj0=0ULL;
sj1=l3;
sj2=1023ULL;
sj1&=sj2;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj2=10ULL;
sj1<<=(sj2&63);
sj2=l3;
sj3=-1024ULL;
sj2&=sj3;
sj1|=sj2;
l3=sj1;
sj0-=sj1;
sj1=l3;
si2=l11;
sj0=si2?sj0:sj1;
sd0=(F64)(I64)(sj0);
l2=sd0;
L22:;
sd0=l2;
si1=l5;
sd0=f15383(i,sd0,si1);
L0:;
return sd0;
}

F64 f15371(rustpythonInstance*i,F64 l0,F64 l1) {
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1;
sd0=l1;
sd1=l1;
si0=sd0 != sd1;
if(si0){
goto L2;
}
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=1ULL;
sj0<<=(sj1&63);
l3=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l4=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l5=si0;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
sd0=l0;
sd1=l1;
sd0*=sd1;
l1=sd0;
sd1=l1;
sd0/=sd1;
goto L0;
L1:;
sj0=l4;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=l3;
si0=sj0 > sj1;
if(si0){
goto L3;
}
sd0=l0;
sd1=0;
sd0*=sd1;
sd1=l0;
sj2=l6;
sj3=l3;
si2=sj2 == sj3;
sd0=si2?sd0:sd1;
goto L0;
L3:;
sj0=l2;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l7=si0;
si0=l5;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
sj0=l4;
sj1=12ULL;
sj0<<=(sj1&63);
l3=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L6;
}
L7:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=1ULL;
sj0<<=(sj1&63);
l3=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L7;
}
}
L6:;
sj0=l4;
si1=1U;
si2=l5;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
goto L4;
L5:;
sj0=l4;
sj1=4503599627370495ULL;
sj0&=sj1;
sj1=4503599627370496ULL;
sj0|=sj1;
l3=sj0;
L4:;
si0=l7;
if(si0){
goto L9;
}
si0=0U;
l7=si0;
sj0=l2;
sj1=12ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L10;
}
L11:;
{
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
sj0=l6;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L11;
}
}
L10:;
sj0=l2;
si1=1U;
si2=l7;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l2=sj0;
goto L8;
L9:;
sj0=l2;
sj1=4503599627370495ULL;
sj0&=sj1;
sj1=4503599627370496ULL;
sj0|=sj1;
l2=sj0;
L8:;
si0=l5;
si1=l7;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
L13:;
{
sj0=l3;
sj1=l2;
sj0-=sj1;
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L14;
}
sj0=l6;
l3=sj0;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
sd0=l0;
sd1=0;
sd0*=sd1;
goto L0;
L14:;
sj0=l3;
sj1=1ULL;
sj0<<=(sj1&63);
l3=sj0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l7;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
}
si0=l7;
l5=si0;
L12:;
sj0=l3;
sj1=l2;
sj0-=sj1;
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L15;
}
sj0=l6;
l3=sj0;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
sd0=l0;
sd1=0;
sd0*=sd1;
goto L0;
L15:;
sj0=l3;
sj1=4503599627370495ULL;
si0=sj0 <= sj1;
if(si0){
goto L17;
}
sj0=l3;
l6=sj0;
goto L16;
L17:;
L18:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=2251799813685248ULL;
si0=sj0 < sj1;
l7=si0;
sj0=l3;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
l3=sj0;
si0=l7;
if(si0){
goto L18;
}
}
L16:;
sj0=l4;
sj1=-9223372036854775808ULL;
sj0&=sj1;
l3=sj0;
si0=l5;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L20;
}
sj0=l6;
sj1=-4503599627370496ULL;
sj0+=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l6=sj0;
goto L19;
L20:;
sj0=l6;
si1=1U;
si2=l5;
si1-=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l6=sj0;
L19:;
sj0=l6;
sj1=l3;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
L0:;
return sd0;
}

F64 f15372(rustpythonInstance*i,F64 l0,F64 l1) {
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
F64 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
l2=sj0;
sd1=l1;
sj1=i64_reinterpret_f64(sd1);
sj2=9223372036854775807ULL;
sj1&=sj2;
l3=sj1;
sj2=l2;
sj3=l3;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l4=sj0;
sd0=f64_reinterpret_i64(sj0);
l1=sd0;
sj0=l4;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=2047U;
si0=si0 == si1;
if(si0){
goto L1;
}
sj0=l2;
sj1=l3;
sj2=l2;
sj3=l3;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
l2=sj0;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
sd0=l0;
goto L0;
L2:;
sj0=l2;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L3;
}
sd0=l0;
goto L0;
L3:;
si0=l6;
si1=l5;
si0-=si1;
si1=65U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
sd0=l0;
sd1=l1;
sd0+=sd1;
goto L0;
L4:;
si0=l6;
si1=1534U;
si0=si0 < si1;
if(si0){
goto L6;
}
sd0=l1;
sd1=1.9010915662951598e-211;
sd0*=sd1;
l1=sd0;
sd0=l0;
sd1=1.9010915662951598e-211;
sd0*=sd1;
l0=sd0;
sd0=5.2601359015483735e+210;
l7=sd0;
goto L5;
L6:;
sd0=1;
l7=sd0;
si0=l5;
si1=572U;
si0=si0 > si1;
if(si0){
goto L5;
}
sd0=l1;
sd1=5.2601359015483735e+210;
sd0*=sd1;
l1=sd0;
sd0=l0;
sd1=5.2601359015483735e+210;
sd0*=sd1;
l0=sd0;
sd0=1.9010915662951598e-211;
l7=sd0;
L5:;
sd0=l7;
sd1=l0;
sd2=l0;
sd1*=sd2;
l8=sd1;
sd2=l1;
sd3=l1;
sd2*=sd3;
l9=sd2;
sd3=l1;
sd4=l1;
sd5=134217729;
sd4*=sd5;
l10=sd4;
sd5=l1;
sd6=l10;
sd5-=sd6;
sd4+=sd5;
l10=sd4;
sd3-=sd4;
l1=sd3;
sd4=l1;
sd3*=sd4;
sd4=l10;
sd5=l10;
sd4+=sd5;
sd5=l1;
sd4*=sd5;
sd5=l10;
sd6=l10;
sd5*=sd6;
sd6=l9;
sd5-=sd6;
sd4+=sd5;
sd3+=sd4;
sd4=l0;
sd5=l0;
sd6=134217729;
sd5*=sd6;
l1=sd5;
sd6=l0;
sd7=l1;
sd6-=sd7;
sd5+=sd6;
l1=sd5;
sd4-=sd5;
l0=sd4;
sd5=l0;
sd4*=sd5;
sd5=l1;
sd6=l1;
sd5+=sd6;
sd6=l0;
sd5*=sd6;
sd6=l1;
sd7=l1;
sd6*=sd7;
sd7=l8;
sd6-=sd7;
sd5+=sd6;
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
sd0*=sd1;
l1=sd0;
L1:;
sd0=l1;
L0:;
return sd0;
}

F64 f15373(rustpythonInstance*i,F64 l0,U32 l1) {
U32 si1;
F64 sd0;
sd0=l0;
si1=l1;
sd0=f15383(i,sd0,si1);
L0:;
return sd0;
}

F64 f15374(rustpythonInstance*i,U32 l0) {
U32 si2;
F64 sd0,sd1;
sd0=-INFINITY;
sd1=INFINITY;
si2=l0;
sd0=si2?sd0:sd1;
L0:;
return sd0;
}

F64 f15375(rustpythonInstance*i,F64 l0) {
F64 sd0,sd1;
sd0=l0;
sd1=l0;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0/=sd1;
L0:;
return sd0;
}

F64 f15376(rustpythonInstance*i,F64 l0) {
U64 l1=0;
F64 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=-4606619468846596096ULL;
sj0+=sj1;
sj1=854320534781951ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
sd0=l0;
sd1=-1;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd2=l0;
sd3=134217728;
sd2*=sd3;
l2=sd2;
sd1+=sd2;
sd2=l2;
sd1-=sd2;
l2=sd1;
sd2=l2;
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2957080U);
l3=sd2;
sd1*=sd2;
l4=sd1;
sd0+=sd1;
l5=sd0;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l6=sd2;
sd1*=sd2;
l7=sd1;
sd2=l7;
sd3=l7;
sd4=l7;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2957160U);
sd4*=sd5;
sd5=l6;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+2957152U);
sd5*=sd6;
sd6=l0;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+2957144U);
sd6*=sd7;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+2957136U);
sd6+=sd7;
sd5+=sd6;
sd4+=sd5;
sd3*=sd4;
sd4=l6;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2957128U);
sd4*=sd5;
sd5=l0;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+2957120U);
sd5*=sd6;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+2957112U);
sd5+=sd6;
sd4+=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l6;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2957104U);
sd3*=sd4;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2957096U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2957088U);
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd1*=sd2;
sd2=l0;
sd3=l2;
sd2-=sd3;
sd3=l3;
sd2*=sd3;
sd3=l0;
sd4=l2;
sd3+=sd4;
sd2*=sd3;
sd3=l4;
sd4=l0;
sd5=l5;
sd4-=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
goto L0;
L1:;
sj0=l1;
sj1=48ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
si1=-32752U;
si0+=si1;
si1=-32737U;
si0=si0 > si1;
if(si0){
goto L3;
}
sj0=l1;
sj1=9223372036854775807ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=1U;
sd0=f15374(i,si0);
goto L0;
L4:;
sj0=l1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l8;
si1=32767U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l8;
si1=32752U;
si0&=si1;
si1=32752U;
si0=si0 != si1;
if(si0){
goto L5;
}
L6:;
sd0=l0;
sd0=f15375(i,sd0);
goto L0;
L5:;
sd0=l0;
sd1=4503599627370496;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
sj1=-234187180623265792ULL;
sj0+=sj1;
l1=sj0;
L3:;
sj0=l1;
sj1=-4604367669032910848ULL;
sj0+=sj1;
l9=sj0;
sj1=52ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
si0=(U32)(sj0);
sd0=(F64)(I32)(si0);
l6=sd0;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+2957024U);
sd0*=sd1;
sj1=l9;
sj2=45ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=127U;
si1&=si2;
si2=4U;
si1<<=(si2&31);
l8=si1;
si2=2957176U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l7=sd0;
si1=l8;
si2=2957168U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sj2=l1;
sj3=l9;
sj4=-4503599627370496ULL;
sj3&=sj4;
sj2-=sj3;
sd2=f64_reinterpret_i64(sj2);
si3=l8;
si4=2959216U;
si3+=si4;
sd3=f64_load(&i->m0,(U64)si3);
sd2-=sd3;
si3=l8;
si4=2959224U;
si3+=si4;
sd3=f64_load(&i->m0,(U64)si3);
sd2-=sd3;
sd1*=sd2;
l0=sd1;
sd0+=sd1;
l3=sd0;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l2=sd2;
sd1*=sd2;
sd2=l2;
sd3=l0;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2957072U);
sd3*=sd4;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2957064U);
sd3+=sd4;
sd2*=sd3;
sd3=l0;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2957056U);
sd3*=sd4;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2957048U);
sd3+=sd4;
sd2+=sd3;
sd1*=sd2;
sd2=l2;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2957040U);
sd2*=sd3;
sd3=l6;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2957032U);
sd3*=sd4;
sd4=l0;
sd5=l7;
sd6=l3;
sd5-=sd6;
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
L0:;
return sd0;
}

F64 f15377(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 l6=0;
F64 l7=0;
F64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
si0=l2;
si1=1071284857U;
si0=si0 > si1;
if(si0){
goto L4;
}
L5:;
si0=l2;
si1=-1074790400U;
si0=si0 < si1;
if(si0){
goto L6;
}
sd0=-INFINITY;
l3=sd0;
sd0=l0;
sd1=-1;
si0=sd0 == sd1;
if(si0){
goto L1;
}
sd0=l0;
sd1=l0;
sd0-=sd1;
sd1=0;
sd0/=sd1;
goto L0;
L6:;
si0=l2;
si1=1U;
si0<<=(si1&31);
si1=2034237440U;
si0=si0 >= si1;
if(si0){
goto L7;
}
sd0=l0;
goto L0;
L7:;
sd0=0;
l4=sd0;
si0=l2;
si1=-1076707643U;
si0=si0 >= si1;
if(si0){
goto L3;
}
sd0=0;
l5=sd0;
goto L2;
L4:;
si0=l2;
si1=2146435071U;
si0=si0 <= si1;
if(si0){
goto L3;
}
sd0=l0;
goto L0;
L3:;
sd0=l0;
sd1=1;
sd0+=sd1;
l3=sd0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=614242U;
si0+=si1;
l2=si0;
si1=20U;
si0>>=(si1&31);
si1=-1023U;
si0+=si1;
l6=si0;
sd0=0;
l4=sd0;
si0=l2;
si1=1129316351U;
si0=si0 > si1;
if(si0){
goto L8;
}
sd0=l0;
sd1=l3;
sd0-=sd1;
sd1=1;
sd0+=sd1;
sd1=l0;
sd2=l3;
sd3=-1;
sd2+=sd3;
sd1-=sd2;
si2=l2;
si3=1074790399U;
si2=si2 > si3;
sd0=si2?sd0:sd1;
sd1=l3;
sd0/=sd1;
l4=sd0;
L8:;
si0=l2;
si1=1048575U;
si0&=si1;
si1=1072079006U;
si0+=si1;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=4294967295ULL;
sj1&=sj2;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
sd1=-1;
sd0+=sd1;
l0=sd0;
si0=l6;
sd0=(F64)(I32)(si0);
l5=sd0;
L2:;
sd0=l5;
sd1=0.69314718036912382;
sd0*=sd1;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=2;
sd3+=sd4;
sd2/=sd3;
l3=sd2;
sd3=l0;
sd4=l0;
sd5=0.5;
sd4*=sd5;
sd3*=sd4;
l7=sd3;
sd4=l3;
sd5=l3;
sd4*=sd5;
l8=sd4;
sd5=l8;
sd4*=sd5;
l3=sd4;
sd5=l3;
sd6=l3;
sd7=0.15313837699209373;
sd6*=sd7;
sd7=0.22222198432149784;
sd6+=sd7;
sd5*=sd6;
sd6=0.39999999999409419;
sd5+=sd6;
sd4*=sd5;
sd5=l8;
sd6=l3;
sd7=l3;
sd8=l3;
sd9=0.14798198605116586;
sd8*=sd9;
sd9=0.1818357216161805;
sd8+=sd9;
sd7*=sd8;
sd8=0.28571428743662391;
sd7+=sd8;
sd6*=sd7;
sd7=0.66666666666667351;
sd6+=sd7;
sd5*=sd6;
sd4+=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l5;
sd4=1.9082149292705877e-10;
sd3*=sd4;
sd4=l4;
sd3+=sd4;
sd2+=sd3;
sd3=l7;
sd2-=sd3;
sd1+=sd2;
sd0+=sd1;
l3=sd0;
L1:;
sd0=l3;
L0:;
return sd0;
}

F64 f15378(rustpythonInstance*i,F64 l0) {
U64 l1=0;
F64 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
F64 sd0,sd1,sd2,sd3,sd4,sd5;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=-4606800540372828160ULL;
sj0+=sj1;
sj1=581272283906047ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
si0=0U;
sd0=f64_load(&i->m0,(U64)si0+2954832U);
l2=sd0;
sd1=l0;
sd2=-1;
sd1+=sd2;
l0=sd1;
sj1=i64_reinterpret_f64(sd1);
sj2=-4294967296ULL;
sj1&=sj2;
sd1=f64_reinterpret_i64(sj1);
l3=sd1;
sd0*=sd1;
l4=sd0;
sd1=l0;
sd2=l0;
sd1*=sd2;
l5=sd1;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2954904U);
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2954896U);
sd2+=sd3;
sd1*=sd2;
l6=sd1;
sd0+=sd1;
l7=sd0;
sd1=l5;
sd2=l5;
sd1*=sd2;
l8=sd1;
sd2=l8;
sd3=l5;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954968U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954960U);
sd4+=sd5;
sd3*=sd4;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954952U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954944U);
sd4+=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l5;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954936U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954928U);
sd4+=sd5;
sd3*=sd4;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954920U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954912U);
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd1*=sd2;
sd2=l0;
sd3=l3;
sd2-=sd3;
sd3=l2;
sd2*=sd3;
sd3=l0;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2954840U);
sd3*=sd4;
sd2+=sd3;
sd3=l6;
sd4=l4;
sd5=l7;
sd4-=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
goto L0;
L1:;
sj0=l1;
sj1=48ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si1=-32752U;
si0+=si1;
si1=-32737U;
si0=si0 > si1;
if(si0){
goto L3;
}
sj0=l1;
sj1=9223372036854775807ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=1U;
sd0=f15374(i,si0);
goto L0;
L4:;
sj0=l1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l9;
si1=32767U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l9;
si1=32752U;
si0&=si1;
si1=32752U;
si0=si0 != si1;
if(si0){
goto L5;
}
L6:;
sd0=l0;
sd0=f15375(i,sd0);
goto L0;
L5:;
sd0=l0;
sd1=4503599627370496;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
sj1=-234187180623265792ULL;
sj0+=sj1;
l1=sj0;
L3:;
sj0=l1;
sj1=-4604367669032910848ULL;
sj0+=sj1;
l10=sj0;
sj1=46ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=63U;
si0&=si1;
si1=4U;
si0<<=(si1&31);
l9=si0;
si1=2954984U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sj1=l10;
sj2=52ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si1=(U32)(sj1);
sd1=(F64)(I32)(si1);
sd0+=sd1;
l2=sd0;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+2954832U);
l3=sd1;
si2=l9;
si3=2954976U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sj3=l1;
sj4=l10;
sj5=-4503599627370496ULL;
sj4&=sj5;
sj3-=sj4;
sd3=f64_reinterpret_i64(sj3);
si4=l9;
si5=2956000U;
si4+=si5;
sd4=f64_load(&i->m0,(U64)si4);
sd3-=sd4;
si4=l9;
si5=2956008U;
si4+=si5;
sd4=f64_load(&i->m0,(U64)si4);
sd3-=sd4;
sd2*=sd3;
l0=sd2;
sj2=i64_reinterpret_f64(sd2);
sj3=-4294967296ULL;
sj2&=sj3;
sd2=f64_reinterpret_i64(sj2);
l4=sd2;
sd1*=sd2;
l6=sd1;
sd0+=sd1;
l7=sd0;
sd1=l0;
sd2=l0;
sd1*=sd2;
l5=sd1;
sd2=l5;
sd3=l5;
sd2*=sd3;
sd3=l0;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2954888U);
sd3*=sd4;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+2954880U);
sd3+=sd4;
sd2*=sd3;
sd3=l5;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954872U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954864U);
sd4+=sd5;
sd3*=sd4;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954856U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2954848U);
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd1*=sd2;
sd2=l0;
sd3=l4;
sd2-=sd3;
sd3=l3;
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2954840U);
sd4=l0;
sd3*=sd4;
sd2+=sd3;
sd3=l6;
sd4=l2;
sd5=l7;
sd4-=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
L0:;
return sd0;
}

F64 f15379(rustpythonInstance*i,F64 l0,F64 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
F64 l10=0;
F64 l11=0;
F64 l12=0;
F64 l13=0;
F64 l14=0;
F64 l15=0;
F64 l16=0;
F64 l17=0;
F64 l18=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=2047U;
si0&=si1;
l4=si0;
si1=-1086U;
si0+=si1;
l5=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l6=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=-2047U;
si0+=si1;
si1=-2046U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
l8=si0;
si0=l5;
si1=-129U;
si0=si0 > si1;
if(si0){
goto L2;
}
L3:;
sj0=l2;
sj1=1ULL;
sj0<<=(sj1&63);
l9=sj0;
sj1=-1ULL;
sj0+=sj1;
sj1=-9007199254740993ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
sd0=1;
l10=sd0;
sj0=l6;
sj1=4607182418800017408ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
sj0=l9;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l6;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=-9007199254740992ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
sj0=l9;
sj1=-9007199254740991ULL;
si0=sj0 < sj1;
if(si0){
goto L5;
}
L6:;
sd0=l0;
sd1=l1;
sd0+=sd1;
goto L0;
L5:;
sj0=l6;
sj1=9214364837600034816ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
sd0=0;
sd1=l1;
sd2=l1;
sd1*=sd2;
sj2=l6;
sj3=9214364837600034815ULL;
si2=sj2 > sj3;
sj3=l2;
sj4=-1ULL;
si3=(U64)((I64)sj3>(I64)sj4);
si2^=si3;
sd0=si2?sd0:sd1;
goto L0;
L4:;
sj0=l6;
sj1=1ULL;
sj0<<=(sj1&63);
sj1=-1ULL;
sj0+=sj1;
sj1=-9007199254740993ULL;
si0=sj0 < sj1;
if(si0){
goto L7;
}
sd0=l0;
sd1=l0;
sd0*=sd1;
l10=sd0;
sj0=l6;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L8;
}
sd0=l10;
sd0=-(sd0);
sd1=l10;
sj2=l2;
si2=f15380(i,sj2);
si3=1U;
si2=si2 == si3;
sd0=si2?sd0:sd1;
l10=sd0;
L8:;
sj0=l2;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L1;
}
sd0=1;
sd1=l10;
sd0/=sd1;
goto L0;
L7:;
si0=0U;
l8=si0;
sj0=l6;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L9;
}
sj0=l2;
si0=f15380(i,sj0);
l8=si0;
if(si0){
goto L10;
}
sd0=l0;
sd0=f15375(i,sd0);
goto L0;
L10:;
si0=l7;
si1=2047U;
si0&=si1;
l7=si0;
sj0=l6;
sj1=9223372036854775807ULL;
sj0&=sj1;
l6=sj0;
si0=l8;
si1=1U;
si0=si0 == si1;
si1=18U;
si0<<=(si1&31);
l8=si0;
L9:;
si0=l5;
si1=-129U;
si0=si0 > si1;
if(si0){
goto L11;
}
sd0=1;
l10=sd0;
si0=l4;
si1=958U;
si0=si0 < si1;
if(si0){
goto L1;
}
sj0=l6;
sj1=4607182418800017408ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=2048U;
si0=si0 < si1;
sj1=l6;
sj2=4607182418800017409ULL;
si1=sj1 < sj2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=0U;
sd0=f15364(i,si0);
goto L0;
L12:;
si0=0U;
sd0=f15363(i,si0);
goto L0;
L11:;
si0=l7;
if(si0){
goto L2;
}
sd0=l0;
sd1=4503599627370496;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
sj1=-234187180623265792ULL;
sj0+=sj1;
l6=sj0;
L2:;
sj0=l2;
sj1=-134217728ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
l11=sd0;
sj1=l6;
sj2=l6;
sj3=-4604531861337669632ULL;
sj2+=sj3;
l2=sj2;
sj3=-4503599627370496ULL;
sj2&=sj3;
sj1-=sj2;
l6=sj1;
sj2=2147483648ULL;
sj1+=sj2;
sj2=-4294967296ULL;
sj1&=sj2;
sd1=f64_reinterpret_i64(sj1);
l10=sd1;
sj2=l2;
sj3=45ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=127U;
si2&=si3;
si3=5U;
si2<<=(si3&31);
l5=si2;
si3=2961336U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
l12=sd2;
sd1*=sd2;
sd2=-1;
sd1+=sd2;
l0=sd1;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2961280U);
l13=sd3;
sd2*=sd3;
l14=sd2;
sd1*=sd2;
l15=sd1;
sj2=l2;
sj3=52ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
si2=(U32)(sj2);
sd2=(F64)(I32)(si2);
l16=sd2;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2961264U);
sd2*=sd3;
si3=l5;
si4=2961352U;
si3+=si4;
sd3=f64_load(&i->m0,(U64)si3);
sd2+=sd3;
l17=sd2;
sd3=l0;
sd4=l12;
sj5=l6;
sd5=f64_reinterpret_i64(sj5);
sd6=l10;
sd5-=sd6;
sd4*=sd5;
l18=sd4;
sd3+=sd4;
l0=sd3;
sd2+=sd3;
l10=sd2;
sd1+=sd2;
l12=sd1;
sd2=l15;
sd3=l10;
sd4=l12;
sd3-=sd4;
sd2+=sd3;
sd3=l18;
sd4=l14;
sd5=l13;
sd6=l0;
sd5*=sd6;
l13=sd5;
sd4+=sd5;
sd3*=sd4;
sd4=l16;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+2961272U);
sd4*=sd5;
si5=l5;
si6=2961360U;
si5+=si6;
sd5=f64_load(&i->m0,(U64)si5);
sd4+=sd5;
sd5=l0;
sd6=l17;
sd7=l10;
sd6-=sd7;
sd5+=sd6;
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd3=l0;
sd4=l0;
sd5=l13;
sd4*=sd5;
l10=sd4;
sd3*=sd4;
sd4=l10;
sd5=l10;
sd6=l0;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+2961328U);
sd6*=sd7;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+2961320U);
sd6+=sd7;
sd5*=sd6;
sd6=l0;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+2961312U);
sd6*=sd7;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+2961304U);
sd6+=sd7;
sd5+=sd6;
sd4*=sd5;
sd5=l0;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+2961296U);
sd5*=sd6;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+2961288U);
sd5+=sd6;
sd4+=sd5;
sd3*=sd4;
sd2+=sd3;
l14=sd2;
sd1+=sd2;
l0=sd1;
sj1=i64_reinterpret_f64(sd1);
sj2=-134217728ULL;
sj1&=sj2;
sd1=f64_reinterpret_i64(sj1);
l10=sd1;
sd0*=sd1;
l13=sd0;
sj0=i64_reinterpret_f64(sd0);
l6=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l5=si0;
si1=-969U;
si0+=si1;
si1=63U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l5;
si1=968U;
si0=si0 > si1;
if(si0){
goto L14;
}
sd0=-1;
sd1=1;
si2=l8;
sd0=si2?sd0:sd1;
goto L0;
L14:;
si0=l5;
si1=1033U;
si0=si0 < si1;
l7=si0;
si0=0U;
l5=si0;
si0=l7;
if(si0){
goto L13;
}
sj0=l6;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L15;
}
si0=l8;
sd0=f15363(i,si0);
goto L0;
L15:;
si0=l8;
sd0=f15364(i,si0);
goto L0;
L13:;
sd0=l1;
sd1=l11;
sd0-=sd1;
sd1=l10;
sd0*=sd1;
sd1=l14;
sd2=l12;
sd3=l0;
sd2-=sd3;
sd1+=sd2;
sd2=l0;
sd3=l10;
sd2-=sd3;
sd1+=sd2;
sd2=l1;
sd1*=sd2;
sd0+=sd1;
sd1=l13;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952672U);
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952680U);
l0=sd2;
sd1+=sd2;
l10=sd1;
sd2=l0;
sd1-=sd2;
l0=sd1;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952696U);
sd1*=sd2;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2952688U);
sd2*=sd3;
sd3=l13;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0*=sd1;
l1=sd0;
sd1=l1;
sd0*=sd1;
sd1=l0;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952728U);
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2952720U);
sd1+=sd2;
sd0*=sd1;
sd1=l1;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2952712U);
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+2952704U);
sd2+=sd3;
sd1*=sd2;
sd2=l10;
sj2=i64_reinterpret_f64(sd2);
l6=sj2;
si2=(U32)(sj2);
si3=4U;
si2<<=(si3&31);
si3=2032U;
si2&=si3;
l7=si2;
si3=2952784U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd3=l0;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
si0=l7;
si1=2952792U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
sj2=45ULL;
sj1<<=(sj2&63);
sj0+=sj1;
l2=sj0;
si0=l5;
if(si0){
goto L16;
}
sd0=l0;
sj1=l2;
sj2=l6;
sd0=f15381(i,sd0,sj1,sj2);
goto L0;
L16:;
sj0=l2;
sd0=f64_reinterpret_i64(sj0);
l1=sd0;
sd1=l0;
sd0*=sd1;
sd1=l1;
sd0+=sd1;
l10=sd0;
L1:;
sd0=l10;
L0:;
return sd0;
}

U32 f15380(rustpythonInstance*i,U64 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=0U;
l1=si0;
sj0=l0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l2=si0;
si1=1023U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=2U;
l1=si0;
si0=l2;
si1=1075U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=0U;
l1=si0;
sj0=1ULL;
si1=1075U;
si2=l2;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
sj1=-1ULL;
sj0+=sj1;
sj1=l0;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=2U;
si1=1U;
sj2=l3;
sj3=l0;
sj2&=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

F64 f15381(rustpythonInstance*i,F64 l0,U64 l1,U64 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si2,si4;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5;
sj0=l2;
sj1=2147483648ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l1;
sj1=-4544132024016830464ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
sd1=l3;
sd0+=sd1;
sd1=5.4861240687936887e+303;
sd0*=sd1;
goto L0;
L1:;
sj0=l1;
sj1=4602678819172646912ULL;
sj0+=sj1;
l2=sj0;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd0=fabs(sd0);
sd1=1;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L2;
}
sj0=l2;
sj1=-9223372036854775808ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
sd1=l0;
sd2=-1;
sd3=1;
sd4=l0;
sd5=0;
si4=sd4 < sd5;
sd2=si4?sd2:sd3;
l5=sd2;
sd1+=sd2;
l6=sd1;
sd2=l4;
sd3=l3;
sd4=l0;
sd3-=sd4;
sd2+=sd3;
sd3=l0;
sd4=l5;
sd5=l6;
sd4-=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd2=l5;
sd1-=sd2;
l0=sd1;
sd2=l0;
sd3=0;
si2=sd2 == sd3;
sd0=si2?sd0:sd1;
l0=sd0;
L2:;
sd0=l0;
sd1=2.2250738585072014e-308;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15382(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l2=si0;
si1=1074U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=1021U;
si0=si0 > si1;
if(si0){
goto L2;
}
sd0=l0;
sd1=0;
sd0*=sd1;
goto L0;
L2:;
sd0=l0;
sd1=l0;
sd1=-(sd1);
sj2=l1;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
sd0=si2?sd0:sd1;
l0=sd0;
sd1=4503599627370496;
sd0+=sd1;
sd1=-4503599627370496;
sd0+=sd1;
sd1=l0;
sd0-=sd1;
l3=sd0;
sd1=0.5;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L4;
}
sd0=l0;
sd1=l3;
sd0+=sd1;
sd1=-1;
sd0+=sd1;
l0=sd0;
goto L3;
L4:;
sd0=l0;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd0=l3;
sd1=-0.5;
si0=sd0 <= sd1;
si0=!(si0);
if(si0){
goto L3;
}
sd0=l0;
sd1=1;
sd0+=sd1;
l0=sd0;
L3:;
sd0=l0;
sd1=l0;
sd1=-(sd1);
sj2=l1;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
sd0=si2?sd0:sd1;
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

F64 f15383(rustpythonInstance*i,F64 l0,U32 l1) {
U32 si0,si1,si2,si3;
U64 sj1,sj2;
F64 sd0,sd1;
si0=l1;
si1=1024U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
sd0=l0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l0=sd0;
si0=l1;
si1=2047U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si1=-1023U;
si0+=si1;
l1=si0;
goto L1;
L3:;
sd0=l0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l0=sd0;
si0=l1;
si1=3069U;
si2=l1;
si3=3069U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=-2046U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=-1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
sd0=l0;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l0=sd0;
si0=l1;
si1=-1992U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l1;
si1=969U;
si0+=si1;
l1=si0;
goto L1;
L4:;
sd0=l0;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l0=sd0;
si0=l1;
si1=-2960U;
si2=l1;
si3=-2960U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
si1=1938U;
si0+=si1;
l1=si0;
L1:;
sd0=l0;
si1=l1;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
L0:;
return sd0;
}

F64 f15384(rustpythonInstance*i,F64 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072243195U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=1045430272U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=0;
si2=0U;
sd0=f15358(i,sd0,sd1,si2);
l0=sd0;
goto L1;
L2:;
si0=l2;
si1=2146435072U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=l0;
sd1=l0;
sd0-=sd1;
l0=sd0;
goto L1;
L3:;
sd0=l0;
si1=l1;
si0=f15357(i,sd0,si1);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
default:
goto L4;
}
L7:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=1U;
sd0=f15358(i,sd0,sd1,si2);
l0=sd0;
goto L1;
L6:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd0=f15355(i,sd0,sd1);
l0=sd0;
goto L1;
L5:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=1U;
sd0=f15358(i,sd0,sd1,si2);
sd0=-(sd0);
l0=sd0;
goto L1;
L4:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd0=f15355(i,sd0,sd1);
sd0=-(sd0);
l0=sd0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
sd0=l0;
L0:;
return sd0;
}

F64 f15385(rustpythonInstance*i,F64 l0) {
F64 l1=0;
U64 l2=0;
F64 l3=0;
U32 l4=0;
U32 si0,si1;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4;
sd0=0.5;
sd1=l0;
sd0=copysign(sd0,sd1);
l1=sd0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
l2=sj0;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=1082535489U;
si0=si0 > si1;
if(si0){
goto L2;
}
sd0=l3;
sd0=f15369(i,sd0);
l3=sd0;
si0=l4;
si1=1072693247U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=1045430272U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l1;
sd1=l3;
sd2=l3;
sd1+=sd2;
sd2=l3;
sd3=l3;
sd2*=sd3;
sd3=l3;
sd4=1;
sd3+=sd4;
sd2/=sd3;
sd1-=sd2;
sd0*=sd1;
goto L0;
L3:;
sd0=l1;
sd1=l3;
sd2=l3;
sd3=l3;
sd4=1;
sd3+=sd4;
sd2/=sd3;
sd1+=sd2;
sd0*=sd1;
goto L0;
L2:;
sd0=l1;
sd1=l1;
sd0+=sd1;
sd1=l3;
sd1=f15360(i,sd1);
sd0*=sd1;
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

F64 f15386(rustpythonInstance*i,F64 l0,F64 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9,sd10,sd11;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=2147483640U;
si0&=si1;
si1=1072010280U;
si0=si0 < si1;
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
sd0=0.78539816339744828;
sd1=l0;
sd2=l0;
sd2=-(sd2);
sj3=l3;
sj4=-1ULL;
si3=(U64)((I64)sj3>(I64)sj4);
l6=si3;
sd1=si3?sd1:sd2;
sd0-=sd1;
sd1=3.061616997868383e-17;
sd2=l1;
sd3=l1;
sd3=-(sd3);
si4=l6;
sd2=si4?sd2:sd3;
sd1-=sd2;
sd0+=sd1;
l0=sd0;
si0=l4;
si1=31U;
si0>>=(si1&31);
l4=si0;
sd0=0;
l1=sd0;
L1:;
sd0=l0;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l7=sd2;
sd1*=sd2;
l8=sd1;
sd2=0.33333333333333409;
sd1*=sd2;
sd2=l7;
sd3=l8;
sd4=l7;
sd5=l7;
sd4*=sd5;
l9=sd4;
sd5=l9;
sd6=l9;
sd7=l9;
sd8=l9;
sd9=-1.8558637485527546e-05;
sd8*=sd9;
sd9=7.8179444293955709e-05;
sd8+=sd9;
sd7*=sd8;
sd8=0.0005880412408202641;
sd7+=sd8;
sd6*=sd7;
sd7=0.0035920791075913124;
sd6+=sd7;
sd5*=sd6;
sd6=0.021869488294859542;
sd5+=sd6;
sd4*=sd5;
sd5=0.13333333333320124;
sd4+=sd5;
sd5=l7;
sd6=l9;
sd7=l9;
sd8=l9;
sd9=l9;
sd10=l9;
sd11=2.5907305186363371e-05;
sd10*=sd11;
sd11=7.1407249138260819e-05;
sd10+=sd11;
sd9*=sd10;
sd10=0.00024646313481846991;
sd9+=sd10;
sd8*=sd9;
sd9=0.0014562094543252903;
sd8+=sd9;
sd7*=sd8;
sd8=0.0088632398235993001;
sd7+=sd8;
sd6*=sd7;
sd7=0.053968253976226052;
sd6+=sd7;
sd5*=sd6;
sd4+=sd5;
sd3*=sd4;
sd4=l1;
sd3+=sd4;
sd2*=sd3;
sd3=l1;
sd2+=sd3;
sd1+=sd2;
l7=sd1;
sd0+=sd1;
l9=sd0;
si0=l5;
if(si0){
goto L3;
}
si0=1U;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0-=si1;
sd0=(F64)(I32)(si0);
l1=sd0;
sd1=l0;
sd2=l7;
sd3=l9;
sd4=l9;
sd3*=sd4;
sd4=l9;
sd5=l1;
sd4+=sd5;
sd3/=sd4;
sd2-=sd3;
sd1+=sd2;
l9=sd1;
sd2=l9;
sd1+=sd2;
sd0-=sd1;
l9=sd0;
sd0=-(sd0);
sd1=l9;
si2=l4;
sd0=si2?sd0:sd1;
goto L0;
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
sd0=-1;
sd1=l9;
sd0/=sd1;
l1=sd0;
sd1=l1;
sj1=i64_reinterpret_f64(sd1);
sj2=-4294967296ULL;
sj1&=sj2;
sd1=f64_reinterpret_i64(sj1);
l1=sd1;
sd2=l7;
sd3=l9;
sj3=i64_reinterpret_f64(sd3);
sj4=-4294967296ULL;
sj3&=sj4;
sd3=f64_reinterpret_i64(sj3);
l9=sd3;
sd4=l0;
sd3-=sd4;
sd2-=sd3;
sd1*=sd2;
sd2=l1;
sd3=l9;
sd2*=sd3;
sd3=1;
sd2+=sd3;
sd1+=sd2;
sd0*=sd1;
sd1=l1;
sd0+=sd1;
l9=sd0;
L4:;
sd0=l9;
L0:;
return sd0;
}

F64 f15387(rustpythonInstance*i,F64 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072243195U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=1044381696U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=0;
si2=0U;
sd0=f15386(i,sd0,sd1,si2);
l0=sd0;
goto L1;
L2:;
si0=l2;
si1=2146435072U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=l0;
sd1=l0;
sd0-=sd1;
l0=sd0;
goto L1;
L3:;
sd0=l0;
si1=l1;
si0=f15357(i,sd0,si1);
l2=si0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=1U;
si2&=si3;
sd0=f15386(i,sd0,sd1,si2);
l0=sd0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
sd0=l0;
L0:;
return sd0;
}

F64 f15388(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U64 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=9223372036854775807ULL;
sj0&=sj1;
l2=sj0;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=1071748075U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=1077149697U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=-0.f;
sd1=l0;
sd0/=sd1;
sd1=1;
sd0+=sd1;
l0=sd0;
goto L1;
L3:;
sd0=1;
sd1=2;
sd2=l0;
sd3=l0;
sd2+=sd3;
sd2=f15369(i,sd2);
sd3=2;
sd2+=sd3;
sd1/=sd2;
sd0-=sd1;
l0=sd0;
goto L1;
L2:;
si0=l3;
si1=1070618799U;
si0=si0 < si1;
if(si0){
goto L4;
}
sd0=l0;
sd1=l0;
sd0+=sd1;
sd0=f15369(i,sd0);
l0=sd0;
sd1=l0;
sd2=2;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
goto L1;
L4:;
si0=l3;
si1=1048576U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=-2;
sd0*=sd1;
sd0=f15369(i,sd0);
l0=sd0;
sd0=-(sd0);
sd1=l0;
sd2=2;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
L1:;
sd0=l0;
sd0=-(sd0);
sd1=l0;
sj2=l1;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
sd0=si2?sd0:sd1;
L0:;
return sd0;
}

U32 f15389(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1;
si0=0U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
{
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l4;
si1=l5;
si0-=si1;
l3=si0;
L1:;
si0=l3;
L0:;
return si0;
}

U32 f15390(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=l2;
si1=32U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0+=si1;
l3=si0;
si0=l0;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
si0=l0;
si1=2U;
si0+=si1;
l4=si0;
si0=l1;
si1=2U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=-3U;
si0+=si1;
l3=si0;
si0=l0;
si1=3U;
si0+=si1;
l4=si0;
si0=l1;
si1=3U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l2;
si1=-4U;
si0+=si1;
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
l4=si0;
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
goto L1;
L3:;
si0=l0;
si1=l1;
si2=l2;
wasmMemoryCopy(
&i->m0,&i->m0,si0,si1,si2);
si0=l0;
goto L0;
L2:;
si0=l2;
l3=si0;
si0=l0;
l4=si0;
si0=l1;
l5=si0;
L1:;
si0=l4;
si1=3U;
si0&=si1;
l2=si0;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l3;
l2=si0;
goto L6;
L7:;
si0=l3;
si1=-16U;
si0+=si1;
l2=si0;
si1=16U;
si0&=si1;
if(si0){
goto L8;
}
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l2;
l3=si0;
L8:;
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
l2=si0;
L9:;
{
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l2;
si1=-32U;
si0+=si1;
l2=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L9;
}
}
L6:;
si0=l2;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
L10:;
si0=l2;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
L11:;
si0=l2;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
L12:;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
goto L0;
L5:;
si0=l3;
si1=32U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l2;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L19;
case 2:
goto L18;
default:
goto L4;
}
L19:;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=2U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+2U,si1);
si0=l4;
si1=l5;
si2=6U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+6U,sj1);
si0=l4;
si1=18U;
si0+=si1;
l2=si0;
si0=l5;
si1=18U;
si0+=si1;
l1=si0;
si0=14U;
l6=si0;
si0=l5;
si1=14U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=14U;
l3=si0;
goto L15;
L18:;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l5;
si2=5U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+5U,sj1);
si0=l4;
si1=17U;
si0+=si1;
l2=si0;
si0=l5;
si1=17U;
si0+=si1;
l1=si0;
si0=13U;
l6=si0;
si0=l5;
si1=13U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=15U;
l3=si0;
goto L15;
L17:;
si0=l3;
si1=16U;
si0&=si1;
if(si0){
goto L21;
}
si0=l4;
l2=si0;
si0=l5;
l1=si0;
goto L20;
L21:;
si0=l4;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+5U);
i64_store(&i->m0,(U64)si0+5U,sj1);
si0=l4;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+13U);
i32_store16(&i->m0,(U64)si0+13U,si1);
si0=l4;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+15U);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l4;
si1=16U;
si0+=si1;
l2=si0;
si0=l5;
si1=16U;
si0+=si1;
l1=si0;
L20:;
si0=l3;
si1=8U;
si0&=si1;
if(si0){
goto L14;
}
goto L13;
L16:;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l4;
si1=l2;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l5;
si2=3U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+3U,si1);
si0=l4;
si1=l5;
si2=7U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+7U,sj1);
si0=l4;
si1=19U;
si0+=si1;
l2=si0;
si0=l5;
si1=19U;
si0+=si1;
l1=si0;
si0=15U;
l6=si0;
si0=l5;
si1=15U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=13U;
l3=si0;
L15:;
si0=l4;
si1=l6;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L14:;
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
L13:;
si0=l3;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L22:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
L23:;
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
L4:;
si0=l0;
L0:;
return si0;
}

U32 f15391(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l2;
si1=33U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=l2;
si1+=si2;
l3=si1;
si0-=si1;
si1=0U;
si2=l2;
si3=1U;
si2<<=(si3&31);
si1-=si2;
si0=si0 > si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=l1;
si2=l2;
wasmMemoryCopy(
&i->m0,&i->m0,si0,si1,si2);
goto L1;
L2:;
si0=l1;
si1=l0;
si0^=si1;
si1=3U;
si0&=si1;
l4=si0;
si0=l0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l4=si0;
si0=l0;
l3=si0;
goto L4;
L7:;
si0=l0;
si1=3U;
si0&=si1;
if(si0){
goto L8;
}
si0=l2;
l4=si0;
si0=l0;
l3=si0;
goto L5;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L5;
L9:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=-2U;
si0+=si1;
l4=si0;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L10;
}
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L5;
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=-3U;
si0+=si1;
l4=si0;
si0=l0;
si1=3U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L11;
}
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L5;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=-4U;
si0+=si1;
l4=si0;
goto L5;
L6:;
si0=l4;
if(si0){
goto L12;
}
si0=l3;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=-1U;
si1+=si2;
l3=si1;
si0+=si1;
l4=si0;
si1=l1;
si2=l3;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
si0&=si1;
if(si0){
goto L14;
}
si0=l3;
l2=si0;
goto L13;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=-2U;
si1+=si2;
l3=si1;
si0+=si1;
l4=si0;
si1=l1;
si2=l3;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
si0&=si1;
if(si0){
goto L15;
}
si0=l3;
l2=si0;
goto L13;
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=-3U;
si1+=si2;
l3=si1;
si0+=si1;
l4=si0;
si1=l1;
si2=l3;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
si0&=si1;
if(si0){
goto L16;
}
si0=l3;
l2=si0;
goto L13;
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=-4U;
si1+=si2;
l2=si1;
si0+=si1;
si1=l1;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
L13:;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l2;
si1=-4U;
si0+=si1;
l5=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=-4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-4U;
si0+=si1;
l6=si0;
L18:;
{
si0=l6;
si1=l2;
si0+=si1;
si1=l4;
si2=l2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l5;
si1=12U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=-16U;
si0+=si1;
l6=si0;
si0=l0;
si1=-16U;
si0+=si1;
l5=si0;
L19:;
{
si0=l5;
si1=l2;
si0+=si1;
l3=si0;
si1=12U;
si0+=si1;
si1=l6;
si2=l2;
si1+=si2;
l4=si1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L19;
}
}
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1U;
si0+=si1;
l5=si0;
si0=l2;
si1=3U;
si0&=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=-1U;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l6=si0;
L21:;
{
si0=l6;
si1=l2;
si0+=si1;
si1=l4;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=-4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-4U;
si0+=si1;
l6=si0;
L22:;
{
si0=l6;
si1=l2;
si0+=si1;
l1=si0;
si1=3U;
si0+=si1;
si1=l4;
si2=l2;
si1+=si2;
l3=si1;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
si1=l3;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
if(si0){
goto L22;
}
goto L1;
}
L5:;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si1=-4U;
si0+=si1;
l6=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
si1=7U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L23;
}
L24:;
{
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l6;
si1=28U;
si0=si0 < si1;
if(si0){
goto L4;
}
L25:;
{
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l4;
si1=-32U;
si0+=si1;
l4=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L25;
}
}
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=-1U;
si0+=si1;
l6=si0;
si0=l4;
si1=7U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L26;
}
L27:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L27;
}
}
L26:;
si0=l6;
si1=7U;
si0=si0 < si1;
if(si0){
goto L1;
}
L28:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
if(si0){
goto L28;
}
}
L1:;
si0=l0;
L0:;
return si0;
}

U32 f15392(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l2;
si1=33U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
wasmMemoryFill(
&i->m0,si0,si1,si2);
si0=l0;
goto L0;
L1:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si0+=si1;
l3=si0;
si1=-1U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=-3U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=7U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=-4U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
si2=l0;
si1-=si2;
si2=3U;
si1&=si2;
l4=si1;
si0+=si1;
l5=si0;
si1=l1;
si2=255U;
si1&=si2;
si2=16843009U;
si1*=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
si2=l4;
si1-=si2;
si2=-4U;
si1&=si2;
l1=si1;
si0+=si1;
l2=si0;
si1=-4U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=9U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=-8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=25U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=-16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-24U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-28U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
si2=4U;
si1&=si2;
si2=24U;
si1|=si2;
l2=si1;
si0-=si1;
l1=si0;
si1=32U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l6=sj0;
si0=l5;
si1=l2;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
l2=si0;
si0=l1;
si1=-32U;
si0+=si1;
l1=si0;
si1=31U;
si0=si0 > si1;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
L0:;
return si0;
}

U32 f15393(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l1;
si1=255U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=l0;
goto L0;
L5:;
si0=l3;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
goto L0;
L4:;
si0=l0;
si1=l0;
si1=f15399(i,si1);
si0+=si1;
goto L0;
L3:;
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
l0=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
l0=si0;
goto L2;
L7:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=3U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
l0=si0;
goto L2;
L8:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
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
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L9;
}
si0=l2;
si1=16843009U;
si0*=si1;
l2=si0;
L10:;
{
si0=l3;
si1=l2;
si0^=si1;
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L9;
}
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
}
L9:;
si0=l0;
si1=-1U;
si0+=si1;
l3=si0;
L11:;
{
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L1:;
si0=l3;
L0:;
return si0;
}

U32 f15394(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L2:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
si1=l2;
si2=255U;
si1&=si2;
si0-=si1;
L0:;
return si0;
}

U32 f15395(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si1=l0;
si0^=si1;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
goto L2;
L3:;
si0=l1;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l2=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L5;
}
si0=l0;
goto L0;
L5:;
si0=l0;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L6;
}
si0=l2;
l0=si0;
si0=l3;
l1=si0;
goto L4;
L6:;
si0=l2;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=2U;
si0+=si1;
l2=si0;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L7;
}
si0=l2;
l0=si0;
si0=l3;
l1=si0;
goto L4;
L7:;
si0=l2;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=3U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
if(si0){
goto L8;
}
si0=l2;
l0=si0;
si0=l3;
l1=si0;
goto L4;
L8:;
si0=l2;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L2;
}
L9:;
{
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
}
L2:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
goto L0;
L10:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
l2=si0;
L11:;
{
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l0=si1;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
if(si0){
goto L11;
}
}
L1:;
si0=l2;
L0:;
return si0;
}

U32 f15396(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f15395(i,si0,si1);
si0=l0;
L0:;
return si0;
}

U32 f15397(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=f15399(i,si0);
si1=1U;
si0+=si1;
l1=si0;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=l1;
si0=f15390(i,si0,si1,si2);
L1:;
si0=l2;
L0:;
return si0;
}

U32 f15398(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=f15342(i,si0);
l0=si0;
si0=f15399(i,si0);
l3=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=68U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=l2;
si3=-1U;
si2+=si3;
l2=si2;
si0=f15390(i,si0,si1,si2);
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=68U;
goto L0;
L2:;
si0=l1;
si1=l0;
si2=l3;
si3=1U;
si2+=si3;
si0=f15390(i,si0,si1,si2);
si0=0U;
l3=si0;
L1:;
si0=l3;
L0:;
return si0;
}

U32 f15399(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
l1=si0;
si0=l0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si0+=si1;
l1=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=2U;
si0+=si1;
l1=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=3U;
si0+=si1;
l1=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
L2:;
si0=l1;
si1=-5U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si1=5U;
si0+=si1;
l2=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
}
L4:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
}
L1:;
si0=l1;
si1=l0;
si0-=si1;
L0:;
return si0;
}

U32 f15400(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1;
si0=l2;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L3:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L4;
}
si0=l4;
l3=si0;
goto L2;
L4:;
si0=l2;
if(si0){
goto L5;
}
si0=l4;
l3=si0;
goto L2;
L5:;
si0=l4;
si1=255U;
si0&=si1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
l3=si0;
goto L2;
L6:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l4;
if(si0){
goto L3;
}
}
L2:;
si0=l3;
si1=255U;
si0&=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0-=si1;
L0:;
return si0;
}

void f15401(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U32 l3) {
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l3;
si1=64U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
sj0=l2;
si1=0U;
si2=l3;
si1-=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l1;
si2=l3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
l4=sj2;
sj1>>=(sj2&63);
sj0|=sj1;
l1=sj0;
sj0=l2;
sj1=l4;
sj0>>=(sj1&63);
l2=sj0;
goto L1;
L2:;
sj0=l2;
si1=l3;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l1=sj0;
sj0=0ULL;
l2=sj0;
L1:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
L0:;
}

void f15402(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l3;
si0=!(sj0);
if(si0){
goto L5;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L4;
}
L5:;
sj0=0ULL;
l6=sj0;
sj0=l1;
sj1=l3;
si0=sj0 < sj1;
sj1=l2;
sj2=l4;
si1=sj1 < sj2;
sj2=l2;
sj3=l4;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L3;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l5;
si1=16U;
si0+=si1;
sj1=l3;
sj2=l4;
sj3=l4;
sj3=I64_CLZ(sj3);
si3=(U32)(sj3);
sj4=l2;
sj4=I64_CLZ(sj4);
si4=(U32)(sj4);
si3-=si4;
l7=si3;
si4=127U;
si3&=si4;
f15406(i,si0,sj1,sj2,si3);
sj0=1ULL;
si1=l7;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l8=sj0;
si0=l5;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj0=0ULL;
l6=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
L6:;
{
sj0=l1;
sj1=l10;
sj0-=sj1;
l11=sj0;
sj0=l2;
sj1=l9;
sj0-=sj1;
sj1=l1;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l12=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L7;
}
sj0=l6;
sj1=l8;
sj0|=sj1;
l6=sj0;
sj0=l11;
sj1=l3;
si0=sj0 >= sj1;
sj1=l12;
sj2=l4;
si1=sj1 >= sj2;
sj2=l12;
sj3=l4;
si2=sj2 == sj3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L2;
}
sj0=l11;
l1=sj0;
sj0=l12;
l2=sj0;
L7:;
sj0=l10;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=l9;
sj2=63ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l10=sj0;
sj0=l8;
sj1=1ULL;
sj0>>=(sj1&63);
l8=sj0;
sj0=l9;
sj1=1ULL;
sj0>>=(sj1&63);
l9=sj0;
goto L6;
}
L4:;
sj0=l2;
si0=!(sj0);
if(si0){
goto L11;
}
sj0=l2;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L8;
}
sj0=l2;
sj1=l3;
si0=sj0 == sj1;
if(si0){
goto L10;
}
sj0=l2;
sj1=l2;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l13=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l12=sj0;
sj0=l3;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
sj0=l12;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l10=sj0;
sj1=l10;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l10=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=4294967295ULL;
sj1&=sj2;
sj0|=sj1;
l1=sj0;
sj1=l1;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l1=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l11=sj0;
sj0=l10;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj0|=sj1;
l6=sj0;
sj0=l10;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l13;
sj0|=sj1;
l13=sj0;
sj0=0ULL;
l12=sj0;
goto L1;
L11:;
sj0=l1;
sj1=l1;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l6=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l11=sj0;
sj0=0ULL;
l12=sj0;
goto L2;
L10:;
sj0=l1;
sj1=l1;
sj2=l2;
sj1=DIV_U(sj1,sj2);
l6=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l11=sj0;
sj0=0ULL;
l12=sj0;
sj0=1ULL;
l13=sj0;
goto L1;
L9:;
sj0=l1;
sj1=l3;
si0=sj0 < sj1;
sj1=l12;
sj2=l4;
si1=sj1 < sj2;
sj2=l12;
sj3=l4;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L12;
}
sj0=l4;
sj1=63ULL;
sj0<<=(sj1&63);
sj1=l3;
sj2=1ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l10=sj0;
sj0=l3;
sj1=63ULL;
sj0<<=(sj1&63);
l9=sj0;
sj0=-9223372036854775808ULL;
l2=sj0;
sj0=0ULL;
l11=sj0;
L13:;
{
sj0=l12;
sj1=l10;
sj0-=sj1;
sj1=l1;
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l8=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L14;
}
sj0=l1;
sj1=l9;
sj0-=sj1;
l1=sj0;
sj0=l2;
sj1=l11;
sj0|=sj1;
l11=sj0;
sj0=l8;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L15;
}
sj0=l8;
l12=sj0;
goto L14;
L15:;
sj0=l1;
sj1=l3;
sj0=DIV_U(sj0,sj1);
l10=sj0;
sj1=l11;
sj0|=sj1;
l6=sj0;
sj0=l1;
sj1=l10;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l11=sj0;
sj0=0ULL;
l12=sj0;
goto L1;
L14:;
sj0=l9;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=l10;
sj2=63ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l9=sj0;
sj0=l2;
sj1=1ULL;
sj0>>=(sj1&63);
l2=sj0;
sj0=l10;
sj1=1ULL;
sj0>>=(sj1&63);
l10=sj0;
goto L13;
}
L12:;
sj0=0ULL;
l6=sj0;
sj0=l1;
l11=sj0;
goto L1;
L8:;
si0=l5;
sj1=l3;
sj2=l4;
si3=63U;
sj4=l3;
sj4=I64_CLZ(sj4);
si4=(U32)(sj4);
l7=si4;
sj5=l2;
sj5=I64_CLZ(sj5);
si5=(U32)(sj5);
l14=si5;
si4-=si5;
si5=64U;
si4+=si5;
si5=l7;
si6=l14;
si5=si5 == si6;
si3=si5?si3:si4;
l7=si3;
si4=127U;
si3&=si4;
f15406(i,si0,sj1,sj2,si3);
sj0=1ULL;
si1=l7;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l12=sj0;
si0=l5;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj0=0ULL;
l11=sj0;
L16:;
{
sj0=l2;
sj1=l10;
sj0-=sj1;
sj1=l1;
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l8=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L17;
}
sj0=l1;
sj1=l9;
sj0-=sj1;
l1=sj0;
sj0=l12;
sj1=l11;
sj0|=sj1;
l11=sj0;
sj0=l8;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L18;
}
sj0=l8;
l2=sj0;
goto L17;
L18:;
sj0=l1;
sj1=l3;
sj0=DIV_U(sj0,sj1);
l10=sj0;
sj1=l11;
sj0|=sj1;
l6=sj0;
sj0=l1;
sj1=l10;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l11=sj0;
sj0=0ULL;
l12=sj0;
goto L2;
L17:;
sj0=l9;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=l10;
sj2=63ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l9=sj0;
sj0=l12;
sj1=1ULL;
sj0>>=(sj1&63);
l12=sj0;
sj0=l10;
sj1=1ULL;
sj0>>=(sj1&63);
l10=sj0;
goto L16;
}
L3:;
sj0=l1;
l11=sj0;
sj0=l2;
l12=sj0;
L2:;
sj0=0ULL;
l13=sj0;
L1:;
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15403(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=l1;
sj2=l2;
sj3=l3;
sj4=l4;
f15402(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15404(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si2;
U64 sj1,sj2,sj3,sj4;
si0=l0;
sj1=l3;
sj2=4294967295ULL;
sj1&=sj2;
l5=sj1;
sj2=l1;
sj3=4294967295ULL;
sj2&=sj3;
l6=sj2;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj3=l1;
sj4=32ULL;
sj3>>=(sj4&63);
l8=sj3;
sj2*=sj3;
l9=sj2;
sj3=l3;
sj4=32ULL;
sj3>>=(sj4&63);
l10=sj3;
sj4=l6;
sj3*=sj4;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
sj2=l8;
sj1*=sj2;
sj2=l5;
sj3=l9;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=32ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1+=sj2;
sj2=l6;
sj3=l7;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l4;
sj3=l1;
sj2*=sj3;
sj3=l3;
sj4=l2;
sj3*=sj4;
sj2+=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
L0:;
}

void f15405(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
sj0=0ULL;
l7=sj0;
sj0=0ULL;
l8=sj0;
si0=0U;
l9=si0;
sj0=l1;
sj1=l2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l3;
sj1=l4;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=0ULL;
sj1=l3;
sj0-=sj1;
sj1=l3;
sj2=l4;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l9=si2;
sj0=si2?sj0:sj1;
l7=sj0;
sj0=0ULL;
sj1=l1;
sj0-=sj1;
sj1=l1;
sj2=l2;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l10=si2;
sj0=si2?sj0:sj1;
l8=sj0;
sj0=0ULL;
sj1=l4;
sj2=l3;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj0-=sj1;
sj1=l4;
si2=l9;
sj0=si2?sj0:sj1;
l3=sj0;
sj0=l4;
sj1=l2;
sj0^=sj1;
l4=sj0;
sj0=0ULL;
sj1=l2;
sj2=l1;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj0-=sj1;
sj1=l2;
si2=l10;
sj0=si2?sj0:sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l6;
si1=64U;
si0+=si1;
sj1=l7;
sj2=l3;
sj3=l8;
sj4=l1;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
si0=1U;
l9=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+64U);
l2=sj0;
goto L2;
L5:;
si0=l6;
si1=16U;
si0+=si1;
sj1=l7;
sj2=0ULL;
sj3=l8;
sj4=l1;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=0U;
l9=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+16U);
l2=sj0;
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
sj0=l7;
l1=sj0;
goto L2;
L4:;
si0=l6;
si1=48U;
si0+=si1;
sj1=l8;
sj2=0ULL;
sj3=l7;
sj4=l3;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=32U;
si0+=si1;
sj1=l1;
sj2=0ULL;
sj3=l7;
sj4=l3;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
sj0+=sj1;
l1=sj0;
sj1=l2;
si0=sj0 < sj1;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l9=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+48U);
l2=sj0;
goto L2;
L3:;
si0=l6;
sj1=l3;
sj2=0ULL;
sj3=l8;
sj4=l1;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l1=sj0;
sj1=l7;
si0=sj0 < sj1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l9=si0;
L2:;
sj0=0ULL;
sj1=l2;
sj0-=sj1;
sj1=l2;
sj2=l4;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l10=si2;
sj0=si2?sj0:sj1;
l8=sj0;
sj0=0ULL;
sj1=l1;
sj2=l2;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj0-=sj1;
sj1=l1;
si2=l10;
sj0=si2?sj0:sj1;
l7=sj0;
sj1=l4;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
si1=l9;
si0|=si1;
l9=si0;
L1:;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15406(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U32 l3) {
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l3;
si1=64U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
sj0=l2;
si1=l3;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
l4=sj1;
sj0<<=(sj1&63);
sj1=l1;
si2=0U;
si3=l3;
si2-=si3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
sj1>>=(sj2&63);
sj0|=sj1;
l2=sj0;
sj0=l1;
sj1=l4;
sj0<<=(sj1&63);
l1=sj0;
goto L1;
L2:;
sj0=l1;
si1=l3;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l2=sj0;
sj0=0ULL;
l1=sj0;
L1:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
L0:;
}


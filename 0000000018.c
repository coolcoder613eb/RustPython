#include "w2c2_base.h"

#include "rustpython.h"

U32 f1830(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=88U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970056U;
f646(i,si0,si1,si2);
si0=l0;
si1=88U;
si0+=si1;
l0=si0;
si0=l1;
si1=-88U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1831(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=12U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970040U;
f646(i,si0,si1,si2);
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l1;
si1=-12U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1832(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969896U;
f646(i,si0,si1,si2);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1833(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969912U;
f646(i,si0,si1,si2);
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l1;
si1=-64U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1834(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=92U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970024U;
f646(i,si0,si1,si2);
si0=l0;
si1=92U;
si0+=si1;
l0=si0;
si0=l1;
si1=-92U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1835(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=56U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969960U;
f646(i,si0,si1,si2);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1836(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=44U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969928U;
f646(i,si0,si1,si2);
si0=l0;
si1=44U;
si0+=si1;
l0=si0;
si0=l1;
si1=-44U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f1837(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L2:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1838(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L2:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1839(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=0U;
l3=si0;
L2:;
{
si0=l2;
si1=l3;
si2=96U;
si1*=si2;
si0+=si1;
l4=si0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L4:;
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0+=si1;
l0=si0;
L6:;
{
si0=l0;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L9:;
si0=l4;
si1=80U;
si0+=si1;
l0=si0;
f1839(i,si0);
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1840(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=0U;
l3=si0;
L2:;
{
si0=l2;
si1=l3;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=340U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l4;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=348U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L4:;
si0=l4;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
l0=si0;
L6:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=360U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L9:;
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L11:;
{
si0=l0;
f1821(i,si0);
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l4;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L12:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L13:;
si0=l4;
si1=112U;
si0+=si1;
l6=si0;
si0=l4;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L15:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L16:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L17:;
si0=l4;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L18:;
si0=l4;
si1=176U;
si0+=si1;
l6=si0;
si0=l4;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L20:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L21:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L22:;
si0=l4;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=224U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L23:;
si0=l4;
si1=240U;
si0+=si1;
l6=si0;
si0=l4;
si1=248U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L25:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L26:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L27:;
si0=l4;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L28:;
si0=l4;
si1=304U;
si0+=si1;
l6=si0;
si0=l4;
si1=312U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L30:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L31:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L32:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1841(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=44U;
si0+=si1;
l0=si0;
L2:;
{
si0=l0;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L4:;
si0=l0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f15024(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L6:;
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1842(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=0U;
l3=si0;
L2:;
{
si0=l2;
si1=l3;
si2=44U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
f1813(i,si0);
si0=l0;
f15024(i,si0);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
f15024(i,si0);
L4:;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
L6:;
{
si0=l0;
f1816(i,si0);
si0=l0;
si1=92U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L7:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1843(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
l5=si0;
goto L4;
L5:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
goto L7;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0-=si1;
l7=si0;
si1=l6;
si2=l7;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
L7:;
si0=l6;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1-=si2;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L4;
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
si1=16962752U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16962760U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=16962836U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0-=si1;
l7=si0;
si1=l6;
si2=l7;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
L4:;
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l6;
si2=l5;
f1802(i,si0,si1,si2);
goto L2;
L3:;
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L1:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
f2028(i,si0,si1);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l1;
si2=24U;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
sj1=l8;
si1=(U32)(sj1);
l1=si1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=l1;
si0-=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=l0;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l1;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l4;
l1=si0;
L13:;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
si0=l5;
si1=l0;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=0U;
l1=si0;
L14:;
{
si0=l6;
si1=l1;
si0+=si1;
si1=l4;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
si0=l3;
si1=-2U;
si0+=si1;
l3=si0;
if(si0){
goto L14;
}
}
L12:;
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1844(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l1;
si1=l3;
si2=16U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=l7;
si2=152U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l7;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l7;
si2=136U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l9;
si2=l8;
f2027(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l7;
si2=160U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+56U);
l10=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l10;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l10;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l10;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l10;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l10;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l10;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+48U);
l11=sj3;
sj2*=sj3;
sj3=l11;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l10=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
f2058(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
l6=si0;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si1=l5;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l8=si0;
si1=3U;
si2=l8;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l8=si0;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l7;
si1=160U;
si0+=si1;
l15=si0;
si0=l4;
si1=l3;
si0-=si1;
si1=-32U;
si0+=si1;
l8=si0;
si0=l7;
si1=152U;
si0+=si1;
l16=si0;
si0=4U;
l3=si0;
si0=1U;
l1=si0;
L6:;
{
si0=-1U;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+172U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l2;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+144U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l17;
si2=l9;
f2027(i,si0,si1,si2);
si0=l2;
si1=l15;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+56U);
l10=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l10;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l10;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l10;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l10;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l10;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l10;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+48U);
l11=sj3;
sj2*=sj3;
sj3=l11;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l10=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l5;
f2058(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l13;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
l6=si0;
L7:;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
si2=l8;
si3=4U;
si2>>=(si3&31);
si3=1U;
si2+=si3;
f1800(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
L8:;
si0=l12;
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=-16U;
si0+=si1;
l8=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=64U;
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

void f1845(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L6:;
{
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
si2=48U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=44U;
si0+=si1;
l6=si0;
si0=l5;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
goto L3;
}
L5:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si2=48U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=44U;
si0+=si1;
l6=si0;
si0=l3;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=0U;
l5=si0;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=1U;
l9=si0;
L9:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
{
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
si1=44U;
si0+=si1;
l1=si0;
si0=l5;
si1=48U;
si0+=si1;
l4=si0;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
}
si0=l4;
l5=si0;
goto L12;
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L15:;
{
si0=l3;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=44U;
si0+=si1;
l5=si0;
si0=l3;
si1=48U;
si0+=si1;
l4=si0;
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
si0=0U;
l5=si0;
si0=l4;
l3=si0;
L12:;
si0=l9;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l9;
si2=1U;
f1800(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
goto L10;
L11:;
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
goto L1;
L10:;
si0=l7;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L9;
}
L8:;
si0=4U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1846(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=l1;
si0-=si1;
l4=si0;
si1=40U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=8U;
l6=si0;
goto L4;
L5:;
si0=l4;
si1=-715827896U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=24U;
si0*=si1;
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=24U;
si0+=si1;
l2=si0;
si0=l6;
l1=si0;
si0=l5;
l4=si0;
L6:;
{
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=16969172U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l7;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
si0=f642(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l2;
si1=40U;
si0+=si1;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L6;
}
}
si0=l5;
l1=si0;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=16969196U;
si1=55U;
si2=l3;
si3=16969252U;
si4=16969344U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f1847(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=16962856U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si2=l3;
si0=f621(i,si0,si1,si2);
l4=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1848(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l1;
si1=l2;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L3:;
{
si0=1U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962869U;
si2=16962864U;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+124U);
l2=si3;
si1=si3?si1:si2;
si2=11U;
si3=5U;
si4=l2;
si2=si4?si2:si3;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=0U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962880U;
si2=4U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
si2=2U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l1;
si1=128U;
si0+=si1;
l5=si0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0*=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L5:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962884U;
si2=4U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=-56U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si2=2U;
si0=f1849(i,si0,si1,si2);
l6=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
goto L2;
}
L4:;
si0=0U;
l4=si0;
si0=l5;
l1=si0;
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
L0:;
return si0;
}

U32 f1849(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-11U;
si0+=si1;
l5=si0;
si1=19U;
si2=l5;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L42;
case 1:
goto L4;
case 2:
goto L40;
case 3:
goto L39;
case 4:
goto L5;
case 5:
goto L6;
case 6:
goto L38;
case 7:
goto L37;
case 8:
goto L36;
case 9:
goto L35;
case 10:
goto L34;
case 11:
goto L33;
case 12:
goto L7;
case 13:
goto L32;
case 14:
goto L41;
case 15:
goto L8;
case 16:
goto L31;
case 17:
goto L9;
case 18:
goto L10;
case 19:
goto L30;
case 20:
goto L29;
case 21:
goto L28;
case 22:
goto L11;
case 23:
goto L12;
case 24:
goto L27;
case 25:
goto L26;
case 26:
goto L25;
default:
goto L42;
}
L42:;
si0=2U;
si1=3U;
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si0=si2?si0:si1;
l6=si0;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L43:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l6;
si3=1U;
si2+=si3;
l8=si2;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=4U;
si1=5U;
si2=l4;
si0=si2?si0:si1;
l9=si0;
si0=16962893U;
si1=16962888U;
si2=l4;
si0=si2?si0:si1;
l10=si0;
si0=l1;
si1=56U;
si0+=si1;
l4=si0;
si0=l7;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l1=si0;
L44:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l10;
si2=l9;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
si0=l0;
si1=l4;
si2=l8;
si0=f1849(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L44;
}
goto L1;
}
L41:;
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16963164U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L2;
L40:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=16963784U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=16963732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=16963836U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L45:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l4;
si4=6U;
si3=si3 == si4;
si2+=si3;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l9;
si2=l8;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l4;
si4=6U;
si3=si3 != si4;
si2+=si3;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l7;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L39:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=2U;
si0<<=(si1&31);
l4=si0;
si1=16963868U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=16963852U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=202114060U;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0>>=(si1&31);
l8=si0;
si1=12U;
si0&=si1;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L46:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si2=l7;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l8;
si1=255U;
si0&=si1;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L38:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962972U;
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
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l2;
si2=56U;
si1*=si2;
si0+=si1;
l10=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16963096U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L47;
L48:;
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16963088U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L47:;
si0=1U;
l7=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l8;
si1=56U;
si0+=si1;
l4=si0;
L49:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L50;
}
si0=1U;
l5=si0;
goto L1;
L50:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16963096U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L51;
}
si0=1U;
l5=si0;
goto L1;
L52:;
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16963088U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L51:;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l2;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L49;
}
}
si0=l2;
si1=l9;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l10;
si1=56U;
si0+=si1;
l1=si0;
si0=l8;
si1=l9;
si2=56U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l2;
if(si0){
goto L16;
}
goto L14;
L37:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962972U;
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
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si0=f1849(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L53;
}
si0=1U;
l5=si0;
goto L1;
L53:;
si0=l1;
si1=56U;
si0+=si1;
l2=si0;
si0=l5;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l1=si0;
L54:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L55;
}
si0=1U;
l5=si0;
goto L1;
L55:;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1849(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l4;
if(si0){
goto L1;
}
goto L54;
}
L36:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963112U;
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
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1848(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963113U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L35:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962972U;
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
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1848(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963080U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L34:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962972U;
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
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962852U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=36U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1848(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963080U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L33:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1848(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L32:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16963128U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L56:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963144U;
si2=7U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L31:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=15U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=l4;
si0=!(si0);
if(si0){
goto L20;
}
L57:;
si0=l7;
si0=!(si0);
if(si0){
goto L58;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l7;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l8=si0;
L59:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L60;
}
si0=1U;
l5=si0;
goto L1;
L60:;
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l8;
si1=-56U;
si0+=si1;
l8=si0;
if(si0){
goto L59;
}
}
L58:;
si0=l4;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L61;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L61:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si2=l1;
si3=80U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963181U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L62;
L63:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963083U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L62:;
si0=l0;
si1=l1;
si2=1U;
si0=f1849(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L64;
}
si0=1U;
l5=si0;
goto L1;
L64:;
si0=l1;
si1=168U;
si0+=si1;
l1=si0;
si0=l4;
si1=88U;
si0*=si1;
si1=-88U;
si0+=si1;
l2=si0;
L65:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L66;
}
si0=1U;
l5=si0;
goto L1;
L66:;
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L68;
}
si0=1U;
l5=si0;
goto L1;
L69:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963083U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L67;
}
si0=1U;
l5=si0;
goto L1;
L68:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963181U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L67:;
si0=l1;
si1=-80U;
si0+=si1;
l4=si0;
si0=l2;
si1=-88U;
si0+=si1;
l2=si0;
si0=l1;
si1=88U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L65;
}
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si2=l1;
si3=48U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L70:;
si0=l4;
si1=-2U;
si0+=si1;
l5=si0;
si1=4U;
si2=l5;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-6U;
si0+=si1;
switch(si0){
case 0:
goto L72;
case 1:
goto L73;
default:
goto L21;
}
L73:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+8U);
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L71;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+16U);
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L71;
}
goto L21;
L72:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+8U);
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 != sd1;
if(si0){
goto L21;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963182U;
si2=5U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L71:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
f1850(i,si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l1=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+32U);
f1851(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l5;
f15024(i,si0);
L74:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
f15024(i,si0);
L75:;
si0=1U;
l5=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L29:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=15U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-11U;
si0+=si1;
l5=si0;
si1=26U;
si0=si0 > si1;
if(si0){
goto L77;
}
si0=l5;
si1=19U;
si0=si0 == si1;
if(si0){
goto L77;
}
si0=1U;
l2=si0;
si0=16963192U;
l4=si0;
goto L76;
L77:;
si0=2U;
si1=1U;
si2=l2;
si3=-2U;
si2+=si3;
l5=si2;
si3=8U;
si2=si2 > si3;
si3=l5;
si4=4U;
si3=si3 == si4;
si2|=si3;
l5=si2;
si0=si2?si0:si1;
l2=si0;
si0=16963190U;
si1=16963192U;
si2=l5;
si0=si2?si0:si1;
l4=si0;
L76:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L28:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=15U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=36U;
si0=si0 != si1;
if(si0){
goto L78;
}
si0=l7;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0*=si1;
l5=si0;
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L80:;
{
si0=l5;
l2=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l2;
si1=-56U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l4;
si1=33U;
si0=si0 != si1;
if(si0){
goto L80;
}
}
L79:;
si0=l2;
si1=0U;
si0=si0 != si1;
l2=si0;
L78:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963112U;
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
si0=l0;
si1=l7;
si2=l2;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963113U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L27:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963112U;
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
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si0=f1849(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L81;
}
si0=1U;
l5=si0;
goto L1;
L81:;
si0=l1;
si1=56U;
si0+=si1;
l2=si0;
si0=l5;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l1=si0;
L82:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L83;
}
si0=1U;
l5=si0;
goto L1;
L83:;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1849(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l4;
if(si0){
goto L1;
}
goto L82;
}
L26:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L84;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L84:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si0=f1849(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L85;
}
si0=1U;
l5=si0;
goto L1;
L85:;
si0=l1;
si1=56U;
si0+=si1;
l4=si0;
si0=l8;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l1=si0;
L86:;
{
si0=l1;
if(si0){
goto L87;
}
si0=1U;
l5=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L88;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963196U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L88:;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L87:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L89;
}
si0=1U;
l5=si0;
goto L1;
L89:;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si0=f1849(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l7;
if(si0){
goto L1;
}
goto L86;
}
L25:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
L90:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963197U;
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
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
L91:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963197U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=1U;
si0=f1849(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L24:;
si0=16963680U;
si1=35U;
si2=16963064U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963194U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L22:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963113U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L21:;
si0=1U;
l5=si0;
si0=l1;
si1=l0;
si0=f1641(i,si0,si1);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=22U;
si0=si0 != si1;
if(si0){
goto L92;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1848(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L19;
L92:;
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
L19:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L18:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963080U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L17:;
si0=l2;
si1=l9;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l10;
si1=56U;
si0+=si1;
l1=si0;
si0=l8;
si1=l9;
si2=56U;
si1*=si2;
si0+=si1;
l4=si0;
L16:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L14;
L15:;
si0=l2;
si1=l9;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l10;
si1=56U;
si0+=si1;
l1=si0;
si0=l8;
si1=l9;
si2=56U;
si1*=si2;
si0+=si1;
l4=si0;
L14:;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16963088U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L93;
}
si0=1U;
l5=si0;
goto L1;
L93:;
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L13;
}
L94:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963081U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L95;
}
si0=1U;
l5=si0;
goto L1;
L95:;
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16963088U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L94;
}
}
L13:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963080U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L12:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L11:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963193U;
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
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=6U;
si0=f1849(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L10:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si0=f1852(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L9:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1853(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L8:;
si0=l2;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L96;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L96:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=6U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l5;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
L98:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L97;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963180U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l8=si1;
si2=16963924U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si3=16963884U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963180U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l0;
si1=l1;
si2=6U;
si0=f1849(i,si0,si1,si2);
l8=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L98;
}
goto L1;
}
L97:;
si0=l2;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L7:;
si0=l2;
si1=255U;
si0&=si1;
si1=15U;
si0=si0 < si1;
if(si0){
goto L99;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L99:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16963114U;
si2=6U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=15U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
si1=15U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L100;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L100:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962884U;
si2=4U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962966U;
si2=6U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L101;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L101:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962953U;
si2=16962959U;
si3=l1;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l4=si3;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=0U;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+8U);
si4-=si5;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
si2=6U;
si3=7U;
si4=l7;
si2=si4?si2:si3;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l4;
si0=f1854(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16962856U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L102;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962897U;
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
L102:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=15U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962899U;
si2=4U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=15U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16962898U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=0U;
l5=si0;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f1850(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16963364U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=32U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l2;
si2=24U;
si1+=si2;
si0=f1641(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=16963388U;
si1=55U;
si2=l2;
si3=63U;
si2+=si3;
si3=16963444U;
si4=16963536U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1851(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=16963187U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l5=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L5;
}
si0=1U;
l8=si0;
si0=0U;
l9=si0;
sj0=l5;
sj1=71776119061217280ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=1U;
l8=si0;
si0=0U;
l4=si0;
si0=0U;
l9=si0;
L6:;
{
si0=l6;
l12=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=l11;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l6;
si1=l11;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l7;
si1=l11;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L8:;
si0=l6;
si1=l11;
si0-=si1;
l12=si0;
L7:;
si0=l12;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=l11;
si0+=si1;
l13=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L14;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l12;
si1=31U;
si0&=si1;
l15=si0;
si0=l12;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l12=si0;
goto L13;
L15:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l12;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l14;
si1=l15;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l12=si0;
goto L13;
L16:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l15;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l12=si0;
goto L13;
L14:;
si0=l12;
si1=255U;
si0&=si1;
l12=si0;
L13:;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L11;
}
si0=l12;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=1U;
l10=si0;
si0=l12;
si1=128U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=2U;
l10=si0;
si0=l12;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=3U;
si1=4U;
si2=l12;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
L17:;
si0=l6;
l12=si0;
si0=l10;
si1=l11;
si0+=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si1=l11;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l6;
si1=l11;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L19;
L20:;
si0=l7;
si1=l11;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L19:;
si0=l6;
si1=l11;
si0-=si1;
l12=si0;
L18:;
si0=l12;
if(si0){
goto L21;
}
si0=0U;
l10=si0;
goto L10;
L21:;
si0=1U;
l10=si0;
si0=l7;
si1=l11;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
si0=l12;
si1=-32U;
si0=si0 < si1;
goto L11;
L12:;
si0=l10;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
L11:;
si0=l10;
si1=1U;
si0^=si1;
l10=si0;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l4;
si0-=si1;
si1=l11;
si2=l9;
si1-=si2;
l12=si1;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l12;
f1803(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L22:;
si0=l8;
si1=l4;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l12;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l12;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l12;
si2=5U;
f1803(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
L23:;
si0=l8;
si1=l12;
si0+=si1;
l4=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+16963182U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+16963186U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l12;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
l9=si0;
goto L6;
}
L5:;
si0=1U;
l8=si0;
si0=0U;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l10=si0;
si1=-1U;
si0+=si1;
l16=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
l11=si1;
si0+=si1;
l12=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l10;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l17=si1;
si0-=si1;
l18=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l14=si0;
si1=-1U;
si0+=si1;
l19=si0;
si0=l7;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
l20=si1;
si0+=si1;
l21=si0;
si0=l14;
si1=l20;
si0+=si1;
l22=si0;
si0=l10;
si1=l20;
si0-=si1;
l23=si0;
si0=1U;
si1=l20;
si0-=si1;
l24=si0;
si0=l7;
si1=l10;
si2=1U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l25=si1;
si0+=si1;
l26=si0;
si0=l20;
si1=-1U;
si0+=si1;
l27=si0;
si1=l10;
si0=si0 < si1;
si1=1U;
si0&=si1;
l28=si0;
si0=1U;
l8=si0;
si0=0U;
l4=si0;
si0=0U;
l9=si0;
L24:;
{
si0=l15;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L27;
}
L28:;
{
sj0=l5;
si1=l7;
si2=l12;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l11;
si1=l10;
si0+=si1;
l11=si0;
si1=l16;
si0+=si1;
l12=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L28;
}
goto L4;
L29:;
si0=l22;
l13=si0;
si0=l23;
l15=si0;
si0=l11;
l12=si0;
si0=l10;
si1=l20;
si0=si0 <= si1;
if(si0){
goto L31;
}
L32:;
{
si0=l20;
si1=l12;
si0+=si1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l20;
l29=si0;
goto L2;
L33:;
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l21;
si2=l12;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l12;
si1=1U;
si0+=si1;
l11=si0;
goto L30;
L34:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l28;
si0=!(si0);
if(si0){
goto L36;
}
si0=l7;
si1=l11;
si0+=si1;
l13=si0;
si0=l20;
l12=si0;
L37:;
{
si0=l12;
if(si0){
goto L38;
}
si0=-1U;
l15=si0;
goto L25;
L38:;
si0=l11;
si1=l12;
si0+=si1;
l15=si0;
si1=-1U;
si0+=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l19;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si2=-1U;
si1+=si2;
l12=si1;
si2=l13;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L37;
}
}
si0=l11;
si1=l17;
si0+=si1;
l11=si0;
goto L30;
L36:;
si0=-1U;
l15=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L25;
}
si0=l27;
l12=si0;
goto L3;
L35:;
si0=l15;
si1=-1U;
si0+=si1;
l13=si0;
goto L26;
L30:;
si0=l11;
si1=l16;
si0+=si1;
l12=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L28;
}
goto L4;
}
L27:;
L39:;
{
sj0=l5;
si1=l7;
si2=l12;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L40;
}
si0=l11;
si1=l10;
si0+=si1;
si1=l16;
si0+=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L4;
}
L41:;
{
sj0=l5;
si1=l26;
si2=l11;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L42;
}
si0=l10;
si1=l11;
si0+=si1;
l11=si0;
si0=0U;
l15=si0;
goto L40;
L42:;
si0=l25;
si1=l11;
si2=l10;
si1+=si2;
l11=si1;
si0+=si1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L41;
}
goto L4;
}
L40:;
si0=l20;
si1=l15;
si2=l20;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l29=si0;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l7;
si1=l11;
si0+=si1;
l13=si0;
si0=l29;
l12=si0;
L45:;
{
si0=l11;
si1=l12;
si0+=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l14;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si2=l12;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l24;
si1=l11;
si0+=si1;
si1=l12;
si0+=si1;
l11=si0;
si0=0U;
l15=si0;
goto L43;
L46:;
si0=l10;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L45;
}
}
L44:;
si0=l20;
l12=si0;
L47:;
{
si0=l15;
si1=l12;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=0U;
l15=si0;
goto L25;
L48:;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l12;
si1=l11;
si0+=si1;
l13=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l14;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l7;
si2=l13;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L47;
}
}
si0=l11;
si1=l17;
si0+=si1;
l11=si0;
si0=l18;
l15=si0;
L43:;
si0=l11;
si1=l16;
si0+=si1;
l12=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L39;
}
goto L4;
}
L26:;
si0=l13;
si1=l6;
si2=16963648U;
f594(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l4;
si0-=si1;
si1=l11;
si2=l9;
si1-=si2;
l12=si1;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l12;
f1803(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L49:;
si0=l1;
si1=l9;
si0+=si1;
l29=si0;
si0=l11;
si1=l10;
si0+=si1;
l9=si0;
si0=l8;
si1=l4;
si0+=si1;
si1=l29;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l12;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l11;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l11;
si2=5U;
f1803(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
L50:;
si0=l8;
si1=l11;
si0+=si1;
l12=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+16963182U);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+16963186U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l11;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
l11=si0;
si0=l9;
si1=l16;
si0+=si1;
l12=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0-=si1;
si1=l2;
si2=l9;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l6;
f1803(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L51:;
si0=l8;
si1=l4;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l12;
si1=l10;
si2=16963632U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si1=l29;
si2=l11;
si1+=si2;
l11=si1;
si2=l6;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l6;
si2=16963664U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=l6;
si2=l11;
si3=l6;
si4=16963716U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f1852(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L3;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=16963280U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si3=i32_load(&i->m0,(U64)si3+12U);
l8=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=16963364U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=56U;
si0*=si1;
l3=si0;
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
L4:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=-56U;
si0+=si1;
l3=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=0U;
si0=f1855(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
}
si0=16963388U;
si1=55U;
si2=l4;
si3=63U;
si2+=si3;
si3=16963444U;
si4=16963536U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=56U;
si0*=si1;
l3=si0;
L5:;
{
si0=l3;
si1=0U;
si0=si0 != si1;
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-56U;
si0+=si1;
l3=si0;
si0=l0;
si1=l1;
si2=1U;
si0=f1855(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l1=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+20U);
l3=si2;
si3=0U;
f2402(i,si0,si1,si2,si3);
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=1U;
l5=si0;
si0=l6;
si1=34U;
si2=39U;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+32U);
si1=si3?si1:si2;
l9=si1;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
l7=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
si0=l4;
si1=24U;
si0+=si1;
si1=l0;
si0=f1987(i,si0,si1);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
goto L7;
L8:;
si0=l6;
si1=l1;
si2=l3;
si3=l8;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L6;
}
L7:;
si0=l6;
si1=l9;
si2=l7;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l5=si0;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f1853(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16963364U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=2U;
si0=f1849(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L6;
}
si0=16962972U;
l6=si0;
si0=1U;
l7=si0;
goto L5;
L6:;
si0=16963201U;
si1=16962972U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=255U;
si2&=si3;
si3=123U;
si2=si2 == si3;
l8=si2;
si0=si2?si0:si1;
l6=si0;
si0=2U;
si1=1U;
si2=l8;
si0=si2?si0:si1;
l7=si0;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si1=l6;
si2=l7;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
si3=i32_load(&i->m0,(U64)si3+12U);
l11=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L7;
}
si0=l8;
si1=l1;
si2=l5;
si3=l11;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L7;
}
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
f15024(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
L8:;
si0=l2;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l8;
si1=16963203U;
si2=1U;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+12U);
l1=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l4;
si1=l2;
i32_store8(&i->m0,(U64)si0+63U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=63U;
si1+=si2;
si2=1U;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L9;
}
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=l4;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L9:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=16963204U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=16963248U;
si4=16963264U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
si0=1U;
l0=si0;
goto L1;
L4:;
si0=16963388U;
si1=55U;
si2=l4;
si3=63U;
si2+=si3;
si3=16963444U;
si4=16963536U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=16963197U;
si2=1U;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=1U;
si0=f1855(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
L10:;
si0=0U;
l0=si0;
si0=l8;
si1=16963080U;
si2=1U;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=1U;
l0=si0;
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1854(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=48U;
si0+=si1;
l8=si0;
si0=l6;
l9=si0;
si0=l4;
l10=si0;
goto L8;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=48U;
si0+=si1;
l9=si0;
si0=0U;
l8=si0;
si0=l6;
l10=si0;
L8:;
si0=1U;
l11=si0;
si0=l0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l10;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
l12=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+28U);
l13=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l11=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=16962856U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L10:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=l10;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l11=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=16963356U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=543U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L11:;
si0=1U;
l11=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=16963198U;
si2=3U;
si3=l12;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L12:;
si0=l4;
si1=l7;
si2=48U;
si1*=si2;
si0+=si1;
l13=si0;
si0=l6;
si1=l5;
si2=48U;
si1*=si2;
si0+=si1;
l5=si0;
si0=l7;
si1=-2U;
si0+=si1;
l10=si0;
L14:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
si1=l13;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=48U;
si0+=si1;
l4=si0;
si0=l9;
l6=si0;
goto L15;
L16:;
si0=l9;
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l9;
si1=48U;
si0+=si1;
l6=si0;
si0=0U;
l4=si0;
si0=l9;
l8=si0;
L15:;
si0=1U;
l11=si0;
si0=l0;
si1=16963081U;
si2=2U;
si3=l12;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l8;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l12;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=1U;
l11=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=16962856U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L17:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=l8;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l11=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=16963356U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=543U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L18:;
si0=l10;
if(si0){
goto L19;
}
si0=1U;
l11=si0;
si0=l0;
si1=16963198U;
si2=3U;
si3=l12;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L19:;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si0=l6;
l9=si0;
si0=l4;
l8=si0;
goto L14;
}
L13:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
if(si0){
goto L20;
}
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
L20:;
si0=1U;
l11=si0;
si0=l0;
si1=16963081U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
l9=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l12;
si1=0U;
si0=si0 != si1;
l11=si0;
goto L6;
L7:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
if(si0){
goto L21;
}
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
L21:;
si0=l12;
si1=0U;
si0=si0 != si1;
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L6:;
si0=l0;
si1=16963193U;
si2=1U;
si3=l9;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L22;
}
si0=1U;
l11=si0;
goto L1;
L22:;
si0=l11;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l12;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l9;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L24;
}
si0=1U;
l11=si0;
goto L1;
L24:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l11=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=16962856U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L23:;
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=48U;
si0*=si1;
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=44U;
si0+=si1;
l8=si0;
L25:;
{
si0=l0;
si1=16963081U;
si2=2U;
si3=l9;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L26;
}
si0=1U;
l11=si0;
goto L1;
L26:;
si0=l0;
si1=l8;
si2=-28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si3=-20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l9;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L27;
}
si0=1U;
l11=si0;
goto L1;
L27:;
si0=l8;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=1U;
l11=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=16962856U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=542U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L28:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l11=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=16963356U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=543U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L29:;
si0=l8;
si1=48U;
si0+=si1;
l8=si0;
si0=l12;
si1=-48U;
si0+=si1;
l12=si0;
if(si0){
goto L25;
}
}
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l11=si0;
si0=l0;
si1=16963081U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
l2=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L3:;
si0=1U;
l11=si0;
si0=l0;
si1=16963083U;
si2=2U;
si3=l2;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l8;
si0=f1847(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=0U;
l11=si0;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l11;
L0:;
return si0;
}

U32 f1855(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-11U;
si0+=si1;
l5=si0;
si1=19U;
si2=l5;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-17U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L2;
default:
goto L5;
}
L5:;
si0=16963281U;
si1=40U;
si2=16963340U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si0=f1852(i,si0,si1,si2,si3);
l1=si0;
goto L1;
L3:;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1853(i,si0,si1,si2,si3);
l1=si0;
goto L1;
L2:;
si0=l4;
si1=4U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=16963281U;
si1=40U;
si2=16963324U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=123U;
si4=16958360U;
f1663(i,si0,si1,si2,si3,si4);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=125U;
si4=16958362U;
f1663(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15024(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f1856(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1857(rustpythonInstance*i,U32 l0) {
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

void f1858(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1859(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1795(i,si0,si1);
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
f1803(i,si0,si1,si2);
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

U32 f1860(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1803(i,si0,si1,si2);
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

void f1861(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=16963980U;
l2=si0;
si0=8U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-11U;
si0+=si1;
l5=si0;
si1=19U;
si2=l5;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L29;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L28;
case 5:
goto L27;
case 6:
goto L26;
case 7:
goto L25;
case 8:
goto L24;
case 9:
goto L23;
case 10:
goto L22;
case 11:
goto L21;
case 12:
goto L20;
case 13:
goto L19;
case 14:
goto L19;
case 15:
goto L18;
case 16:
goto L17;
case 17:
goto L16;
case 18:
goto L15;
case 19:
goto L14;
case 20:
goto L13;
case 21:
goto L12;
case 22:
goto L11;
case 23:
goto L10;
case 24:
goto L9;
case 25:
goto L8;
case 26:
goto L7;
default:
goto L1;
}
L29:;
si0=16963964U;
l2=si0;
si0=16U;
l3=si0;
goto L1;
L28:;
si0=16963988U;
l2=si0;
si0=6U;
l3=si0;
goto L1;
L27:;
si0=16963994U;
l2=si0;
si0=22U;
l3=si0;
goto L1;
L26:;
si0=16964016U;
l2=si0;
si0=12U;
l3=si0;
goto L1;
L25:;
si0=16964028U;
l2=si0;
si0=11U;
l3=si0;
goto L1;
L24:;
si0=16964039U;
l2=si0;
si0=18U;
l3=si0;
goto L1;
L23:;
si0=16964057U;
l2=si0;
si0=17U;
l3=si0;
goto L1;
L22:;
si0=16964074U;
l2=si0;
si0=18U;
l3=si0;
goto L1;
L21:;
si0=16964092U;
l2=si0;
si0=20U;
l3=si0;
goto L1;
L20:;
si0=16964112U;
l2=si0;
si0=16U;
l3=si0;
goto L1;
L19:;
si0=16964128U;
l2=si0;
si0=16U;
l3=si0;
goto L1;
L18:;
si0=16964144U;
l2=si0;
si0=10U;
l3=si0;
goto L1;
L17:;
si0=16964154U;
l2=si0;
si0=13U;
l3=si0;
goto L1;
L16:;
si0=16964167U;
l2=si0;
si0=19U;
l3=si0;
goto L1;
L15:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0*=si1;
l5=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L30:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=-56U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=16964167U;
l2=si0;
si0=19U;
l3=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l4;
si1=29U;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L1;
}
L14:;
si0=4U;
l3=si0;
si0=16964193U;
l2=si0;
si0=l4;
si1=-2U;
si0+=si1;
l5=si0;
si1=4U;
si2=l5;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L2;
case 5:
goto L4;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L3;
default:
goto L1;
}
L13:;
si0=16964219U;
l2=si0;
si0=9U;
l3=si0;
goto L1;
L12:;
si0=16964228U;
l2=si0;
si0=9U;
l3=si0;
goto L1;
L11:;
si0=16964237U;
l2=si0;
si0=7U;
l3=si0;
goto L1;
L10:;
si0=16964244U;
l2=si0;
si0=4U;
l3=si0;
goto L1;
L9:;
si0=16964248U;
l2=si0;
si0=4U;
l3=si0;
goto L1;
L8:;
si0=16964206U;
l2=si0;
goto L6;
L7:;
si0=16964252U;
l2=si0;
L6:;
si0=5U;
l3=si0;
goto L1;
L5:;
si0=16964202U;
si1=16964197U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l3=si2;
si0=si2?si0:si1;
l2=si0;
si0=4U;
si1=5U;
si2=l3;
si0=si2?si0:si1;
l3=si0;
goto L1;
L4:;
si0=16964206U;
l2=si0;
si0=l5;
l3=si0;
goto L1;
L3:;
si0=16964211U;
l2=si0;
si0=l5;
l3=si0;
goto L1;
L2:;
si0=16964186U;
l2=si0;
si0=7U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f1862(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si2=1U;
si0=f1849(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1863(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16966593U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965852U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966300U;
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

U32 f1864(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=16967312U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=16967764U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=44U;
si0+=si1;
si1=16964316U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16966176U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=28U;
si0+=si1;
si1=16965760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=20U;
si0+=si1;
si1=16966924U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=16964288U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l0;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l0;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16964268U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16968079U;
si2=20U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+77U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=16964260U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964244U;
si2=4U;
si3=l2;
si4=12U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966169U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=16U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965756U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=24U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967268U;
si2=14U;
si3=l2;
si4=4U;
si3+=si4;
si4=32U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967756U;
si2=7U;
si3=l2;
si4=44U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964332U;
si2=12U;
si3=l2;
si4=52U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967282U;
si2=11U;
si3=l2;
si4=4U;
si3+=si4;
si4=56U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L2;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
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

U32 f1865(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=124U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967364U;
si2=13U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16966380U;
si7=16966100U;
si8=6U;
si9=l0;
si10=16966408U;
si11=16966106U;
si12=4U;
si13=l0;
si14=56U;
si13+=si14;
si14=16966408U;
si15=16967377U;
si16=3U;
si17=l0;
si18=112U;
si17+=si18;
si18=16966176U;
si19=16967380U;
si20=8U;
si21=l2;
si22=12U;
si21+=si22;
si22=16967388U;
si0=f672(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1866(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967091U;
si2=11U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16967102U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16967105U;
si12=10U;
si13=l2;
si14=12U;
si13+=si14;
si14=16967116U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1867(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=16967312U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=16967764U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=44U;
si0+=si1;
si1=16964316U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16966176U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=28U;
si0+=si1;
si1=16965760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16966924U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=16964288U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l0;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l0;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16964268U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967780U;
si2=15U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+77U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=16964260U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964244U;
si2=4U;
si3=l2;
si4=12U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966169U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=16U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965756U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=24U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967268U;
si2=14U;
si3=l2;
si4=4U;
si3+=si4;
si4=32U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967756U;
si2=7U;
si3=l2;
si4=44U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964332U;
si2=12U;
si3=l2;
si4=52U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967282U;
si2=11U;
si3=l2;
si4=4U;
si3+=si4;
si4=56U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L2;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
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

U32 f1868(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967550U;
si2=13U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16964244U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16967282U;
si12=11U;
si13=l0;
si14=20U;
si13+=si14;
si14=16967564U;
si15=16965852U;
si16=5U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966300U;
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

U32 f1869(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967143U;
si2=11U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966615U;
si8=2U;
si9=l0;
si10=20U;
si9+=si10;
si10=16967156U;
si11=16967172U;
si12=7U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966300U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1870(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967224U;
si2=12U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16967236U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16965852U;
si12=5U;
si13=l0;
si14=20U;
si13+=si14;
si14=16965740U;
si15=16967105U;
si16=10U;
si17=l2;
si18=12U;
si17+=si18;
si18=16967116U;
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

U32 f1871(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967239U;
si2=12U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16967102U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16967105U;
si12=10U;
si13=l2;
si14=12U;
si13+=si14;
si14=16967116U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1872(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16966316U;
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
si1=16964260U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966324U;
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

U32 f1873(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966673U;
si2=9U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965807U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16966176U;
si11=16966258U;
si12=3U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966264U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1874(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16967404U;
si3=13U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16967420U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
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
si1=1101931U;
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
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1875(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f1876(i,si0,si1);
L0:;
return si0;
}

U32 f1876(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L12;
case 5:
goto L11;
case 6:
goto L10;
case 7:
goto L9;
default:
goto L16;
}
L16:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965876U;
si3=10U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16965888U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L17;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L17:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L15:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965904U;
si3=14U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16965920U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L18;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L18:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L14:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965936U;
si3=13U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16965952U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L19;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L19:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L13:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965968U;
si3=12U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16965980U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L20;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L20:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L5;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L12:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965996U;
si3=10U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16966008U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L21;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L21:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L1;
L11:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16966024U;
si3=9U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16966036U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L22;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L22:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L7;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
goto L1;
L10:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16966052U;
si3=7U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16966060U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L23;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L23:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16966076U;
si3=7U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16966084U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L24;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L24:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L25;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
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
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
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
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1877(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=16964344U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=36U;
si0+=si1;
si1=16965760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=16965760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=20U;
si0+=si1;
si1=16965740U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=16965740U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16964268U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16966110U;
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
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=16964260U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966100U;
si2=6U;
si3=l2;
si4=12U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966106U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=16U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965756U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=24U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965776U;
si2=6U;
si3=l2;
si4=36U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964332U;
si2=12U;
si3=l2;
si4=44U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
if(si0){
goto L2;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1878(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16965728U;
si2=6U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965734U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16965756U;
si12=4U;
si13=l0;
si14=20U;
si13+=si14;
si14=16965760U;
si15=16965776U;
si16=6U;
si17=l2;
si18=12U;
si17+=si18;
si18=16965784U;
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

U32 f1879(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16967340U;
si2=12U;
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
si1=16964260U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966324U;
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

U32 f1880(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967537U;
si2=13U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966100U;
si8=6U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16966615U;
si12=2U;
si13=l0;
si14=24U;
si13+=si14;
si14=16966620U;
si15=16965852U;
si16=5U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966300U;
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

U32 f1881(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L4;
default:
goto L6;
}
L6:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16966802U;
si3=7U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16966812U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L7;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L7:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16966828U;
si3=9U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16966840U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L8;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L8:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16966856U;
si3=12U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16966868U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L9;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L9:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
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
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
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
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1882(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966691U;
si2=9U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16966380U;
si7=16966700U;
si8=7U;
si9=l0;
si10=16966708U;
si11=16966724U;
si12=5U;
si13=l0;
si14=76U;
si13+=si14;
si14=16964316U;
si15=16965756U;
si16=4U;
si17=l2;
si18=12U;
si17+=si18;
si18=16965784U;
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

U32 f1883(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966216U;
si2=8U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966224U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16966228U;
si11=16966244U;
si12=6U;
si13=l2;
si14=12U;
si13+=si14;
si14=16965812U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1884(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966650U;
si2=9U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966659U;
si8=5U;
si9=l0;
si10=16U;
si9+=si10;
si10=16964316U;
si11=16966664U;
si12=5U;
si13=l0;
si14=20U;
si13+=si14;
si14=16964316U;
si15=16966669U;
si16=4U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966440U;
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

U32 f1885(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967012U;
si2=10U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966990U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16967024U;
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

U32 f1886(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967050U;
si2=11U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966611U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16967061U;
si12=3U;
si13=l0;
si14=20U;
si13+=si14;
si14=16967064U;
si15=16967080U;
si16=11U;
si17=l2;
si18=12U;
si17+=si18;
si18=16965812U;
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

U32 f1887(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=80U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969880U;
f646(i,si0,si1,si2);
si0=l0;
si1=80U;
si0+=si1;
l0=si0;
si0=l1;
si1=-80U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1888(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16968059U;
si2=20U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967670U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=16967680U;
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

U32 f1889(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967479U;
si2=13U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965852U;
si8=5U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16964252U;
si12=5U;
si13=l0;
si14=20U;
si13+=si14;
si14=16965740U;
si15=16966258U;
si16=3U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966264U;
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

U32 f1890(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16967696U;
si2=14U;
si3=16964260U;
si4=5U;
si5=l0;
si6=8U;
si5+=si6;
si6=16964268U;
si7=16967710U;
si8=6U;
si9=l0;
si10=36U;
si9+=si10;
si10=16965836U;
si11=16966990U;
si12=5U;
si13=l0;
si14=24U;
si13+=si14;
si14=16967716U;
si15=16967732U;
si16=5U;
si17=l2;
si18=12U;
si17+=si18;
si18=16967740U;
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

U32 f1891(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967580U;
si2=14U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16966380U;
si7=16967594U;
si8=3U;
si9=l0;
si10=16967600U;
si11=16967616U;
si12=7U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966440U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1892(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16968136U;
si2=21U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964244U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=16968020U;
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

U32 f1893(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967190U;
si2=12U;
si3=16964260U;
si4=5U;
si5=l0;
si6=24U;
si5+=si6;
si6=16964268U;
si7=16965852U;
si8=5U;
si9=l0;
si10=16967204U;
si11=16967220U;
si12=4U;
si13=l2;
si14=12U;
si13+=si14;
si14=16964344U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1894(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967132U;
si2=11U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965852U;
si8=5U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16966258U;
si12=3U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966264U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1895(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967941U;
si2=18U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965852U;
si8=5U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16967959U;
si12=10U;
si13=l0;
si14=24U;
si13+=si14;
si14=16967972U;
si15=16967988U;
si16=11U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966440U;
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

U32 f1896(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f1897(i,si0,si1);
L0:;
return si0;
}

U32 f1897(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=-11U;
si0+=si1;
l3=si0;
si1=19U;
si2=l3;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L54;
case 1:
goto L53;
case 2:
goto L52;
case 3:
goto L51;
case 4:
goto L50;
case 5:
goto L49;
case 6:
goto L48;
case 7:
goto L47;
case 8:
goto L46;
case 9:
goto L45;
case 10:
goto L44;
case 11:
goto L43;
case 12:
goto L42;
case 13:
goto L41;
case 14:
goto L40;
case 15:
goto L39;
case 16:
goto L38;
case 17:
goto L37;
case 18:
goto L36;
case 19:
goto L35;
case 20:
goto L34;
case 21:
goto L33;
case 22:
goto L32;
case 23:
goto L31;
case 24:
goto L30;
case 25:
goto L29;
case 26:
goto L28;
default:
goto L54;
}
L54:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964360U;
si3=6U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964368U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L55;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L55:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L53:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964384U;
si3=9U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964396U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L56;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L56:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L52:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964412U;
si3=5U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964420U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L57;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L57:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L51:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964436U;
si3=7U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964444U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L58;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L58:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L5;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L50:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964460U;
si3=6U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964468U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L59;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L59:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L1;
L49:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964484U;
si3=5U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964492U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L60;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L60:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L7;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
goto L1;
L48:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964508U;
si3=4U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964512U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L61;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L61:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L47:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964528U;
si3=3U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964532U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L62;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L62:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L9;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
goto L1;
L46:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964548U;
si3=8U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964556U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L63;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L63:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L10;
}
goto L1;
L45:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964572U;
si3=7U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964580U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L64;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L64:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L11;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L11;
}
goto L1;
L44:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964596U;
si3=8U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964604U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L65;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L65:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L12;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L12;
}
goto L1;
L43:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964620U;
si3=12U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964632U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L66;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L66:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L13;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L13;
}
goto L1;
L42:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964648U;
si3=5U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964656U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L67;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L67:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L14;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
goto L1;
L41:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964672U;
si3=5U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964680U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L68;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L68:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L15;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L15;
}
goto L1;
L40:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964696U;
si3=9U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964708U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L69;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L69:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L16;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L16;
}
goto L1;
L39:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964724U;
si3=7U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964732U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L70;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L70:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L17;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L17;
}
goto L1;
L38:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964748U;
si3=4U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964752U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L71;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L71:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L18;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L18;
}
goto L1;
L37:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964768U;
si3=14U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964784U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L72;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L72:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L19;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L19;
}
goto L1;
L36:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964800U;
si3=9U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964812U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L73;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L73:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L20;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L20;
}
goto L1;
L35:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964828U;
si3=8U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964836U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L74;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L74:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L21;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L21;
}
goto L1;
L34:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964852U;
si3=9U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964864U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L75;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L75:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L22;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L22;
}
goto L1;
L33:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964880U;
si3=9U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964892U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L76;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L76:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L23;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L23;
}
goto L1;
L32:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964908U;
si3=7U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964916U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L77;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L77:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L24;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L24;
}
goto L1;
L31:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964932U;
si3=4U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964936U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L78;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L78:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L25;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L25;
}
goto L1;
L30:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964952U;
si3=4U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964956U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L79;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L79:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L26;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L26;
}
goto L1;
L29:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964972U;
si3=5U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16964980U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L80;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L80:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L27;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L27;
}
goto L1;
L28:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16964996U;
si3=5U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16965004U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L81;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L81:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L82;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L82;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
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
L82:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
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
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1898(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967505U;
si2=13U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966100U;
si8=6U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16964304U;
si12=10U;
si13=l0;
si14=20U;
si13+=si14;
si14=16965740U;
si15=16965852U;
si16=5U;
si17=l0;
si18=24U;
si17+=si18;
si18=16964316U;
si19=16967518U;
si20=6U;
si21=l2;
si22=12U;
si21+=si22;
si22=16967388U;
si0=f672(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1899(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967795U;
si2=16U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16967102U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16967105U;
si12=10U;
si13=l2;
si14=12U;
si13+=si14;
si14=16967116U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1900(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966641U;
si2=9U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965734U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16965756U;
si12=4U;
si13=l0;
si14=20U;
si13+=si14;
si14=16965740U;
si15=16965776U;
si16=6U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966300U;
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

U32 f1901(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966793U;
si2=9U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965734U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16965756U;
si12=4U;
si13=l0;
si14=20U;
si13+=si14;
si14=16965760U;
si15=16965776U;
si16=6U;
si17=l2;
si18=12U;
si17+=si18;
si18=16965784U;
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

U32 f1902(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966940U;
si2=10U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965734U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16966950U;
si12=3U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966440U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1903(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967656U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967670U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=16967680U;
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

U32 f1904(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966886U;
si2=10U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966615U;
si8=2U;
si9=l0;
si10=28U;
si9+=si10;
si10=16966896U;
si11=16966244U;
si12=6U;
si13=l2;
si14=12U;
si13+=si14;
si14=16965812U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1905(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16966682U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965852U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966440U;
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

U32 f1906(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16966290U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965852U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966300U;
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

U32 f1907(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967848U;
si2=17U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16967865U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16967670U;
si12=8U;
si13=l0;
si14=20U;
si13+=si14;
si14=16967868U;
si15=16967884U;
si16=9U;
si17=l0;
si18=32U;
si17+=si18;
si18=16967896U;
si19=16967912U;
si20=12U;
si21=l2;
si22=12U;
si21+=si22;
si22=16967680U;
si0=f672(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1908(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967040U;
si2=10U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965852U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966440U;
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

U32 f1909(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967352U;
si2=12U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966990U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966996U;
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

U32 f1910(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966953U;
si2=10U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966963U;
si8=7U;
si9=l0;
si10=16U;
si9+=si10;
si10=16966176U;
si11=16965852U;
si12=5U;
si13=l0;
si14=28U;
si13+=si14;
si14=16965740U;
si15=16964332U;
si16=12U;
si17=l2;
si18=12U;
si17+=si18;
si18=16964344U;
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

U32 f1911(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967492U;
si2=13U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965852U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966300U;
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

U32 f1912(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
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
si1=16965828U;
si2=7U;
si3=16964260U;
si4=5U;
si5=l0;
si6=56U;
si5+=si6;
si6=16964268U;
si7=16964284U;
si8=3U;
si9=l0;
si10=72U;
si9+=si10;
si10=16965836U;
si11=16965852U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=16965860U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1913(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16966729U;
si2=9U;
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
si1=16964260U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966324U;
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

U32 f1914(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966250U;
si2=8U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965807U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16966176U;
si11=16966258U;
si12=3U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966264U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1915(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16968036U;
si2=19U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966224U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16966176U;
si11=16967670U;
si12=8U;
si13=l0;
si14=28U;
si13+=si14;
si14=16967868U;
si15=16968055U;
si16=4U;
si17=l2;
si18=12U;
si17+=si18;
si18=16965712U;
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

U32 f1916(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967827U;
si2=16U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16964244U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16964288U;
si11=16967843U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966440U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1917(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966340U;
si2=8U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966348U;
si8=5U;
si9=l0;
si10=16U;
si9+=si10;
si10=16966356U;
si11=16965756U;
si12=4U;
si13=l0;
si14=28U;
si13+=si14;
si14=16965760U;
si15=16964332U;
si16=12U;
si17=l2;
si18=12U;
si17+=si18;
si18=16964344U;
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

U32 f1918(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16968099U;
si2=21U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=24U;
si3+=si4;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965852U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16968120U;
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

U32 f1919(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967999U;
si2=18U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964244U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=16968020U;
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

U32 f1920(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967436U;
si2=13U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965852U;
si8=5U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16967449U;
si12=4U;
si13=l0;
si14=20U;
si13+=si14;
si14=16964288U;
si15=16966258U;
si16=3U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966264U;
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

U32 f1921(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16966970U;
si2=10U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966963U;
si2=7U;
si3=l2;
si4=4U;
si3+=si4;
si4=16965812U;
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

U32 f1922(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966738U;
si2=9U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966747U;
si8=7U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16966754U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966760U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1923(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967179U;
si2=11U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965756U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965760U;
si11=16966124U;
si12=8U;
si13=l0;
si14=28U;
si13+=si14;
si14=16966132U;
si15=16965776U;
si16=6U;
si17=l0;
si18=40U;
si17+=si18;
si18=16965760U;
si19=16966148U;
si20=9U;
si21=l2;
si22=12U;
si21+=si22;
si22=16965784U;
si0=f672(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1924(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16968157U;
si2=26U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16968183U;
si8=5U;
si9=l0;
si10=28U;
si9+=si10;
si10=16964316U;
si11=16964244U;
si12=4U;
si13=l0;
si14=32U;
si13+=si14;
si14=16965836U;
si15=16965756U;
si16=4U;
si17=l2;
si18=12U;
si17+=si18;
si18=16965784U;
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

U32 f1925(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=16968228U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=16968188U;
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

U32 f1926(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966117U;
si2=7U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16965756U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965760U;
si11=16966124U;
si12=8U;
si13=l0;
si14=28U;
si13+=si14;
si14=16966132U;
si15=16965776U;
si16=6U;
si17=l0;
si18=40U;
si17+=si18;
si18=16965760U;
si19=16966148U;
si20=9U;
si21=l2;
si22=12U;
si21+=si22;
si22=16965784U;
si0=f672(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1927(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967811U;
si2=16U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964244U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=16965712U;
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

U32 f1928(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967924U;
si2=17U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965852U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966300U;
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

U32 f1929(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967453U;
si2=13U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966244U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=16965812U;
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


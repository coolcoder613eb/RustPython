#include "w2c2_base.h"

#include "rustpython.h"

U32 f4830(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f3560(i);
l1=si1;
f3572(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4831(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f4681(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17281084U;
si2=5U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17281089U;
si2=74U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1548U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4832(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17286642U;
si2=11U;
si0=f3991(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=17286653U;
si2=353U;
si0=f3991(i,si0,si1,si2);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=1539U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4833(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f4112(i);
l1=si1;
f4119(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4834(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=92U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17261712U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17254388U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17257531U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17285035U;
si2=5U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=28U;
si1*=si2;
l2=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1547U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4835(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f4200(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17287006U;
si2=4U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17287015U;
si2=668U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1544U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4836(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=43U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17310236U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17308660U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967316ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17310279U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17286584U;
si2=11U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17286595U;
si2=40U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=28U;
si1*=si2;
l2=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1543U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4837(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=90U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17261588U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17254004U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967299ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17257528U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17285031U;
si2=4U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=28U;
si1*=si2;
l2=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1531U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4838(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f3563(i);
l1=si1;
f3570(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4839(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f5215(i);
l1=si1;
f5232(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4840(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f4113(i);
l1=si1;
f4118(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4841(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f5219(i);
l1=si1;
f5230(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4842(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f4684(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17285071U;
si2=4U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17285075U;
si2=84U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1550U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4843(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=23U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17304576U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17302496U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17304599U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17281163U;
si2=12U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17281175U;
si2=17U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=28U;
si1*=si2;
l2=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1540U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4844(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f5060(i);
l1=si1;
f5071(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4845(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f4116(i);
l1=si1;
f4117(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4846(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f4465(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17280812U;
si2=7U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17280819U;
si2=265U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1530U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4847(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f5204(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17283765U;
si2=2U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17283767U;
si2=1175U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1533U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4848(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=97U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17297864U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17293704U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17297961U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=97U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17297967U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17293512U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17298064U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17285040U;
si2=7U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
if(si0){
goto L3;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L2;
L3:;
si0=l5;
si1=l3;
si2=28U;
si1*=si2;
l2=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L2;
}
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1538U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4849(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f5222(i);
l1=si1;
f5228(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4850(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f4468(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17284987U;
si2=8U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17284995U;
si2=36U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1545U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4851(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=606U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17306536U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17302520U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17302133U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=440U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17307142U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17302784U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17302177U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17281192U;
si2=4U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17281196U;
si2=2566U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
if(si0){
goto L3;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L2;
L3:;
si0=l5;
si1=l3;
si2=28U;
si1*=si2;
l2=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L2;
}
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1551U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4852(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f4071(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17285052U;
si2=5U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17285057U;
si2=14U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1541U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4853(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=4U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=508U;
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
goto L1;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=17280749U;
si2=8U;
si3=17280757U;
si4=5U;
si5=l1;
si6=4U;
si5+=si6;
si0=f10360(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
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
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L2:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f4854(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=60U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17297692U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17293944U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17297752U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=60U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17297759U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17293752U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17297819U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17284942U;
si2=7U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17284949U;
si2=38U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
if(si0){
goto L3;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L2;
L3:;
si0=l5;
si1=l3;
si2=28U;
si1*=si2;
l2=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L2;
}
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1537U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4855(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=4U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=332U;
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
goto L1;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=17287006U;
si2=4U;
si3=17287010U;
si4=5U;
si5=l1;
si6=4U;
si5+=si6;
si0=f10360(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
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
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L2:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f4856(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17286514U;
si2=7U;
si0=f3991(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=17286521U;
si2=63U;
si0=f3991(i,si0,si1,si2);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=1549U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4857(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17285203U;
si2=6U;
si0=f3991(i,si0,si1,si2);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=1535U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4858(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f4928(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17280749U;
si2=8U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17280772U;
si2=40U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1536U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4859(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f3998(i);
l1=si1;
f3999(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4860(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=f5065(i);
l1=si1;
f5068(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 f4861(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
f5211(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17285209U;
si2=7U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17285216U;
si2=1298U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=l2;
si2=28U;
si1*=si2;
l3=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1552U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

U32 f4862(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
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
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=733U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17240880U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17238984U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17241613U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=1421U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17241618U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17239008U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17243039U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=17287683U;
si2=5U;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=17287688U;
si2=219U;
si0=f3991(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
if(si0){
goto L3;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L2;
L3:;
si0=l5;
si1=l3;
si2=28U;
si1*=si2;
l2=si1;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L2;
}
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1553U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

void f4863(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l4;
si1=l6;
si2=1U;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=34U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
if(si0){
goto L13;
}
si0=l2;
if(si0){
goto L12;
}
si0=0U;
l3=si0;
goto L5;
L13:;
si0=l2;
if(si0){
goto L11;
}
si0=0U;
l3=si0;
goto L4;
L12:;
si0=0U;
l8=si0;
si0=0U;
l3=si0;
si0=0U;
l6=si0;
L14:;
{
si0=l6;
si1=1U;
si0+=si1;
l9=si0;
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=3U;
si0>>=(si1&31);
si1=24U;
si0&=si1;
si1=17280136U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l10;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
si0=l10;
si1=32U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=2U;
l11=si0;
si0=l10;
si1=34U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=17280196U;
l12=si0;
si0=l10;
si1=92U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l10;
si1=127U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=17280200U;
l12=si0;
si0=6U;
l11=si0;
goto L16;
L18:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=17279880U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=17279876U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
goto L16;
L17:;
si0=17280198U;
l12=si0;
L16:;
si0=l3;
si1=l6;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l6;
si1=l2;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0-=si1;
si1=l6;
si2=l3;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l4;
si1=l7;
si2=l10;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l6;
si1+=si2;
si2=l3;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si1+=si2;
si2=l7;
si1-=si2;
si0+=si1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l4;
si1=l6;
si2=l11;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=l12;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l6;
si2=l11;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
l3=si0;
L15:;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l9;
l6=si0;
si0=l2;
si1=l9;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L6;
}
L11:;
si0=l1;
si1=l2;
si0+=si1;
l13=si0;
si0=0U;
l3=si0;
si0=l1;
l6=si0;
si0=0U;
l9=si0;
L21:;
{
si0=l6;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L29;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l10=si0;
si0=l7;
si1=31U;
si0&=si1;
l8=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l7=si0;
si0=l6;
si1=2U;
si0+=si1;
l12=si0;
goto L30;
L31:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l6;
si1=3U;
si0+=si1;
l12=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=l10;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
goto L30;
L32:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=63U;
si1&=si2;
si0|=si1;
si1=l8;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=4U;
si0+=si1;
l12=si0;
L30:;
si0=l9;
si1=l6;
si0-=si1;
si1=l12;
si0+=si1;
l8=si0;
si0=l7;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l12;
l6=si0;
goto L28;
L33:;
si0=l9;
si1=l3;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l9;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l9;
si1=l2;
si2=17280256U;
f597(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
si0=l9;
si1=l6;
si0-=si1;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0+=si1;
l8=si0;
si0=l6;
l6=si0;
L28:;
si0=l7;
si1=3U;
si0>>=(si1&31);
si1=262136U;
si0&=si1;
si1=17280136U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l7;
sj1=(U64)(si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l8;
l9=si0;
goto L22;
L34:;
si0=l7;
si1=255U;
si0&=si1;
l10=si0;
si1=32U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=2U;
l7=si0;
si0=l10;
si1=34U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=17280196U;
l14=si0;
si0=l10;
si1=92U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l10;
si1=127U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=17280200U;
l14=si0;
si0=6U;
l7=si0;
goto L23;
L35:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=17279880U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l10;
si1=17279876U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
goto L23;
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si0-=si1;
si1=l9;
si2=l3;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l4;
si1=l6;
si2=l10;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l6;
si2=l10;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=2047U;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=2U;
si0+=si1;
l3=si0;
si0=1U;
l6=si0;
goto L37;
L38:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=3U;
si1=4U;
si2=l7;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l9;
si0+=si1;
l3=si0;
si0=l7;
si1=65535U;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=1U;
l6=si0;
goto L37;
L39:;
si0=l5;
si1=l7;
si2=1023U;
si1&=si2;
si2=56320U;
si1|=si2;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l7;
si1=16711680U;
si0+=si1;
si1=10U;
si0>>=(si1&31);
si1=-10240U;
si0|=si1;
l7=si0;
si0=2U;
l6=si0;
L37:;
si0=l5;
si1=l7;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=1U;
si0<<=(si1&31);
l10=si0;
si0=0U;
l6=si0;
L40:;
{
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1555U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=17280276U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=4U;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=17237744U;
si2=l5;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l7=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
l9=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L43;
}
si0=l9;
si1=4U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=2U;
l9=si0;
si0=17237784U;
l4=si0;
goto L7;
L43:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l7=si0;
si0=l9;
si1=4U;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l9;
si1=3U;
si0=si0 != si1;
if(si0){
goto L41;
}
L44:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l7;
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
goto L45;
}
si0=l14;
f15024(i,si0);
L45:;
si0=l7;
f15024(i,si0);
goto L41;
L42:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si1=8U;
si0>>=(si1&31);
l11=si0;
si0=l9;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
goto L7;
L41:;
si0=l10;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L40;
}
}
si0=l8;
l9=si0;
si0=l12;
l6=si0;
goto L22;
L26:;
si0=17275232U;
si1=40U;
si2=17280208U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l3;
si1=l9;
si2=17280256U;
f683(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=17280198U;
l14=si0;
L23:;
si0=l9;
si1=l3;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l10=si1;
si0-=si1;
si1=l9;
si2=l3;
si1-=si2;
l12=si1;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l4;
si1=l10;
si2=l12;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L48:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l10;
si2=l12;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l4;
si1=l3;
si2=l7;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L49:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l14;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=1U;
si0+=si1;
l3=si0;
si0=l8;
l9=si0;
goto L22;
L47:;
si0=l3;
si1=l9;
si2=17280284U;
f683(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l9;
si1=l2;
si2=17280284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l6;
si1=l13;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L21;
}
L10:;
si0=l6;
si1=l2;
si2=17280224U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=17275232U;
si1=40U;
si2=17280208U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l3;
si1=l6;
si2=17280224U;
f683(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=l11;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l11;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L6:;
si0=l3;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L4:;
si0=l1;
si1=l3;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0-=si1;
si1=l2;
si2=l3;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l4;
si1=l7;
si2=l6;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L50:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l9;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l4;
si1=l6;
si2=1U;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L51:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=34U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L3:;
si0=l3;
si1=l2;
si2=17280240U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4864(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=68U;
si0+=si1;
l6=si0;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=60U;
si0+=si1;
l7=si0;
si1=l5;
si2=40U;
si1+=si2;
f4687(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
L8:;
{
si0=l5;
si1=1114113U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=72U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f4687(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
goto L9;
L10:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+60U);
l11=sj0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
sj1=l11;
i64_store(&i->m0,(U64)si0+72U,sj1);
L9:;
si0=l6;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l12=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l13=si0;
si0=l6;
si1=92U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l6;
si1=34U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si1=31U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l4;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l5;
si1=17280396U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=255U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l5;
si1=l5;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=l5;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=112U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L23:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=31U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280435U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280428U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280420U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280412U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
goto L2;
L22:;
si0=l12;
si1=l8;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l8;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L24;
}
goto L4;
L25:;
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
L24:;
si0=l12;
si0=!(si0);
if(si0){
goto L19;
}
si0=l12;
si1=l2;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l12;
si1=l2;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L19;
L21:;
si0=l12;
si1=l8;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l8;
si0=!(si0);
if(si0){
goto L26;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L26;
}
goto L5;
L27:;
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
L26:;
si0=l12;
si0=!(si0);
if(si0){
goto L16;
}
si0=l12;
si1=l2;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l12;
si1=l2;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L16;
L20:;
si0=l1;
si1=l12;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
L19:;
si0=l1;
si1=l8;
si0+=si1;
l14=si0;
si0=l12;
si1=l8;
si0-=si1;
l12=si0;
si1=l10;
si0+=si1;
l6=si0;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l9;
f4898(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
L28:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l12=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L31;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L29;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L30;
}
L31:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=0U;
l6=si0;
si0=l1;
l8=si0;
L32:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+116U);
si1=l6;
si0-=si1;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l5;
si1=112U;
si0+=si1;
si1=l6;
si2=l12;
f4875(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
L35:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l6;
si0+=si1;
si1=l9;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l12;
si0+=si1;
l6=si0;
goto L33;
L34:;
si0=l12;
si1=128U;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l12;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l12;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l5;
si1=l12;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+98U,si1);
si0=l5;
si1=l12;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=l12;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+97U,si1);
si0=3U;
l12=si0;
goto L36;
L39:;
si0=l5;
si1=l12;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+99U,si1);
si0=l5;
si1=l12;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+98U,si1);
si0=l5;
si1=l12;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+97U,si1);
si0=l5;
si1=l12;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=4U;
l12=si0;
goto L36;
L38:;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+116U);
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l5;
si1=112U;
si0+=si1;
si1=l6;
f4867(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
L40:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l6;
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+120U);
si1=1U;
si0+=si1;
l6=si0;
goto L33;
L37:;
si0=l5;
si1=l12;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+97U,si1);
si0=l5;
si1=l12;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=2U;
l12=si0;
L36:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+116U);
si1=l6;
si0-=si1;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l5;
si1=112U;
si0+=si1;
si1=l6;
si2=l12;
f4875(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
L41:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l6;
si0+=si1;
si1=l5;
si2=96U;
si1+=si2;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l12;
si0+=si1;
l6=si0;
L33:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L6;
}
L30:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L29:;
f53(i);
UNREACHABLE;
L18:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=l1;
si1=l12;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
L16:;
si0=l12;
si1=l8;
si0-=si1;
l14=si0;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l9;
f4898(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
L42:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l1;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l5;
si1=1114113U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l5;
si1=112U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f4687(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
L43:;
si0=l6;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l14;
si1=l10;
si0+=si1;
l10=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=17277631U;
l14=si0;
si0=l6;
si1=-34U;
si0+=si1;
switch(si0){
case 0:
goto L44;
case 1:
goto L13;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L13;
case 5:
goto L13;
case 6:
goto L13;
case 7:
goto L13;
case 8:
goto L13;
case 9:
goto L13;
case 10:
goto L13;
case 11:
goto L13;
case 12:
goto L13;
case 13:
goto L51;
case 14:
goto L13;
case 15:
goto L13;
case 16:
goto L13;
case 17:
goto L13;
case 18:
goto L13;
case 19:
goto L13;
case 20:
goto L13;
case 21:
goto L13;
case 22:
goto L13;
case 23:
goto L13;
case 24:
goto L13;
case 25:
goto L13;
case 26:
goto L13;
case 27:
goto L13;
case 28:
goto L13;
case 29:
goto L13;
case 30:
goto L13;
case 31:
goto L13;
case 32:
goto L13;
case 33:
goto L13;
case 34:
goto L13;
case 35:
goto L13;
case 36:
goto L13;
case 37:
goto L13;
case 38:
goto L13;
case 39:
goto L13;
case 40:
goto L13;
case 41:
goto L13;
case 42:
goto L13;
case 43:
goto L13;
case 44:
goto L13;
case 45:
goto L13;
case 46:
goto L13;
case 47:
goto L13;
case 48:
goto L13;
case 49:
goto L13;
case 50:
goto L13;
case 51:
goto L13;
case 52:
goto L13;
case 53:
goto L13;
case 54:
goto L13;
case 55:
goto L13;
case 56:
goto L13;
case 57:
goto L13;
case 58:
goto L45;
case 59:
goto L13;
case 60:
goto L13;
case 61:
goto L13;
case 62:
goto L13;
case 63:
goto L13;
case 64:
goto L50;
case 65:
goto L13;
case 66:
goto L13;
case 67:
goto L13;
case 68:
goto L49;
case 69:
goto L13;
case 70:
goto L13;
case 71:
goto L13;
case 72:
goto L13;
case 73:
goto L13;
case 74:
goto L13;
case 75:
goto L13;
case 76:
goto L48;
case 77:
goto L13;
case 78:
goto L13;
case 79:
goto L13;
case 80:
goto L47;
case 81:
goto L13;
case 82:
goto L46;
case 83:
goto L14;
default:
goto L13;
}
L52:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=31U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280435U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280428U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280420U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280412U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L51:;
si0=17280333U;
l14=si0;
goto L44;
L50:;
si0=17280334U;
l14=si0;
goto L44;
L49:;
si0=17280335U;
l14=si0;
goto L44;
L48:;
si0=17277560U;
l14=si0;
goto L44;
L47:;
si0=17280336U;
l14=si0;
goto L44;
L46:;
si0=17280337U;
l14=si0;
goto L44;
L45:;
si0=17280332U;
l14=si0;
L44:;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l9;
f4898(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
L53:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l12;
si1=2U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
L15:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
goto L8;
L14:;
si0=l5;
si1=112U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
si2=l13;
f4865(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+116U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+112U);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+120U);
l11=sj0;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L13:;
si0=l5;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l5;
si1=17280356U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=255U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l5;
si1=l5;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=l5;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=112U;
si1+=si2;
f4764(i,si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L12:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l6;
si1=-1024U;
si0&=si1;
si1=55296U;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l7;
si1=l5;
si2=40U;
si1+=si2;
f4687(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
L55:;
si0=l8;
si1=92U;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l5;
si1=1114113U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+60U);
l12=si0;
si0=l7;
si1=l5;
si2=40U;
si1+=si2;
f4687(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=117U;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l5;
si1=16U;
si0+=si1;
si1=18U;
si2=0U;
f4897(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280443U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17280459U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280451U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=18U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L56:;
si0=l5;
si1=1114113U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=112U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
si2=l12;
f4865(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+116U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+112U);
l9=si0;
if(si0){
goto L57;
}
si0=l8;
si1=-1024U;
si0&=si1;
si1=56320U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l5;
si1=8U;
si0+=si1;
si1=18U;
si2=0U;
f4897(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280443U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17280459U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280451U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=18U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L58:;
si0=l8;
si1=-56320U;
si0+=si1;
si1=l6;
si2=10U;
si1<<=(si2&31);
si2=-56623104U;
si1+=si2;
si0|=si1;
si1=65536U;
si0+=si1;
l6=si0;
goto L54;
L57:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+120U);
l11=sj0;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L54:;
si0=l6;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L59;
}
si0=l6;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112064U;
si0=si0 < si1;
if(si0){
goto L59;
}
si0=1U;
l14=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=2U;
l14=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l14=si0;
L60:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l9;
f4898(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
L61:;
si0=l12;
si1=6U;
si0+=si1;
l8=si0;
si0=l14;
si1=l10;
si0+=si1;
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
goto L8;
L59:;
}
si0=l5;
si1=18U;
si2=0U;
f4897(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280443U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17280459U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280451U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l13;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=18ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
goto L2;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L62;
}
si0=l1;
f15024(i,si0);
L62:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=120U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l1;
si1=l2;
si2=l8;
si3=l12;
si4=17280316U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l1;
si1=l2;
si2=l8;
si3=l12;
si4=17280300U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=31U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280435U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280428U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280420U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280412U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=31U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=31ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f4865(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=28U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
f4687(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=-48U;
si0+=si1;
l4=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=-1U;
si1=l5;
si2=32U;
si1|=si2;
l5=si1;
si2=-87U;
si1+=si2;
l4=si1;
si2=l4;
si3=l5;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L5;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l1;
si1=1114113U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si1=l1;
f4687(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L7:;
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=-48U;
si0+=si1;
l6=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=-1U;
si1=l5;
si2=32U;
si1|=si2;
l5=si1;
si2=-87U;
si1+=si2;
l6=si1;
si2=l6;
si3=l5;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L5;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l1;
si1=1114113U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
f4687(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L9:;
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=-1U;
si1=l5;
si2=32U;
si1|=si2;
l5=si1;
si2=-87U;
si1+=si2;
l7=si1;
si2=l7;
si3=l5;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L5;
}
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l1;
si1=1114113U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=l1;
f4687(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L11:;
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=-48U;
si0+=si1;
l1=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=-1U;
si1=l5;
si2=32U;
si1|=si2;
l5=si1;
si2=-87U;
si1+=si2;
l1=si1;
si2=l1;
si3=l5;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L5;
}
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l7;
si3=4U;
si2<<=(si3&31);
si3=l6;
si4=8U;
si3<<=(si4&31);
si4=l4;
si5=12U;
si4<<=(si5&31);
si3|=si4;
si2|=si3;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=21U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=21U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280474U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280469U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280461U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=21ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L13:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=21U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280474U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280469U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17280461U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f4866(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f3886(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=64U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+111U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L9;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L8;
L9:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l10=si0;
L10:;
{
si0=l7;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si1=61U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l10;
si1=1U;
si0+=si1;
l3=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L17;
case 2:
goto L17;
case 3:
goto L16;
default:
goto L18;
}
L19:;
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=95U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
si1=l8;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l8;
si0+=si1;
si1=32U;
i32_store8(&i->m0,(U64)si0,si1);
goto L14;
L18:;
si0=l11;
si1=61U;
si0=si0 == si1;
if(si0){
goto L12;
}
L17:;
si0=l10;
si1=2U;
si0+=si1;
l12=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l11;
si1=-48U;
si0+=si1;
l13=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
l14=si0;
if(si0){
goto L23;
}
si0=l11;
si1=-65U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L23;
case 2:
goto L23;
case 3:
goto L23;
case 4:
goto L23;
case 5:
goto L23;
case 6:
goto L22;
case 7:
goto L22;
case 8:
goto L22;
case 9:
goto L22;
case 10:
goto L22;
case 11:
goto L22;
case 12:
goto L22;
case 13:
goto L22;
case 14:
goto L22;
case 15:
goto L22;
case 16:
goto L22;
case 17:
goto L22;
case 18:
goto L22;
case 19:
goto L22;
case 20:
goto L22;
case 21:
goto L22;
case 22:
goto L22;
case 23:
goto L22;
case 24:
goto L22;
case 25:
goto L22;
case 26:
goto L22;
case 27:
goto L22;
case 28:
goto L22;
case 29:
goto L22;
case 30:
goto L22;
case 31:
goto L22;
case 32:
goto L23;
case 33:
goto L23;
case 34:
goto L23;
case 35:
goto L23;
case 36:
goto L23;
case 37:
goto L23;
default:
goto L22;
}
L23:;
si0=l7;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=-48U;
si0+=si1;
l15=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
l16=si0;
if(si0){
goto L21;
}
si0=l12;
si1=-65U;
si0+=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L21;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L21;
case 5:
goto L21;
case 6:
goto L22;
case 7:
goto L22;
case 8:
goto L22;
case 9:
goto L22;
case 10:
goto L22;
case 11:
goto L22;
case 12:
goto L22;
case 13:
goto L22;
case 14:
goto L22;
case 15:
goto L22;
case 16:
goto L22;
case 17:
goto L22;
case 18:
goto L22;
case 19:
goto L22;
case 20:
goto L22;
case 21:
goto L22;
case 22:
goto L22;
case 23:
goto L22;
case 24:
goto L22;
case 25:
goto L22;
case 26:
goto L22;
case 27:
goto L22;
case 28:
goto L22;
case 29:
goto L22;
case 30:
goto L22;
case 31:
goto L22;
case 32:
goto L21;
case 33:
goto L21;
case 34:
goto L21;
case 35:
goto L21;
case 36:
goto L21;
case 37:
goto L21;
default:
goto L22;
}
L22:;
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
si1=l8;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l8;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
l10=si0;
goto L11;
L21:;
si0=1U;
l17=si0;
si0=1U;
l3=si0;
si0=l14;
if(si0){
goto L25;
}
si0=l11;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l11;
si1=-55U;
si0+=si1;
l13=si0;
si0=l11;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
l3=si0;
goto L25;
L26:;
si0=l11;
si1=-87U;
si0+=si1;
l13=si0;
si0=1U;
l3=si0;
L25:;
si0=l16;
if(si0){
goto L27;
}
si0=l12;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l12;
si1=-55U;
si0+=si1;
l15=si0;
si0=l12;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
l17=si0;
goto L27;
L28:;
si0=l12;
si1=-87U;
si0+=si1;
l15=si0;
L27:;
si0=l3;
si1=l17;
si0&=si1;
if(si0){
goto L29;
}
si0=l10;
si1=3U;
si0+=si1;
l10=si0;
goto L11;
L29:;
si0=l15;
si1=l13;
si2=4U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l4;
si1=l8;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l8;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=3U;
si0+=si1;
l10=si0;
goto L11;
L16:;
L31:;
{
si0=l7;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l6;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=l6;
l3=si0;
goto L13;
L15:;
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l4;
si1=l8;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L32:;
si0=l9;
si1=l8;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
L14:;
si0=l4;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L11;
L13:;
si0=l3;
si1=l3;
si2=l6;
si1=si1 < si2;
si0+=si1;
l10=si0;
goto L11;
L12:;
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l4;
si1=l8;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l8;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=2U;
si0+=si1;
l10=si0;
L11:;
si0=l10;
si1=l6;
si0=si0 < si1;
if(si0){
goto L10;
}
}
L8:;
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
goto L3;
L7:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
l6=si0;
goto L2;
L4:;
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
si2=l4;
si3=111U;
si2+=si3;
f5238(i,si0,si1,si2);
L3:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
goto L34;
L35:;
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L36:;
si0=l4;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
f15024(i,si0);
L37:;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f15024(i,si0);
L34:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L1;
}
si0=0U;
l6=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L38:;
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4867(rustpythonInstance*i,U32 l0,U32 l1) {
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
f4895(i,si0,si1,si2,si3);
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

void f4868(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f3891(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+54U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=68U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+53U);
l6=si0;
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+52U);
l7=si1;
i32_store8(&i->m0,(U64)si0+113U,si1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+114U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+115U,si1);
si0=l4;
si1=l4;
si2=113U;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l4;
si2=114U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l4;
si2=115U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+108U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l8;
si1=-1U;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
si0=1U;
l12=si0;
si0=0U;
l3=si0;
L14:;
{
si0=5U;
l13=si0;
si0=l10;
si1=l3;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l9;
si1=l3;
si0+=si1;
l14=si0;
si0=l3;
si1=1U;
si0+=si1;
l15=si0;
l3=si0;
si0=l14;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L14;
}
L13:;
si0=2U;
l16=si0;
goto L7;
L12:;
si0=-1U;
si1=l8;
si2=17288860U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L6;
L10:;
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si2=68U;
si1+=si2;
si2=l4;
si3=116U;
si2+=si3;
f5240(i,si0,si1,si2);
goto L5;
L9:;
si0=1U;
l14=si0;
goto L4;
L8:;
si0=l15;
si1=l8;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=2U;
l16=si0;
goto L7;
L15:;
si0=2U;
l16=si0;
si0=l9;
si1=l15;
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=13U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=6U;
l13=si0;
si0=2U;
l12=si0;
si0=1U;
l11=si0;
si0=3U;
l16=si0;
L7:;
si0=l6;
si1=255U;
si0&=si1;
l17=si0;
si0=0U;
l10=si0;
si0=0U;
l15=si0;
si0=0U;
l3=si0;
L16:;
{
si0=l9;
si1=l3;
si0+=si1;
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si1=126U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l5;
si1=0U;
si0=si0 != si1;
si1=l14;
si2=95U;
si1=si1 == si2;
si0&=si1;
if(si0){
goto L18;
}
si0=l14;
si1=46U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l10;
if(si0){
goto L21;
}
si0=l3;
si1=1U;
si0+=si1;
l18=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l18;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l9;
si1=l18;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l18=si0;
si1=13U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=1U;
si1=l18;
si0<<=(si1&31);
si1=9217U;
si0&=si1;
if(si0){
goto L18;
}
L21:;
si0=l17;
if(si0){
goto L24;
}
si0=l14;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L18;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L18;
case 5:
goto L22;
case 6:
goto L22;
case 7:
goto L22;
case 8:
goto L22;
case 9:
goto L22;
case 10:
goto L22;
case 11:
goto L22;
case 12:
goto L22;
case 13:
goto L22;
case 14:
goto L22;
case 15:
goto L22;
case 16:
goto L22;
case 17:
goto L22;
case 18:
goto L22;
case 19:
goto L22;
case 20:
goto L22;
case 21:
goto L22;
case 22:
goto L22;
case 23:
goto L23;
default:
goto L22;
}
L24:;
si0=l14;
si1=32U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l14;
si1=9U;
si0=si0 != si1;
if(si0){
goto L22;
}
L23:;
si0=l3;
si1=1U;
si0+=si1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L18;
}
L22:;
si0=l14;
si1=32U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l14;
si1=13U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l14;
si1=10U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L18;
}
si0=l14;
si1=32U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l14;
si1=9U;
si0=si0 != si1;
if(si0){
goto L18;
}
L27:;
si0=l17;
si0=!(si0);
if(si0){
goto L19;
}
si0=l14;
si1=10U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l3;
si1=1U;
si0+=si1;
l18=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l14;
si1=13U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l9;
si1=l18;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L19;
L26:;
si0=l17;
si0=!(si0);
if(si0){
goto L19;
}
L25:;
si0=0U;
l10=si0;
si0=0U;
l18=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L28;
}
si0=2U;
si1=l6;
si2=-1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=9U;
si1=si1 == si2;
si2=1U;
si1<<=(si2&31);
si2=l6;
si3=32U;
si2=si2 == si3;
si0=si2?si0:si1;
l18=si0;
L28:;
si0=l18;
si1=l12;
si0+=si1;
l6=si0;
si0=2U;
si1=1U;
si2=l14;
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
si1=l3;
si0+=si1;
l3=si0;
goto L17;
L20:;
si0=l18;
si1=l8;
si2=17288956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=0U;
l14=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l3;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l9;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=0U;
si1=l10;
si2=l10;
si3=-75U;
si2+=si3;
si3=-76U;
si2=si2 < si3;
l14=si2;
si0=si2?si0:si1;
l10=si0;
si0=l16;
si1=0U;
si2=l14;
si0=si2?si0:si1;
l14=si0;
L30:;
si0=l14;
si1=1U;
si0+=si1;
l6=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L17;
L29:;
si0=l3;
si1=l8;
si2=17288972U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=3U;
si1=l10;
si2=3U;
si1+=si2;
si2=l10;
si3=-73U;
si2+=si3;
si3=-76U;
si2=si2 < si3;
l14=si2;
si0=si2?si0:si1;
l10=si0;
si0=l13;
si1=3U;
si2=l14;
si0=si2?si0:si1;
l6=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L17:;
si0=l6;
si1=l15;
si0+=si1;
l15=si0;
si0=l3;
si1=l8;
si0=si0 < si1;
if(si0){
goto L16;
}
}
si0=1U;
l6=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L31;
}
si0=l15;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L31:;
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l10=si0;
si0=0U;
l15=si0;
si0=0U;
l13=si0;
L32:;
{
si0=l9;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si1=126U;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+115U);
l5=si0;
si0=l14;
si1=95U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L45;
}
L46:;
si0=l14;
si1=46U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l10;
if(si0){
goto L47;
}
si0=0U;
l18=si0;
si0=l15;
si1=1U;
si0+=si1;
l17=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l17;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l9;
si1=l17;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si1=13U;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=1U;
si1=l17;
si0<<=(si1&31);
si1=9217U;
si0&=si1;
if(si0){
goto L36;
}
L47:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+114U);
l18=si0;
if(si0){
goto L50;
}
si0=l14;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L49;
case 1:
goto L45;
case 2:
goto L48;
case 3:
goto L48;
case 4:
goto L45;
case 5:
goto L48;
case 6:
goto L48;
case 7:
goto L48;
case 8:
goto L48;
case 9:
goto L48;
case 10:
goto L48;
case 11:
goto L48;
case 12:
goto L48;
case 13:
goto L48;
case 14:
goto L48;
case 15:
goto L48;
case 16:
goto L48;
case 17:
goto L48;
case 18:
goto L48;
case 19:
goto L48;
case 20:
goto L48;
case 21:
goto L48;
case 22:
goto L48;
case 23:
goto L49;
default:
goto L48;
}
L50:;
si0=l14;
si1=32U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l14;
si1=9U;
si0=si0 != si1;
if(si0){
goto L48;
}
L49:;
si0=l15;
si1=1U;
si0+=si1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L45;
}
L48:;
si0=l14;
si1=32U;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=l14;
si1=13U;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l14;
si1=10U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+113U);
if(si0){
goto L45;
}
si0=l14;
si1=32U;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l14;
si1=9U;
si0=si0 != si1;
if(si0){
goto L45;
}
L51:;
si0=l18;
si0=!(si0);
if(si0){
goto L35;
}
si0=l14;
si1=10U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l15;
si1=1U;
si0+=si1;
l18=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l14;
si1=13U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l9;
si1=l18;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L43;
}
goto L35;
L45:;
si0=l10;
si1=-73U;
si0+=si1;
si1=-76U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l10;
l18=si0;
goto L36;
L44:;
si0=l18;
si0=!(si0);
if(si0){
goto L35;
}
L43:;
si0=l13;
if(si0){
goto L52;
}
si0=0U;
l13=si0;
goto L37;
L52:;
si0=l13;
si1=-1U;
si0+=si1;
l10=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l6;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=l5;
si1=32U;
si0=si0 != si1;
if(si0){
goto L37;
}
L53:;
si0=l5;
si1=4U;
si0>>=(si1&31);
si1=48U;
si0|=si1;
l5=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L54:;
si0=l6;
si1=l3;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=48U;
si1=87U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
l6=si2;
si3=l10;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=15U;
si2&=si3;
l5=si2;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l5;
si0+=si1;
l5=si0;
si1=l5;
si2=-32U;
si1+=si2;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L55:;
si0=l6;
si1=l3;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l6;
si1=l10;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=2U;
si0+=si1;
l13=si0;
goto L37;
L56:;
si0=l10;
si1=l3;
si2=17288940U;
f594(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l10=si1;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
if(si0){
goto L58;
}
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
goto L38;
L58:;
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L59;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l10;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L59:;
si0=l6;
si1=l3;
si0+=si1;
si1=13U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=2U;
si0+=si1;
l13=si0;
goto L38;
L41:;
si0=l17;
si1=l8;
si2=17288876U;
f594(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l10;
si1=l3;
si2=17288908U;
f594(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l10;
si1=l3;
si2=17288924U;
f594(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l10;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L60:;
si0=l6;
si1=l3;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l18=si0;
goto L36;
L37:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L61;
}
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L62;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L62:;
si0=l6;
si1=l3;
si0+=si1;
si1=13U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L61:;
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L63;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l10;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L63:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=2U;
si1=1U;
si2=l14;
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
si1=l15;
si0+=si1;
l15=si0;
si0=0U;
l10=si0;
goto L34;
L36:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l10=si1;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L64:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=48U;
si1=87U;
si2=l14;
si3=160U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l14;
si2=4U;
si1>>=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
si2=-32U;
si1+=si2;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l10;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L65:;
si0=l6;
si1=l3;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=48U;
si1=87U;
si2=l14;
si3=15U;
si2&=si3;
l14=si2;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l14;
si0+=si1;
l14=si0;
si1=l14;
si2=-32U;
si1+=si2;
si2=l14;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
l14=si0;
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L66;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l10;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L66:;
si0=l6;
si1=l3;
si0+=si1;
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l18;
si1=3U;
si0+=si1;
l10=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l13;
si1=3U;
si0+=si1;
l13=si0;
goto L33;
L35:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l15;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L69;
}
si0=l9;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l10;
si1=-75U;
si0+=si1;
si1=-76U;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L70;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L70:;
si0=l6;
si1=l3;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l11;
if(si0){
goto L71;
}
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
goto L68;
L71:;
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L72:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0+=si1;
si1=13U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=2U;
si0+=si1;
l13=si0;
goto L68;
L69:;
si0=l15;
si1=l8;
si2=17288892U;
f594(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L73;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l10;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L73:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l10=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+115U);
l5=si0;
L67:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l14;
si1=32U;
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L75;
}
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L76;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L76:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si0+=si1;
si1=95U;
i32_store8(&i->m0,(U64)si0,si1);
goto L74;
L75:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L77:;
si0=l6;
si1=l3;
si0+=si1;
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
L74:;
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
L34:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
L33:;
si0=l15;
si1=l8;
si0=si0 < si1;
if(si0){
goto L32;
}
}
L6:;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+56U,sj1);
L5:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+108U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L79;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L78;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
goto L78;
L79:;
si0=l4;
si1=68U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+72U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L80;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L80:;
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L81;
}
si0=l3;
f15024(i,si0);
L81:;
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L78;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f15024(i,si0);
L78:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L3;
}
si0=0U;
l14=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L4;
L82:;
si0=1U;
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l3=si0;
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f4869(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f3941(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=48U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+41U);
i32_store16(&i->m0,(U64)si0+89U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+44U);
l6=si1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l6;
si2=56U;
si1+=si2;
si1=f8768(i,si1);
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
f5257(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
f5522(i,si0);
L3:;
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f5522(i,si0);
L4:;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
f15024(i,si0);
L5:;
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L6:;
si0=0U;
l6=si0;
si0=l3;
si1=l2;
si0=f8870(i,si0,si1);
l3=si0;
goto L1;
L2:;
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4870(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f3928(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=52U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=28U;
si0+=si1;
l6=si0;
si1=l4;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+93U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=52U;
si1+=si2;
f5246(i,si0,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
f5522(i,si0);
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
f15024(i,si0);
L5:;
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L3:;
si0=1U;
l2=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4871(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f3958(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=48U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+41U);
i32_store16(&i->m0,(U64)si0+89U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+44U);
l6=si1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
goto L3;
L4:;
si0=l6;
si1=56U;
si0+=si1;
si0=f8768(i,si0);
l3=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
f5522(i,si0);
L3:;
si0=l4;
si1=48U;
si0+=si1;
sj1=0ULL;
si2=l3;
si0=f5249(i,si0,sj1,si2);
l3=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f5522(i,si0);
L5:;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
f15024(i,si0);
L6:;
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L7:;
si0=0U;
l6=si0;
si0=l3;
si1=l2;
si0=f8870(i,si0,si1);
l3=si0;
goto L1;
L2:;
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4872(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f3914(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=48U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+95U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L14;
}
si0=1U;
l7=si0;
si0=0U;
l8=si0;
si0=0U;
l3=si0;
goto L4;
L14:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
si0=0U;
l9=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l6;
si0+=si1;
l10=si0;
si0=1U;
l11=si0;
si0=0U;
l12=si0;
si0=0U;
l8=si0;
si0=0U;
l13=si0;
si0=0U;
l7=si0;
L18:;
{
si0=l13;
l14=si0;
si0=l8;
l15=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si1=1U;
si0+=si1;
l16=si0;
si0=l3;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si1=61U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l12;
l17=si0;
si0=l7;
l18=si0;
si0=l8;
l3=si0;
si0=l16;
l7=si0;
goto L20;
L25:;
si0=l14;
si1=1U;
si0=si0 > si1;
if(si0){
goto L26;
}
L27:;
{
si0=l8;
si1=l10;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=l8;
si1=1U;
si0+=si1;
l3=si0;
l8=si0;
si0=l13;
si1=61U;
si0=si0 == si1;
if(si0){
goto L27;
}
}
si0=1U;
l17=si0;
si0=l7;
l18=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
goto L20;
L26:;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l16;
l3=si0;
goto L17;
L24:;
si0=l14;
si1=1U;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L30:;
{
si0=l12;
l13=si0;
si0=1U;
l12=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=61U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l8;
si1=17288602U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=63U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L32;
}
si0=l8;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L28;
}
L32:;
si0=l13;
l12=si0;
L31:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L22;
}
L29:;
si0=0U;
l13=si0;
L33:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=61U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=1U;
l12=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l14;
si0+=si1;
si1=3U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L35;
}
goto L34;
L36:;
si0=l8;
si1=17288602U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=63U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L34;
}
si0=l8;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
goto L19;
L35:;
si0=l7;
si1=1U;
si0+=si1;
l3=si0;
goto L17;
L34:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L33;
}
L28:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l13;
l12=si0;
goto L19;
L23:;
si0=l8;
si1=l10;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L11;
L22:;
si0=l14;
l13=si0;
goto L12;
L21:;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si1=61U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l7;
l3=si0;
si0=l16;
l7=si0;
goto L17;
L37:;
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
si0=1U;
l17=si0;
si0=l16;
l18=si0;
L20:;
si0=l13;
si1=17288602U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=63U;
si0=(U32)((I32)si0>(I32)si1);
si1=l8;
si2=-1U;
si1=si1 == si2;
si0|=si1;
l16=si0;
if(si0){
goto L38;
}
si0=0U;
l12=si0;
si0=l17;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
L38:;
si0=l13;
si1=61U;
si2=l16;
si0=si2?si0:si1;
l3=si0;
si0=0U;
l12=si0;
goto L7;
L19:;
si0=1U;
l13=si0;
si0=l14;
switch(si0){
case 0:
goto L39;
case 1:
goto L42;
case 2:
goto L41;
case 3:
goto L40;
default:
goto L39;
}
L42:;
si0=l8;
si1=4U;
si0=(U32)((I32)si0>>(si1&31));
si1=l15;
si2=2U;
si1<<=(si2&31);
si0|=si1;
l13=si0;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l4;
si1=l9;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L43:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l9;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=15U;
si0&=si1;
l8=si0;
si0=2U;
l13=si0;
goto L39;
L41:;
si0=l8;
si1=2U;
si0=(U32)((I32)si0>>(si1&31));
si1=l15;
si2=4U;
si1<<=(si2&31);
si0|=si1;
l13=si0;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l4;
si1=l9;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L44:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l9;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=3U;
l13=si0;
si0=l8;
si1=3U;
si0&=si1;
l8=si0;
goto L39;
L40:;
si0=l8;
si1=l15;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l4;
si1=l9;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L45:;
si0=l11;
si1=l9;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l13=si0;
si0=0U;
l8=si0;
L39:;
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L12;
}
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=61U;
l3=si0;
si0=2U;
l12=si0;
si0=l7;
l18=si0;
goto L7;
L46:;
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
goto L6;
L15:;
si0=l4;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=15616U;
i32_store16(&i->m0,(U64)si0+100U,si1);
goto L5;
L13:;
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=l4;
si3=95U;
si2+=si3;
f5247(i,si0,si1,si2);
goto L6;
L12:;
si0=l13;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L11;
}
L11:;
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+100U,si1);
goto L8;
L10:;
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
goto L6;
L9:;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=104U;
si0+=si1;
si1=l9;
si2=3U;
si1=DIV_U(si1,si2);
si2=2U;
si1<<=(si2&31);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L6;
L7:;
si0=l4;
si1=104U;
si0+=si1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+101U,si1);
si0=l4;
si1=l12;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l3=si0;
goto L4;
L5:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+100U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
si0=f4191(i,si0,si1);
l3=si0;
si0=0U;
l7=si0;
L4:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f5522(i,si0);
goto L47;
L48:;
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f5522(i,si0);
L49:;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l12;
f15024(i,si0);
L50:;
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L47:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l7=si0;
si0=l4;
si1=l12;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L3:;
si0=1U;
l7=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4873(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
f3981(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=68U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=68U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+53U);
i32_store16(&i->m0,(U64)si0+109U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=1U;
si0>>=(si1&31);
l3=si0;
si0=l6;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+116U,si1);
goto L10;
L12:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=1U;
l8=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
L10:;
si0=0U;
l3=si0;
L13:;
{
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l9=si0;
si0=1U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=-48U;
si0+=si1;
l12=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l11;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l11;
si1=-55U;
si0+=si1;
l12=si0;
si0=l11;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
l10=si0;
goto L14;
L15:;
si0=l11;
si1=-87U;
si0+=si1;
l12=si0;
si0=1U;
l10=si0;
L14:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l13=si0;
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
si0=l13;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l13;
si1=-55U;
si0+=si1;
l11=si0;
si0=l13;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
l9=si0;
goto L16;
L17:;
si0=l13;
si1=-87U;
si0+=si1;
l11=si0;
L16:;
si0=l10;
si1=l9;
si0&=si1;
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=27U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=23U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17288581U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17288574U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17288566U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17288558U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=115964117019ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659148U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=18659148U;
si1=l2;
f4785(i,si0,si1);
L19:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659152U);
l3=si0;
si1=l3;
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
goto L1;
}
si0=l4;
si1=l2;
si2=l3;
si3=l4;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
f15024(i,si0);
goto L4;
L18:;
si0=l11;
si1=l12;
si2=4U;
si1<<=(si2&31);
si0|=si1;
l10=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+120U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
si1=116U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l3=si0;
L20:;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
si0=l8;
si1=l3;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l6;
si1=-2U;
si0+=si1;
l6=si0;
if(si0){
goto L13;
}
goto L5;
}
L9:;
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si2=68U;
si1+=si2;
si2=l2;
f5258(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+108U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
goto L4;
L21:;
si0=l4;
si1=68U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+72U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L22:;
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
f15024(i,si0);
L23:;
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f15024(i,si0);
goto L3;
L8:;
si0=1U;
l3=si0;
goto L2;
L7:;
si0=1U;
si1=27U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=17U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17288601U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17288593U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17288585U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=73014444049ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659148U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=18659148U;
si1=l2;
f4785(i,si0,si1);
L25:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659152U);
l3=si0;
si1=l3;
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
goto L1;
}
si0=l4;
si1=l2;
si2=l3;
si3=l4;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L4;
L24:;
si0=1U;
si1=17U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=116U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+116U);
i64_store(&i->m0,(U64)si0+56U,sj1);
L4:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5916(i,si0,si1,si2);
l5=si0;
goto L2;
L26:;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4874(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f3981(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=72U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+113U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L9;
}
si0=32U;
l8=si0;
goto L6;
L9:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0+=si1;
si1=63U;
si0&=si1;
l8=si0;
if(si0){
goto L6;
}
si0=1U;
l9=si0;
si0=0U;
l8=si0;
goto L5;
L8:;
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=l2;
f5253(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+112U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
goto L4;
L10:;
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+76U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=l3;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L11:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
f15024(i,si0);
L12:;
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
goto L3;
L7:;
si0=1U;
l3=si0;
goto L2;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l9=si0;
if(si0){
goto L5;
}
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l7;
si1=2U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l6;
si1=1U;
si0+=si1;
l10=si0;
si0=l7;
si1=-1U;
si0+=si1;
l9=si0;
L22:;
{
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l10;
si2=l9;
si3=4U;
si4=l9;
si5=4U;
si4=si4 < si5;
si2=si4?si2:si3;
l11=si2;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
f3819(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l6=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
f15024(i,si0);
goto L14;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l7=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+156U);
l3=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=3U;
si0=si0 > si1;
if(si0){
goto L24;
}
L25:;
{
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+136U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l4;
si1=132U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
l3=si0;
L26:;
si0=l7;
si1=l3;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L25;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
L24:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l12=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l13=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l14=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L27;
}
si0=l7;
f15024(i,si0);
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l14;
si1=l15;
si0|=si1;
si1=255U;
si0&=si1;
if(si0){
goto L29;
}
goto L28;
L30:;
si0=l14;
si1=240U;
si0&=si1;
si1=4U;
si0>>=(si1&31);
si1=l15;
si2=2U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
L31:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
si1=l3;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+128U,si1);
goto L28;
L29:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17289044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17289036U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=68719476752ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
si2=l4;
si3=8U;
si2+=si3;
si1=f11875(i,si1,si2);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L13;
L32:;
si0=1U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L28:;
si0=l3;
si1=l8;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l13;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L33;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17289044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17289036U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=68719476752ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
si2=l4;
si3=8U;
si2+=si3;
si1=f11875(i,si1,si2);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L13;
L34:;
si0=l13;
si1=252U;
si0&=si1;
si1=2U;
si0>>=(si1&31);
si1=l14;
si2=15U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
si1=l3;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+128U,si1);
L33:;
si0=l3;
si1=l8;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l12;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L36;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17289044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17289036U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=68719476752ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
si2=l4;
si3=8U;
si2+=si3;
si1=f11875(i,si1,si2);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L13;
L37:;
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l12;
si0|=si1;
l7=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
L38:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
si1=l3;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+128U,si1);
L36:;
si0=l9;
si1=l11;
si0-=si1;
l9=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l8;
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L17;
L20:;
si0=1U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=1U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=l8;
si1=l3;
si0-=si1;
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
si1=l3;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l3;
si2=l7;
f4875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
L39:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
si1=l3;
si0+=si1;
si1=l6;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
f15024(i,si0);
L17:;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=120U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L4;
L16:;
f53(i);
UNREACHABLE;
L15:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
f15024(i,si0);
L4:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5916(i,si0,si1,si2);
l5=si0;
goto L2;
L40:;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4875(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f4895(i,si0,si1,si2,si3);
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

void f4876(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f3977(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=56U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=28U;
si0+=si1;
l6=si0;
si1=l4;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+97U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+52U);
si2=1U;
si1&=si2;
l3=si1;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+111U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l2;
si3=l4;
si4=111U;
si3+=si4;
f5256(i,si0,si1,si2,si3);
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+60U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
f15024(i,si0);
L5:;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
f15024(i,si0);
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L7:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
goto L2;
L3:;
si0=1U;
l2=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4877(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
f3981(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=68U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=68U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+53U);
i32_store16(&i->m0,(U64)si0+109U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=1U;
l3=si0;
si0=1U;
l9=si0;
L12:;
{
si0=l7;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=144U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l7;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L14;
}
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l3;
si0+=si1;
si1=144U;
i32_store8(&i->m0,(U64)si0,si1);
goto L16;
L17:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L19:;
si0=l8;
si1=l3;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
L16:;
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
goto L13;
L15:;
si0=l11;
si1=l6;
si2=17289004U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l10;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l11;
l9=si0;
goto L13;
L21:;
si0=l9;
si1=l6;
si2=17289020U;
f594(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l7;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=1U;
l9=si0;
L22:;
{
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l3;
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L22;
}
}
si0=l11;
l9=si0;
L13:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L12;
}
}
L11:;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L5;
L10:;
si0=0U;
si1=0U;
si2=17288988U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
l3=si0;
goto L2;
L6:;
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si2=68U;
si1+=si2;
f5252(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+108U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
L5:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
goto L3;
L4:;
si0=l4;
si1=68U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+72U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L24:;
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
f15024(i,si0);
L25:;
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f15024(i,si0);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5916(i,si0,si1,si2);
l5=si0;
goto L2;
L26:;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4878(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
f3981(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=68U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=68U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+53U);
i32_store16(&i->m0,(U64)si0+109U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=1U;
l6=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=0U;
l9=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l10=si0;
L10:;
{
si0=l7;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=144U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l8;
si1=l10;
si2=1U;
si1+=si2;
l12=si1;
si2=l8;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si1=-1U;
si0+=si1;
l14=si0;
si0=l10;
si1=255U;
si0+=si1;
l15=si0;
si0=l12;
l3=si0;
L15:;
{
si0=l13;
si1=l3;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l7;
si1=l3;
si0+=si1;
l16=si0;
si0=l5;
l3=si0;
si0=l16;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=l11;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
}
si0=l5;
si1=-2U;
si0+=si1;
l14=si0;
si0=l5;
si1=-1U;
si0+=si1;
l13=si0;
L14:;
si0=l13;
si1=l10;
si0-=si1;
l16=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l9;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
L17:;
si0=l6;
si1=l9;
si0+=si1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
l10=si0;
goto L11;
L13:;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l9;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l16=si0;
si1=l9;
si0+=si1;
si1=144U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l5;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L19:;
si0=l16;
si1=l3;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L6;
L12:;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l9;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l9;
si0+=si1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
L21:;
si0=l6;
si1=l5;
si0+=si1;
si1=144U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l3;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
L22:;
si0=l6;
si1=l9;
si0+=si1;
si1=l16;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0+=si1;
l10=si0;
L11:;
si0=l4;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l8;
si0=si0 < si1;
if(si0){
goto L10;
}
}
L9:;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L6;
L7:;
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si2=68U;
si1+=si2;
f5250(i,si0,si1);
L6:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+108U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
goto L23;
L24:;
si0=l4;
si1=68U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+72U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L25:;
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l3;
f15024(i,si0);
L26:;
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f15024(i,si0);
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L1;
}
si0=0U;
l5=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L4;
L27:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l3=si0;
goto L4;
L5:;
si0=1U;
l5=si0;
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4879(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f3962(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=64U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+41U);
i32_store16(&i->m0,(U64)si0+105U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+44U);
si2=1U;
si1&=si2;
l3=si1;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
f5234(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L4:;
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l3=si0;
si1=l3;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L6:;
si0=l4;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
f15024(i,si0);
L7:;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f15024(i,si0);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L3:;
si0=1U;
l2=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4880(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l2;
f3928(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+112U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=116U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=116U;
si0+=si1;
si1=28U;
si0+=si1;
l6=si0;
si1=l4;
si2=72U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=116U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=116U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=116U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+113U);
i32_store16(&i->m0,(U64)si0+157U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=116U;
si1+=si2;
f5246(i,si0,si1);
si0=l4;
si1=116U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+120U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
f5522(i,si0);
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
f15024(i,si0);
L5:;
si0=l4;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L3:;
si0=1U;
l2=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4881(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l2;
f3977(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+112U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=120U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=28U;
si0+=si1;
l6=si0;
si1=l4;
si2=72U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+113U);
i32_store16(&i->m0,(U64)si0+161U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+116U);
si2=1U;
si1&=si2;
l3=si1;
i32_store8(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+175U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=120U;
si1+=si2;
si2=l2;
si3=l4;
si4=175U;
si3+=si4;
f5256(i,si0,si1,si2,si3);
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+124U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
f5522(i,si0);
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
f15024(i,si0);
L5:;
si0=l4;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
f15024(i,si0);
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L7:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
goto L2;
L3:;
si0=1U;
l2=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4882(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3941(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+120U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=128U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=128U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=128U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=128U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+121U);
i32_store16(&i->m0,(U64)si0+169U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+124U);
l6=si1;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l6;
si2=56U;
si1+=si2;
si1=f8768(i,si1);
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f5257(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
f5522(i,si0);
L3:;
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+132U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
f5522(i,si0);
L4:;
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
f15024(i,si0);
L5:;
si0=l4;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
f15024(i,si0);
L6:;
si0=0U;
l6=si0;
si0=l3;
si1=l2;
si0=f8870(i,si0,si1);
l3=si0;
goto L1;
L2:;
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4883(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f4866(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4884(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f4871(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4885(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f4878(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4886(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f4872(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4887(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3962(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+120U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=144U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+121U);
i32_store16(&i->m0,(U64)si0+185U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+124U);
si2=1U;
si1&=si2;
l3=si1;
i32_store8(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
f5234(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+84U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l3;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
L4:;
si0=l4;
si1=128U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+148U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l3=si0;
si1=l3;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
f5522(i,si0);
L6:;
si0=l4;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
f15024(i,si0);
L7:;
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
f15024(i,si0);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L3:;
si0=1U;
l2=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f4888(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f4868(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4889(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f4873(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4890(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f4877(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4891(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f4874(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4892(rustpythonInstance*i,U32 l0) {
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
f5522(i,si0);
L1:;
L0:;
}

void f4893(rustpythonInstance*i,U32 l0) {
L0:;
}

void f4894(rustpythonInstance*i,U32 l0) {
L0:;
}

void f4895(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f4896(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=4U;
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=2U;
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
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f4897(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
if(si0){
goto L4;
}
si0=1U;
l2=si0;
goto L3;
L4:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l2=si0;
goto L5;
L6:;
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l2=si0;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
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

void f4898(rustpythonInstance*i,U32 l0,U32 l1) {
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
f4895(i,si0,si1,si2,si3);
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

void f4899(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=20U;
si0*=si1;
l4=si0;
si0=l1;
si1=107374183U;
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
si2=20U;
si1*=si2;
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
f4895(i,si0,si1,si2,si3);
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

void f4900(rustpythonInstance*i,U32 l0,U32 l1) {
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
f4895(i,si0,si1,si2,si3);
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

void f4901(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=28U;
si0*=si1;
l4=si0;
si0=l1;
si1=76695845U;
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
si2=28U;
si1*=si2;
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
f4895(i,si0,si1,si2,si3);
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

void f4902(rustpythonInstance*i,U32 l0,U32 l1) {
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
f4895(i,si0,si1,si2,si3);
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

void f4903(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=12U;
si1*=si2;
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
f4895(i,si0,si1,si2,si3);
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

void f4904(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si1=1U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si1=1073741824U;
si0=si0 < si1;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=2U;
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
si1=l6;
si2=l5;
si3=l2;
si4=20U;
si3+=si4;
f4895(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l4;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
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

void f4905(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=24U;
si1*=si2;
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
f4895(i,si0,si1,si2,si3);
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

void f4906(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=536870912U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=2U;
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
f4895(i,si0,si1,si2,si3);
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

void f4907(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
l4=si0;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=l2;
si2=l1;
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
si1=1U;
si0<<=(si1&31);
l5=si0;
si0=l2;
si1=1073741824U;
si0=si0 < si1;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=2U;
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
si1=l6;
si2=l5;
si3=l3;
si4=20U;
si3+=si4;
f4895(i,si0,si1,si2,si3);
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

void f4908(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f4895(i,si0,si1,si2,si3);
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

U32 f4909(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=0ULL;
si2=l5;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l5;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l5=si2;
sj0=si2?sj0:sj1;
si1=l5;
si2=l1;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
l3=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=0ULL;
si2=l5;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l5;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l5=si2;
sj0=si2?sj0:sj1;
si1=l5;
si2=l1;
si0=f717(i,sj0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4910(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l2;
si0=i32_load16_s(&i->m0,(U64)si0);
l5=si0;
sj0=(U64)(si0);
sj1=65535ULL;
sj0&=sj1;
sj1=0ULL;
si2=l5;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l5;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l5=si2;
sj0=si2?sj0:sj1;
si1=l5;
si2=l1;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
l3=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l2;
si0=i32_load16_s(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
si0=l5;
sj0=(U64)(si0);
sj1=65535ULL;
sj0&=sj1;
sj1=0ULL;
si2=l5;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l5;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l5=si2;
sj0=si2?sj0:sj1;
si1=l5;
si2=l1;
si0=f717(i,sj0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4911(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=l5;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l6=sj1;
sj0^=sj1;
sj1=l6;
sj0-=sj1;
sj1=l5;
sj2=-1ULL;
si1=(U64)((I64)sj1>(I64)sj2);
si2=l1;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
l3=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l5;
sj1=l5;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l6=sj1;
sj0^=sj1;
sj1=l6;
sj0-=sj1;
sj1=l5;
sj2=-1ULL;
si1=(U64)((I64)sj1>(I64)sj2);
si2=l1;
si0=f717(i,sj0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4912(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
l3=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l2;
sj0=i64_load32_u(&i->m0,(U64)si0);
l6=sj0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
sj0=l6;
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4913(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
F64 l6=0;
U32 si0,si1,si2,si3,si4;
F64 sd0,sd1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l5=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0);
l6=sd0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
sd1=l6;
si2=l5;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f651(i,si0,sd1,si2,si3);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l1;
sd1=l6;
si2=l5;
si3=0U;
si0=f652(i,si0,sd1,si2,si3);
if(si0){
goto L2;
}
L3:;
si0=0U;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
L5:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l3=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0);
l6=sd0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
sd1=l6;
si2=l3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=f651(i,si0,sd1,si2,si3);
si0=!(si0);
if(si0){
goto L7;
}
si0=1U;
goto L0;
L8:;
si0=l1;
sd1=l6;
si2=l3;
si3=0U;
si0=f652(i,si0,sd1,si2,si3);
si0=!(si0);
if(si0){
goto L7;
}
si0=1U;
goto L0;
L7:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=0U;
l3=si0;
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4914(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
l3=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l6;
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4915(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
l3=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l2;
sj0=i64_load8_u(&i->m0,(U64)si0);
l6=sj0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
sj0=l6;
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4916(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L2:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si0=f3650(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f4917(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
F32 l6=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l5=si0;
si0=l2;
sf0=f32_load(&i->m0,(U64)si0);
l6=sf0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
sf1=l6;
si2=l5;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f649(i,si0,sf1,si2,si3);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l1;
sf1=l6;
si2=l5;
si3=0U;
si0=f653(i,si0,sf1,si2,si3);
if(si0){
goto L2;
}
L3:;
si0=0U;
l3=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
L5:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l3=si0;
si0=l2;
sf0=f32_load(&i->m0,(U64)si0);
l6=sf0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
sf1=l6;
si2=l3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=f649(i,si0,sf1,si2,si3);
si0=!(si0);
if(si0){
goto L7;
}
si0=1U;
goto L0;
L8:;
si0=l1;
sf1=l6;
si2=l3;
si3=0U;
si0=f653(i,si0,sf1,si2,si3);
si0=!(si0);
if(si0){
goto L7;
}
si0=1U;
goto L0;
L7:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=0U;
l3=si0;
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4918(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
sj0=(U64)(si0);
sj1=0ULL;
si2=l5;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l5;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l5=si2;
sj0=si2?sj0:sj1;
si1=l5;
si2=l1;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
l3=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l5;
sj0=(U64)(si0);
sj1=0ULL;
si2=l5;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l5;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l5=si2;
sj0=si2?sj0:sj1;
si1=l5;
si2=l1;
si0=f717(i,sj0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4919(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
L3:;
{
si0=l2;
si1=l4;
si0=si0 != si1;
l3=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l2;
sj0=i64_load16_u(&i->m0,(U64)si0);
l6=sj0;
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
sj0=l6;
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
goto L0;
L1:;
si0=17288380U;
si1=34U;
si2=17288520U;
f4585(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f4920(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L3;
L4:;
si0=l2;
si1=17291467U;
si2=1U;
si0=f13786(i,si0,si1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=100U;
si0+=si1;
si1=l1;
si2=l6;
f9348(i,si0,si1,si2);
si0=l3;
si1=72U;
si0+=si1;
l4=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
l7=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
l8=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
l9=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=2U;
si0+=si1;
l10=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+141U);
i32_store16(&i->m0,(U64)si0+60U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+140U);
l6=si0;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L2;
default:
goto L5;
}
L6:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=l3;
si1=16U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+60U);
i32_store16(&i->m0,(U64)si0+57U,si1);
si0=l3;
si1=l6;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
l4=si0;
si0=l2;
si1=17291468U;
si2=11U;
si0=f13786(i,si0,si1,si2);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=100U;
si0+=si1;
si1=l1;
si2=l2;
f13129(i,si0,si1,si2);
si0=l2;
si1=l2;
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
si0=l2;
f5522(i,si0);
L9:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+100U);
l2=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+101U);
si1=1U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l4=si0;
L8:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
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
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+13U);
i32_store16(&i->m0,(U64)si0+45U,si1);
si0=l0;
si1=47U;
si0+=si1;
si1=l3;
si2=15U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l2=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
goto L1;
L10:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
L11:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
f15024(i,si0);
L12:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
goto L1;
L2:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4921(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L3;
L4:;
si0=l2;
si1=17291479U;
si2=4U;
si0=f13786(i,si0,si1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=100U;
si0+=si1;
si1=l1;
si2=l6;
f9348(i,si0,si1,si2);
si0=l3;
si1=72U;
si0+=si1;
l4=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
l7=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
l8=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
l9=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=2U;
si0+=si1;
l10=si0;
si1=l3;
si2=100U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+141U);
i32_store16(&i->m0,(U64)si0+60U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+140U);
l6=si0;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L2;
default:
goto L5;
}
L6:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=l3;
si1=16U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+60U);
i32_store16(&i->m0,(U64)si0+57U,si1);
si0=l3;
si1=l6;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
l4=si0;
si0=l2;
si1=17291483U;
si2=6U;
si0=f13786(i,si0,si1,si2);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=100U;
si0+=si1;
si1=l1;
si2=l2;
f13129(i,si0,si1,si2);
si0=l2;
si1=l2;
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
si0=l2;
f5522(i,si0);
L9:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+100U);
l2=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+101U);
si1=1U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l4=si0;
L8:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
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
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+13U);
i32_store16(&i->m0,(U64)si0+45U,si1);
si0=l0;
si1=47U;
si0+=si1;
si1=l3;
si2=15U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l2=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
goto L1;
L10:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
L11:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
f15024(i,si0);
L12:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
goto L1;
L2:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4922(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L4;
L5:;
si0=l2;
si1=17291479U;
si2=4U;
si0=f13786(i,si0,si1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l3;
si1=84U;
si0+=si1;
si1=l1;
si2=l6;
f9348(i,si0,si1,si2);
si0=l3;
si1=56U;
si0+=si1;
l4=si0;
si1=l3;
si2=84U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
l7=si0;
si1=l3;
si2=84U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
l8=si0;
si1=l3;
si2=84U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
l9=si0;
si1=l3;
si2=84U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=2U;
si0+=si1;
l10=si0;
si1=l3;
si2=84U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+125U);
i32_store16(&i->m0,(U64)si0+44U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+124U);
l6=si0;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L3;
default:
goto L6;
}
L7:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L6:;
si0=l3;
si1=36U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=43U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+44U);
i32_store16(&i->m0,(U64)si0+41U,si1);
si0=l3;
si1=l6;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l2;
si1=17291489U;
si2=9U;
si0=f13786(i,si0,si1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=84U;
si0+=si1;
si1=l1;
si2=l4;
f13129(i,si0,si1,si2);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
f5522(i,si0);
L14:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+85U);
si1=1U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l7=si0;
L13:;
si0=l2;
si1=17291498U;
si2=6U;
si0=f13786(i,si0,si1,si2);
l4=si0;
if(si0){
goto L11;
}
si0=1U;
l8=si0;
goto L10;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
goto L1;
L15:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L16:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
f15024(i,si0);
L17:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
goto L1;
L11:;
si0=l3;
si1=84U;
si0+=si1;
si1=l1;
si2=l4;
f13129(i,si0,si1,si2);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
f5522(i,si0);
L18:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+85U);
si1=1U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l8=si0;
L10:;
si0=0U;
l4=si0;
si0=l2;
si1=17291483U;
si2=6U;
si0=f13786(i,si0,si1,si2);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=84U;
si0+=si1;
si1=l1;
si2=l2;
f13129(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l2;
f5522(i,si0);
L19:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
l2=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L2;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
goto L1;
L20:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L21:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
f15024(i,si0);
L22:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
goto L1;
L8:;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L23;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+85U);
si1=1U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l4=si0;
goto L2;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
goto L1;
L24:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L25:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
f15024(i,si0);
L26:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
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
si1=l4;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+45U,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+44U,si1);
L1:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

F64 f4923(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
F64 sd0,sd1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l2=si0;
si1=64U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=0U;
f4190(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l2=si0;
si1=64U;
si0=si0 >= si1;
if(si0){
goto L2;
}
L5:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=63U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=0U;
f4190(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l3=si0;
si1=64U;
si0=si0 >= si1;
if(si0){
goto L1;
}
L6:;
si0=l1;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+256U,si1);
goto L3;
L4:;
si0=l1;
si0=f1339(i,si0);
l0=si0;
si0=l1;
si0=f1339(i,si0);
l2=si0;
L3:;
si0=l0;
si1=5U;
si0>>=(si1&31);
sd0=(F64)(si0);
sd1=67108864;
sd0*=sd1;
si1=l2;
si2=6U;
si1>>=(si2&31);
sd1=(F64)(si1);
sd0+=sd1;
sd1=1.1102230246251565e-16;
sd0*=sd1;
goto L0;
L2:;
si0=l2;
si1=64U;
si2=17245840U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=64U;
si2=17245840U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sd0;
}

U32 f4924(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=1048712U;
i32_store(&i->m0,(U64)si0,si1);
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
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si1=17288364U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l1;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l1;
l1=si0;
L4:;
si0=l1;
goto L0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15024(i,si0);
L5:;
si0=l1;
f15024(i,si0);
si0=l2;
goto L0;
L2:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f4925(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l1;
si1=56U;
si0+=si1;
si0=f8768(i,si0);
l2=si0;
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
goto L1;
}
si0=l1;
f5522(i,si0);
L1:;
si0=l0;
sj1=0ULL;
si2=l2;
si0=f5249(i,si0,sj1,si2);
l1=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
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
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L3:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15024(i,si0);
L4:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L5:;
si0=l1;
L0:;
return si0;
}

U32 f4926(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659188U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=18659164U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f4776(i,si0,si1);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659164U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=252U;
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
goto L4;
}
si0=0U;
l5=si0;
si0=l4;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L6:;
si0=18659164U;
si1=l2;
si2=l4;
si3=l5;
si0=f4947(i,si0,si1,si2,si3);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
L7:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l2;
si2=l4;
si3=l0;
f5569(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
si0=f4927(i,si0,si1);
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L5:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=17623824U;
si1=43U;
si2=17624264U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=17623824U;
si1=43U;
si2=17624280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f4927(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l0;
si0=f5563(i,si0,si1);
l3=si0;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659148U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=18659148U;
si1=l0;
f4785(i,si0,si1);
L5:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659152U);
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
goto L2;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=17291412U;
si3=5U;
si1=f3991(i,si1,si2,si3);
si2=l3;
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659156U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=18659156U;
si1=l0;
f4787(i,si0,si1);
L6:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659160U);
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
goto L2;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=17291417U;
si3=10U;
si1=f3991(i,si1,si2,si3);
si2=l3;
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17289052U;
si1=43U;
si2=l2;
si3=12U;
si2+=si3;
si3=17289096U;
si4=17291428U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=17289052U;
si1=43U;
si2=l2;
si3=4U;
si2+=si3;
si3=17289096U;
si4=17289112U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=17289052U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=17289096U;
si4=17291444U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f4928(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=361U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17289128U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17287932U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17289489U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L2:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=532U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17289496U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17287932U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17290028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L3:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=144U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17290035U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17287956U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17290179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L4:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=192U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17290188U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17287956U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17290380U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L5:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=60U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17290387U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17288004U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17290447U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l3;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L6:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=65U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17290452U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17287908U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17290517U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L7:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=220U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17290524U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17288076U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17290744U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si1=l3;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L8:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=79U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17290754U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17288148U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17290833U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=l3;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L9:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=61U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17290843U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17288124U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17290904U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L10:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=283U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17290910U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17288172U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17291193U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si1=l3;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L11:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=23U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17291199U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17288028U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17291222U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si1=l3;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L12:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=25U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17291233U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17288100U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967309ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17291258U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
si1=l2;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L13:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=55U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17291271U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17287980U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17291326U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si1=l4;
f4901(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L14:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l3;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=74U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=17291332U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=17288052U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17291406U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f4929(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}


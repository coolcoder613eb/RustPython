#include "w2c2_base.h"

#include "rustpython.h"

void f3030(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
si1=72U;
si0*=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0+=si1;
si1=-72U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L33;
case 1:
goto L32;
case 2:
goto L31;
case 3:
goto L30;
case 4:
goto L29;
case 5:
goto L28;
case 6:
goto L27;
case 7:
goto L26;
case 8:
goto L25;
case 9:
goto L24;
case 10:
goto L23;
case 11:
goto L22;
case 12:
goto L21;
case 13:
goto L20;
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
goto L33;
}
L33:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
goto L6;
L32:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
goto L6;
L31:;
si0=l4;
si1=68U;
si0+=si1;
l4=si0;
goto L6;
L30:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L6;
L29:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L6;
L28:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L6;
L27:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L6;
L26:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L6;
L25:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L6;
L24:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L6;
L23:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L6;
L22:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L6;
L21:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L6;
L20:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L6;
L19:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L6;
L18:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L6;
L17:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L6;
L16:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L6;
L15:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L6;
L14:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L6;
L13:;
si0=l4;
si1=28U;
si0+=si1;
l4=si0;
goto L6;
L12:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L6;
L11:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L6;
L10:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L6;
L9:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L6;
L8:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L6;
L7:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l4=si0;
si0=l7;
si1=38U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L34:;
si0=l10;
si1=l8;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L37;
case 1:
goto L36;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L35;
default:
goto L1;
}
L37:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L36:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L35:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=1531456U;
si1=43U;
si2=1531876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L42;
case 1:
goto L41;
case 2:
goto L39;
case 3:
goto L39;
case 4:
goto L40;
default:
goto L39;
}
L42:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
goto L38;
L41:;
si0=l4;
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L38;
}
goto L39;
L40:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L38;
}
L39:;
goto L0;
L38:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
si1=72U;
si0*=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0+=si1;
si1=-72U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L33;
case 1:
goto L32;
case 2:
goto L31;
case 3:
goto L30;
case 4:
goto L29;
case 5:
goto L28;
case 6:
goto L27;
case 7:
goto L26;
case 8:
goto L25;
case 9:
goto L24;
case 10:
goto L23;
case 11:
goto L22;
case 12:
goto L21;
case 13:
goto L20;
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
goto L33;
}
L33:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
goto L6;
L32:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
goto L6;
L31:;
si0=l5;
si1=68U;
si0+=si1;
l5=si0;
goto L6;
L30:;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
goto L6;
L29:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
goto L6;
L28:;
si0=l5;
si1=24U;
si0+=si1;
l5=si0;
goto L6;
L27:;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
goto L6;
L26:;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
goto L6;
L25:;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
goto L6;
L24:;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
goto L6;
L23:;
si0=l5;
si1=36U;
si0+=si1;
l5=si0;
goto L6;
L22:;
si0=l5;
si1=36U;
si0+=si1;
l5=si0;
goto L6;
L21:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
goto L6;
L20:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
goto L6;
L19:;
si0=l5;
si1=24U;
si0+=si1;
l5=si0;
goto L6;
L18:;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
goto L6;
L17:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
goto L6;
L16:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
goto L6;
L15:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
goto L6;
L14:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
goto L6;
L13:;
si0=l5;
si1=28U;
si0+=si1;
l5=si0;
goto L6;
L12:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
goto L6;
L11:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
goto L6;
L10:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
goto L6;
L9:;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
goto L6;
L7:;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l8;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L36;
case 1:
goto L35;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L34;
default:
goto L1;
}
L36:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L35:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L34:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=1531456U;
si1=43U;
si2=1531844U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L41;
case 1:
goto L40;
case 2:
goto L37;
case 3:
goto L37;
case 4:
goto L39;
default:
goto L37;
}
L41:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
goto L38;
L40:;
si0=l0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L38;
}
goto L37;
L39:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
L38:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L46;
case 1:
goto L45;
case 2:
goto L43;
case 3:
goto L43;
case 4:
goto L44;
default:
goto L43;
}
L46:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
goto L42;
L45:;
si0=l0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L42;
}
goto L43;
L44:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L42;
}
L43:;
goto L0;
L42:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3032(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U64 l7) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l15=si0;
si0=l6;
if(si0){
goto L10;
}
si0=4U;
l6=si0;
si0=0U;
l16=si0;
goto L9;
L10:;
sj0=l7;
si0=(U32)(sj0);
l16=si0;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l17=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l17;
si1=72U;
si0*=si1;
si1=l6;
si0+=si1;
si1=-72U;
si0+=si1;
l5=si0;
goto L8;
L9:;
si0=l9;
if(si0){
goto L11;
}
si0=0U;
l17=si0;
goto L7;
L11:;
si0=l11;
if(si0){
goto L12;
}
si0=0U;
l17=si0;
goto L7;
L12:;
si0=0U;
l17=si0;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l11;
si0+=si1;
si1=-64U;
si0+=si1;
l5=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=72U;
si0*=si1;
si1=l5;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-72U;
si0+=si1;
l5=si0;
L8:;
si0=l5;
if(si0){
goto L6;
}
L7:;
si0=l12;
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
si0=!(si0);
if(si0){
goto L5;
}
si0=l12;
si1=72U;
si0*=si1;
si1=l14;
si0+=si1;
si1=-72U;
si0+=si1;
l5=si0;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L40;
case 1:
goto L39;
case 2:
goto L38;
case 3:
goto L37;
case 4:
goto L36;
case 5:
goto L35;
case 6:
goto L34;
case 7:
goto L33;
case 8:
goto L32;
case 9:
goto L31;
case 10:
goto L30;
case 11:
goto L29;
case 12:
goto L28;
case 13:
goto L27;
case 14:
goto L26;
case 15:
goto L25;
case 16:
goto L24;
case 17:
goto L23;
case 18:
goto L22;
case 19:
goto L21;
case 20:
goto L20;
case 21:
goto L19;
case 22:
goto L18;
case 23:
goto L17;
case 24:
goto L16;
case 25:
goto L15;
case 26:
goto L14;
default:
goto L40;
}
L40:;
si0=l5;
si1=48U;
si0+=si1;
l4=si0;
goto L13;
L39:;
si0=l5;
si1=48U;
si0+=si1;
l4=si0;
goto L13;
L38:;
si0=l5;
si1=68U;
si0+=si1;
l4=si0;
goto L13;
L37:;
si0=l5;
si1=8U;
si0+=si1;
l4=si0;
goto L13;
L36:;
si0=l5;
si1=20U;
si0+=si1;
l4=si0;
goto L13;
L35:;
si0=l5;
si1=24U;
si0+=si1;
l4=si0;
goto L13;
L34:;
si0=l5;
si1=16U;
si0+=si1;
l4=si0;
goto L13;
L33:;
si0=l5;
si1=16U;
si0+=si1;
l4=si0;
goto L13;
L32:;
si0=l5;
si1=40U;
si0+=si1;
l4=si0;
goto L13;
L31:;
si0=l5;
si1=40U;
si0+=si1;
l4=si0;
goto L13;
L30:;
si0=l5;
si1=36U;
si0+=si1;
l4=si0;
goto L13;
L29:;
si0=l5;
si1=36U;
si0+=si1;
l4=si0;
goto L13;
L28:;
si0=l5;
si1=32U;
si0+=si1;
l4=si0;
goto L13;
L27:;
si0=l5;
si1=32U;
si0+=si1;
l4=si0;
goto L13;
L26:;
si0=l5;
si1=24U;
si0+=si1;
l4=si0;
goto L13;
L25:;
si0=l5;
si1=8U;
si0+=si1;
l4=si0;
goto L13;
L24:;
si0=l5;
si1=56U;
si0+=si1;
l4=si0;
goto L13;
L23:;
si0=l5;
si1=56U;
si0+=si1;
l4=si0;
goto L13;
L22:;
si0=l5;
si1=12U;
si0+=si1;
l4=si0;
goto L13;
L21:;
si0=l5;
si1=20U;
si0+=si1;
l4=si0;
goto L13;
L20:;
si0=l5;
si1=28U;
si0+=si1;
l4=si0;
goto L13;
L19:;
si0=l5;
si1=20U;
si0+=si1;
l4=si0;
goto L13;
L18:;
si0=l5;
si1=20U;
si0+=si1;
l4=si0;
goto L13;
L17:;
si0=l5;
si1=12U;
si0+=si1;
l4=si0;
goto L13;
L16:;
si0=l5;
si1=8U;
si0+=si1;
l4=si0;
goto L13;
L15:;
si0=l5;
si1=8U;
si0+=si1;
l4=si0;
goto L13;
L14:;
si0=l5;
si1=8U;
si0+=si1;
l4=si0;
L13:;
si0=l11;
si1=l9;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l9;
if(si0){
goto L41;
}
si0=l6;
l19=si0;
goto L2;
L41:;
si0=l5;
si1=-64U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=38U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l4;
l5=si0;
si0=l6;
l19=si0;
goto L2;
L42:;
si0=l4;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l8;
si1=56U;
si0+=si1;
l19=si0;
si1=l5;
si2=-64U;
si1+=si2;
l5=si1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=48U;
si0+=si1;
l22=si0;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
l23=si0;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
l24=si0;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l5;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=52U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=36U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=44U;
si0+=si1;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l18;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l19=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l19;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l19;
si1=11U;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l19;
si1=l18;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l19;
si1=l21;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l19;
si1=l17;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l19;
si1=l16;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l19;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l19;
si1=16U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
l21=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l16=si0;
si0=l4;
si1=l11;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=1U;
l17=si0;
goto L1;
L44:;
si0=l9;
si1=6U;
si0<<=(si1&31);
l17=si0;
si0=64U;
l22=si0;
si0=l11;
l6=si0;
L45:;
{
si0=l6;
si1=l17;
si0+=si1;
l4=si0;
si1=-128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si1=38U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l6;
si1=l9;
si2=6U;
si1<<=(si2&31);
si0+=si1;
si1=-128U;
si0+=si1;
l5=si0;
si0=1U;
l17=si0;
si0=1U;
l16=si0;
goto L2;
L46:;
si0=l4;
si1=-80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l8;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l24=si0;
si1=l4;
si2=-124U;
si1+=si2;
l5=si1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l25=si0;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l26=si0;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l27=si0;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l28=si0;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=l4;
si2=-76U;
si1+=si2;
l4=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l18;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=11U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l20;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l19;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-64U;
si0+=si1;
l6=si0;
si0=l5;
l19=si0;
si0=l17;
si1=l22;
si2=64U;
si1+=si2;
l22=si1;
si0=si0 != si1;
if(si0){
goto L45;
}
}
si0=l5;
l19=si0;
si0=1U;
l17=si0;
goto L1;
L43:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1531456U;
si1=43U;
si2=1531748U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l5;
si1=l11;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l11;
si0-=si1;
si1=6U;
si0>>=(si1&31);
l21=si0;
si0=0U;
l6=si0;
L47:;
{
si0=l11;
si1=l6;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
f3500(i,si0);
si0=l5;
si1=52U;
si0+=si1;
l20=si0;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
L49:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l20;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L50:;
si0=l6;
si1=l21;
si0=si0 != si1;
if(si0){
goto L47;
}
}
L1:;
si0=l10;
si0=!(si0);
if(si0){
goto L51;
}
si0=l11;
f15271(i,si0);
L51:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=11U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L58;
case 1:
goto L57;
case 2:
goto L52;
case 3:
goto L52;
case 4:
goto L56;
default:
goto L52;
}
L58:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
goto L53;
L57:;
si0=l4;
si0=!(si0);
if(si0){
goto L52;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L53;
}
goto L52;
L56:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L53;
}
goto L52;
L54:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L53:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L52:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L63;
case 1:
goto L62;
case 2:
goto L59;
case 3:
goto L59;
case 4:
goto L61;
default:
goto L59;
}
L63:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
goto L60;
L62:;
si0=l4;
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L60;
}
goto L59;
L61:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
L60:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L59:;
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3033(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=36U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=44U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L5:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=64U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L6;
default:
goto L1;
}
L8:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=1531456U;
si1=43U;
si2=1531704U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L9;
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L10;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
L10:;
goto L0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3034(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=72U;
si0*=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0+=si1;
si1=-72U;
si0+=si1;
si1=0U;
si2=l8;
si0=si2?si0:si1;
l10=si0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l11;
si1=72U;
si0*=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+56U);
si0+=si1;
si1=-72U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L34;
case 1:
goto L33;
case 2:
goto L32;
case 3:
goto L31;
case 4:
goto L30;
case 5:
goto L29;
case 6:
goto L28;
case 7:
goto L27;
case 8:
goto L26;
case 9:
goto L25;
case 10:
goto L24;
case 11:
goto L23;
case 12:
goto L22;
case 13:
goto L21;
case 14:
goto L20;
case 15:
goto L19;
case 16:
goto L18;
case 17:
goto L17;
case 18:
goto L16;
case 19:
goto L15;
case 20:
goto L14;
case 21:
goto L13;
case 22:
goto L12;
case 23:
goto L11;
case 24:
goto L10;
case 25:
goto L9;
case 26:
goto L8;
default:
goto L34;
}
L34:;
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
goto L7;
L33:;
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
goto L7;
L32:;
si0=l6;
si1=68U;
si0+=si1;
l6=si0;
goto L7;
L31:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L7;
L30:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L7;
L29:;
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
goto L7;
L28:;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
goto L7;
L27:;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
goto L7;
L26:;
si0=l6;
si1=40U;
si0+=si1;
l6=si0;
goto L7;
L25:;
si0=l6;
si1=40U;
si0+=si1;
l6=si0;
goto L7;
L24:;
si0=l6;
si1=36U;
si0+=si1;
l6=si0;
goto L7;
L23:;
si0=l6;
si1=36U;
si0+=si1;
l6=si0;
goto L7;
L22:;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
goto L7;
L21:;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
goto L7;
L20:;
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
goto L7;
L19:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L7;
L18:;
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
goto L7;
L17:;
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
goto L7;
L16:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
goto L7;
L15:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L7;
L14:;
si0=l6;
si1=28U;
si0+=si1;
l6=si0;
goto L7;
L13:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L7;
L12:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L7;
L11:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
goto L7;
L10:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L7;
L9:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L7;
L8:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=14U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L37;
case 1:
goto L36;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L35;
default:
goto L1;
}
L37:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L36:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L35:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=1531456U;
si1=43U;
si2=1531608U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1531456U;
si1=43U;
si2=1531624U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L42;
case 1:
goto L41;
case 2:
goto L38;
case 3:
goto L38;
case 4:
goto L40;
default:
goto L38;
}
L42:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
goto L39;
L41:;
si0=l0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L39;
}
goto L38;
L40:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
L39:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L38:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L47;
case 1:
goto L46;
case 2:
goto L43;
case 3:
goto L43;
case 4:
goto L45;
default:
goto L43;
}
L47:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
goto L44;
L46:;
si0=l0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L44;
}
goto L43;
L45:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
L44:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L52;
case 1:
goto L51;
case 2:
goto L48;
case 3:
goto L48;
case 4:
goto L50;
default:
goto L48;
}
L52:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
goto L49;
L51:;
si0=l0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L49;
}
goto L48;
L50:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
L49:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L57;
case 1:
goto L56;
case 2:
goto L54;
case 3:
goto L54;
case 4:
goto L55;
default:
goto L54;
}
L57:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
goto L53;
L56:;
si0=l0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L53;
}
goto L54;
L55:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L53;
}
L54:;
goto L0;
L53:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3035(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si1=72U;
si0*=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0+=si1;
si1=-72U;
si0+=si1;
si1=0U;
si2=l9;
si0=si2?si0:si1;
l11=si0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l14=si0;
si0=l12;
si1=72U;
si0*=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+56U);
si0+=si1;
si1=-72U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L34;
case 1:
goto L33;
case 2:
goto L32;
case 3:
goto L31;
case 4:
goto L30;
case 5:
goto L29;
case 6:
goto L28;
case 7:
goto L27;
case 8:
goto L26;
case 9:
goto L25;
case 10:
goto L24;
case 11:
goto L23;
case 12:
goto L22;
case 13:
goto L21;
case 14:
goto L20;
case 15:
goto L19;
case 16:
goto L18;
case 17:
goto L17;
case 18:
goto L16;
case 19:
goto L15;
case 20:
goto L14;
case 21:
goto L13;
case 22:
goto L12;
case 23:
goto L11;
case 24:
goto L10;
case 25:
goto L9;
case 26:
goto L8;
default:
goto L34;
}
L34:;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
goto L7;
L33:;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
goto L7;
L32:;
si0=l7;
si1=68U;
si0+=si1;
l7=si0;
goto L7;
L31:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L7;
L30:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L7;
L29:;
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
goto L7;
L28:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
goto L7;
L27:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
goto L7;
L26:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
goto L7;
L25:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
goto L7;
L24:;
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
goto L7;
L23:;
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
goto L7;
L22:;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
goto L7;
L21:;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
goto L7;
L20:;
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
goto L7;
L19:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L7;
L18:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
goto L7;
L17:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
goto L7;
L16:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
goto L7;
L15:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L7;
L14:;
si0=l7;
si1=28U;
si0+=si1;
l7=si0;
goto L7;
L13:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L7;
L12:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L7;
L11:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
goto L7;
L10:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L7;
L9:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L7;
L8:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
L7:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l14;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=14U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L37;
case 1:
goto L36;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L35;
default:
goto L1;
}
L37:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L36:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L35:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=1531456U;
si1=43U;
si2=1531640U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1531456U;
si1=43U;
si2=1531656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L42;
case 1:
goto L41;
case 2:
goto L38;
case 3:
goto L38;
case 4:
goto L40;
default:
goto L38;
}
L42:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
goto L39;
L41:;
si0=l0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L39;
}
goto L38;
L40:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
L39:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L38:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L47;
case 1:
goto L46;
case 2:
goto L43;
case 3:
goto L43;
case 4:
goto L45;
default:
goto L43;
}
L47:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
goto L44;
L46:;
si0=l0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L44;
}
goto L43;
L45:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
L44:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L43:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L52;
case 1:
goto L51;
case 2:
goto L48;
case 3:
goto L48;
case 4:
goto L50;
default:
goto L48;
}
L52:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
goto L49;
L51:;
si0=l0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L49;
}
goto L48;
L50:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
L49:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L48:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L57;
case 1:
goto L56;
case 2:
goto L53;
case 3:
goto L53;
case 4:
goto L55;
default:
goto L53;
}
L57:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
goto L54;
L56:;
si0=l0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L54;
}
goto L53;
L55:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
L54:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L53:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L62;
case 1:
goto L61;
case 2:
goto L59;
case 3:
goto L59;
case 4:
goto L60;
default:
goto L59;
}
L62:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
goto L58;
L61:;
si0=l0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L58;
}
goto L59;
L60:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L58;
}
L59:;
goto L0;
L58:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3036(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
if(si0){
goto L9;
}
si0=0U;
l3=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L6;
L12:;
si0=l0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L10;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L10:;
goto L0;
L7:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3037(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L8;
default:
goto L7;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L7:;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3038(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L9;
}
si0=0U;
l4=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L6;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L10;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L10:;
goto L0;
L7:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3039(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L8;
default:
goto L7;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L7:;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3040(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
si2=l1;
si3=l3;
si4=8U;
si3+=si4;
si4=l3;
si5=56U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3041(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l2;
si2=80U;
si1+=si2;
si2=l1;
si3=l2;
si4=8U;
si3+=si4;
si4=l2;
si5=56U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3042(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l0;
si1=l4;
si2=80U;
si1+=si2;
si2=l1;
si3=l4;
si4=8U;
si3+=si4;
si4=l4;
si5=56U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3043(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
si2=l1;
si3=l3;
si4=8U;
si3+=si4;
si4=l3;
si5=56U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3044(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=48U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=38U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=44U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L5:;
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=15U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L7;
default:
goto L6;
}
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L1;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L6;
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L6:;
goto L0;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3045(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U32 l7,U64 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
sj0=l6;
sj1=0ULL;
si2=l5;
sj0=si2?sj0:sj1;
l6=sj0;
si0=l7;
si1=4U;
si2=l7;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=4U;
si2=l5;
si0=si2?si0:si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si2=l7;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=72U;
si0*=si1;
si1=l9;
si0+=si1;
si1=-72U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L2;
case 1:
goto L29;
case 2:
goto L28;
case 3:
goto L27;
case 4:
goto L26;
case 5:
goto L25;
case 6:
goto L24;
case 7:
goto L23;
case 8:
goto L22;
case 9:
goto L21;
case 10:
goto L20;
case 11:
goto L19;
case 12:
goto L18;
case 13:
goto L17;
case 14:
goto L16;
case 15:
goto L15;
case 16:
goto L14;
case 17:
goto L13;
case 18:
goto L12;
case 19:
goto L11;
case 20:
goto L10;
case 21:
goto L9;
case 22:
goto L8;
case 23:
goto L7;
case 24:
goto L6;
case 25:
goto L5;
case 26:
goto L4;
default:
goto L2;
}
L29:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
goto L1;
L28:;
si0=l14;
si1=68U;
si0+=si1;
l14=si0;
goto L1;
L27:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L26:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L25:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L24:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L23:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L22:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L21:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L20:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L19:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L18:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L17:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L16:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L15:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L14:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L13:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L12:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L11:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L10:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L9:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L8:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L7:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L6:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L5:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L4:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L3:;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l14=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l14;
si1=72U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-72U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L57;
case 1:
goto L56;
case 2:
goto L55;
case 3:
goto L54;
case 4:
goto L53;
case 5:
goto L52;
case 6:
goto L51;
case 7:
goto L50;
case 8:
goto L49;
case 9:
goto L48;
case 10:
goto L47;
case 11:
goto L46;
case 12:
goto L45;
case 13:
goto L44;
case 14:
goto L43;
case 15:
goto L42;
case 16:
goto L41;
case 17:
goto L40;
case 18:
goto L39;
case 19:
goto L38;
case 20:
goto L37;
case 21:
goto L36;
case 22:
goto L35;
case 23:
goto L34;
case 24:
goto L33;
case 25:
goto L32;
case 26:
goto L31;
default:
goto L57;
}
L57:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
goto L1;
L56:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
goto L1;
L55:;
si0=l14;
si1=68U;
si0+=si1;
l14=si0;
goto L1;
L54:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L53:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L52:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L51:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L50:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L49:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L48:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L47:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L46:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L45:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L44:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L43:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L42:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L41:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L40:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L39:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L38:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L37:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L36:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L35:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L34:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L33:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L32:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L31:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L30:;
si0=l11;
si0=!(si0);
if(si0){
goto L58;
}
si0=l13;
si0=!(si0);
if(si0){
goto L58;
}
si0=l11;
si1=36U;
si0*=si1;
si1=l13;
si0+=si1;
si1=-20U;
si0+=si1;
l14=si0;
goto L1;
L58:;
si0=1531456U;
si1=43U;
si2=1531796U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
L1:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L61;
}
si0=l0;
si1=16U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l8;
si1=(U32)(sj1);
si2=0U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L64;
case 1:
goto L63;
case 2:
goto L59;
case 3:
goto L59;
case 4:
goto L62;
default:
goto L59;
}
L64:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
goto L60;
L63:;
si0=l7;
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L60;
}
goto L59;
L62:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L60;
}
goto L59;
L61:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L59:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L69;
case 1:
goto L68;
case 2:
goto L66;
case 3:
goto L66;
case 4:
goto L67;
default:
goto L66;
}
L69:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
goto L65;
L68:;
si0=l7;
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L65;
}
goto L66;
L67:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L65;
}
L66:;
goto L0;
L65:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3046(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U32 l7,U64 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
sj0=l6;
sj1=0ULL;
si2=l5;
sj0=si2?sj0:sj1;
l6=sj0;
si0=l7;
si1=4U;
si2=l7;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=4U;
si2=l5;
si0=si2?si0:si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si2=l7;
si0=si2?si0:si1;
l4=si0;
if(si0){
goto L4;
}
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l14=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l14;
si1=72U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-72U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L2;
case 1:
goto L30;
case 2:
goto L29;
case 3:
goto L28;
case 4:
goto L27;
case 5:
goto L26;
case 6:
goto L25;
case 7:
goto L24;
case 8:
goto L23;
case 9:
goto L22;
case 10:
goto L21;
case 11:
goto L20;
case 12:
goto L19;
case 13:
goto L18;
case 14:
goto L17;
case 15:
goto L16;
case 16:
goto L15;
case 17:
goto L14;
case 18:
goto L13;
case 19:
goto L12;
case 20:
goto L11;
case 21:
goto L10;
case 22:
goto L9;
case 23:
goto L8;
case 24:
goto L7;
case 25:
goto L6;
case 26:
goto L5;
default:
goto L2;
}
L30:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
goto L1;
L29:;
si0=l14;
si1=68U;
si0+=si1;
l14=si0;
goto L1;
L28:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L27:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L26:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L25:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L24:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L23:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L22:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L21:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L20:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L19:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L18:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L17:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L16:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L15:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L14:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L13:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L12:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L11:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L10:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L9:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L8:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L7:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L6:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L5:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L4:;
si0=l4;
si1=72U;
si0*=si1;
si1=l9;
si0+=si1;
si1=-72U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L57;
case 1:
goto L56;
case 2:
goto L55;
case 3:
goto L54;
case 4:
goto L53;
case 5:
goto L52;
case 6:
goto L51;
case 7:
goto L50;
case 8:
goto L49;
case 9:
goto L48;
case 10:
goto L47;
case 11:
goto L46;
case 12:
goto L45;
case 13:
goto L44;
case 14:
goto L43;
case 15:
goto L42;
case 16:
goto L41;
case 17:
goto L40;
case 18:
goto L39;
case 19:
goto L38;
case 20:
goto L37;
case 21:
goto L36;
case 22:
goto L35;
case 23:
goto L34;
case 24:
goto L33;
case 25:
goto L32;
case 26:
goto L31;
default:
goto L57;
}
L57:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
goto L1;
L56:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
goto L1;
L55:;
si0=l14;
si1=68U;
si0+=si1;
l14=si0;
goto L1;
L54:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L53:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L52:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L51:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L50:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L49:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L48:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L47:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L46:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L45:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L44:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L43:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L42:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L41:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L40:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L39:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L38:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L37:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L36:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L35:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L34:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L33:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L32:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L31:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L3:;
si0=l11;
si0=!(si0);
if(si0){
goto L58;
}
si0=l13;
si0=!(si0);
if(si0){
goto L58;
}
si0=l11;
si1=36U;
si0*=si1;
si1=l13;
si0+=si1;
si1=-20U;
si0+=si1;
l14=si0;
goto L1;
L58:;
si0=1531456U;
si1=43U;
si2=1531812U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
L1:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L61;
}
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l8;
si1=(U32)(sj1);
si2=0U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L64;
case 1:
goto L63;
case 2:
goto L59;
case 3:
goto L59;
case 4:
goto L62;
default:
goto L59;
}
L64:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
goto L60;
L63:;
si0=l7;
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L60;
}
goto L59;
L62:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L60;
}
goto L59;
L61:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L59:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L69;
case 1:
goto L68;
case 2:
goto L66;
case 3:
goto L66;
case 4:
goto L67;
default:
goto L66;
}
L69:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
goto L65;
L68:;
si0=l7;
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L65;
}
goto L66;
L67:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L65;
}
L66:;
goto L0;
L65:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3047(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
if(si0){
goto L8;
}
si0=4U;
l5=si0;
si0=0U;
l11=si0;
goto L7;
L8:;
sj0=l6;
si0=(U32)(sj0);
l11=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l12=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l12;
si1=72U;
si0*=si1;
si1=l5;
si0+=si1;
si1=-72U;
si0+=si1;
l4=si0;
goto L6;
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=72U;
si0*=si1;
si1=l9;
si0+=si1;
si1=-72U;
si0+=si1;
l4=si0;
si0=0U;
l12=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L36;
case 1:
goto L35;
case 2:
goto L34;
case 3:
goto L33;
case 4:
goto L32;
case 5:
goto L31;
case 6:
goto L30;
case 7:
goto L29;
case 8:
goto L28;
case 9:
goto L27;
case 10:
goto L26;
case 11:
goto L25;
case 12:
goto L24;
case 13:
goto L23;
case 14:
goto L22;
case 15:
goto L21;
case 16:
goto L20;
case 17:
goto L19;
case 18:
goto L18;
case 19:
goto L17;
case 20:
goto L16;
case 21:
goto L15;
case 22:
goto L14;
case 23:
goto L13;
case 24:
goto L12;
case 25:
goto L11;
case 26:
goto L10;
default:
goto L36;
}
L36:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
goto L9;
L35:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
goto L9;
L34:;
si0=l4;
si1=68U;
si0+=si1;
l4=si0;
goto L9;
L33:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L9;
L32:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L9;
L31:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L9;
L30:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L9;
L29:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L9;
L28:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L9;
L27:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L9;
L26:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L9;
L25:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L9;
L24:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L9;
L23:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L9;
L22:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L9;
L21:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L9;
L20:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L9;
L19:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L9;
L18:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L9;
L17:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L9;
L16:;
si0=l4;
si1=28U;
si0+=si1;
l4=si0;
goto L9;
L15:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L9;
L14:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L9;
L13:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L9;
L12:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L9;
L11:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L9;
L10:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=48U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l10;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L37;
default:
goto L1;
}
L39:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L38:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L37:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=1531456U;
si1=43U;
si2=1531764U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L44;
case 1:
goto L43;
case 2:
goto L41;
case 3:
goto L41;
case 4:
goto L42;
default:
goto L41;
}
L44:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
goto L40;
L43:;
si0=l4;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L40;
}
goto L41;
L42:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L40;
}
L41:;
goto L0;
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3048(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l3;
f15271(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3049(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15271(i,si0);
L11:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3050(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l6;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3051(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15271(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3052(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=100U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=108U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l6=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l2;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l6;
f15271(i,si0);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3053(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si2=l2;
si3=l3;
si4=72U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l8;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l9;
f15271(i,si0);
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3054(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=100U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=108U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=144U;
si1+=si2;
si2=l2;
si3=l5;
si4=72U;
si3+=si4;
si4=l5;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l2;
f15271(i,si0);
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3055(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l2;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l9;
f15271(i,si0);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3056(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l3;
f15271(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3057(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15271(i,si0);
L11:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l6;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3059(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15271(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3060(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=148U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l6=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=l2;
si3=l4;
si4=120U;
si3+=si4;
si4=l4;
si5=168U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l6;
f15271(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3061(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=192U;
si1+=si2;
si2=l2;
si3=l3;
si4=120U;
si3+=si4;
si4=l3;
si5=168U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l3;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l3;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l7;
f15271(i,si0);
L2:;
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3062(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=120U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=148U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=156U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l5;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l5;
si2=192U;
si1+=si2;
si2=l2;
si3=l5;
si4=120U;
si3+=si4;
si4=l5;
si5=168U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l2;
f15271(i,si0);
L2:;
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3063(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=l2;
si3=l4;
si4=120U;
si3+=si4;
si4=l4;
si5=168U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l7;
f15271(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3064(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
if(si0){
goto L9;
}
si0=0U;
l3=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L6;
L12:;
si0=l0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L10;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L10:;
goto L0;
L7:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3065(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l3;
if(si0){
goto L9;
}
si0=0U;
l4=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L6;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L10;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L10:;
goto L0;
L7:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3066(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L8;
default:
goto L7;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L7:;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3067(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l4=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
si2=l1;
si3=l3;
si4=8U;
si3+=si4;
si4=l3;
si5=56U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3068(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l3=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l2;
si2=80U;
si1+=si2;
si2=l1;
si3=l2;
si4=8U;
si3+=si4;
si4=l2;
si5=56U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3069(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l4;
si2=80U;
si1+=si2;
si2=l1;
si3=l4;
si4=8U;
si3+=si4;
si4=l4;
si5=56U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3070(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
si2=l1;
si3=l3;
si4=8U;
si3+=si4;
si4=l3;
si5=56U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3071(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l3;
f15271(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3072(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3073(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15271(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3074(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=100U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=108U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l2;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l5;
f15271(i,si0);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3075(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si2=l2;
si3=l3;
si4=72U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l8;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l9;
f15271(i,si0);
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3076(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=100U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=108U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l5;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=144U;
si1+=si2;
si2=l2;
si3=l5;
si4=72U;
si3+=si4;
si4=l5;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l8;
f15271(i,si0);
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3077(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l2;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l5;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l9;
f15271(i,si0);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3078(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l3;
f15271(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3079(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3080(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15271(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3081(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=148U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=l2;
si3=l4;
si4=120U;
si3+=si4;
si4=l4;
si5=168U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l5;
f15271(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3082(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=192U;
si1+=si2;
si2=l2;
si3=l3;
si4=120U;
si3+=si4;
si4=l3;
si5=168U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l3;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l3;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l7;
f15271(i,si0);
L2:;
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3083(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=120U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=148U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=156U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l5;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=l5;
si2=192U;
si1+=si2;
si2=l2;
si3=l5;
si4=120U;
si3+=si4;
si4=l5;
si5=168U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l6;
f15271(i,si0);
L2:;
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3084(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=l2;
si3=l4;
si4=120U;
si3+=si4;
si4=l4;
si5=168U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l5;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l7;
f15271(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3085(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj6;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l7;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
sj6=i64_load(&i->m0,(U64)si6+4U);
f3047(i,si0,si1,si2,si3,si4,si5,sj6);
L0:;
}

void f3086(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l10=si0;
si1=1U;
si2=l10;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l7;
si1=72U;
si0*=si1;
si1=l6;
si0+=si1;
si1=-72U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L42;
case 1:
goto L41;
case 2:
goto L40;
case 3:
goto L39;
case 4:
goto L38;
case 5:
goto L37;
case 6:
goto L36;
case 7:
goto L35;
case 8:
goto L34;
case 9:
goto L33;
case 10:
goto L32;
case 11:
goto L31;
case 12:
goto L30;
case 13:
goto L29;
case 14:
goto L28;
case 15:
goto L27;
case 16:
goto L26;
case 17:
goto L25;
case 18:
goto L24;
case 19:
goto L23;
case 20:
goto L22;
case 21:
goto L21;
case 22:
goto L20;
case 23:
goto L19;
case 24:
goto L18;
case 25:
goto L17;
case 26:
goto L16;
default:
goto L42;
}
L42:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
goto L15;
L41:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
goto L15;
L40:;
si0=l4;
si1=68U;
si0+=si1;
l4=si0;
goto L15;
L39:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L15;
L38:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L15;
L37:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L15;
L36:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L15;
L35:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L15;
L34:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L15;
L33:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L15;
L32:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L15;
L31:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L15;
L30:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L15;
L29:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L15;
L28:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L15;
L27:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L15;
L26:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L15;
L25:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L15;
L24:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L15;
L23:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L15;
L22:;
si0=l4;
si1=28U;
si0+=si1;
l4=si0;
goto L15;
L21:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L15;
L20:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L15;
L19:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L15;
L18:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L15;
L17:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L15;
L16:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l0;
si1=16U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L45;
case 1:
goto L44;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L43;
default:
goto L11;
}
L45:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L44:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L43:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L14:;
si0=1531456U;
si1=43U;
si2=1531828U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L50;
case 1:
goto L49;
case 2:
goto L47;
case 3:
goto L47;
case 4:
goto L48;
default:
goto L47;
}
L50:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
goto L46;
L49:;
si0=l6;
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L46;
}
goto L47;
L48:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L46;
}
L47:;
goto L0;
L46:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3087(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l1=si0;
if(si0){
goto L11;
}
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=60U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3088(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l6;
si1=8U;
si0+=si1;
l9=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
si1=l4;
f3342(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=60U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l4;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3089(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1,sj7;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l10=si0;
si1=1U;
si2=l10;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l8;
si6=8U;
si5+=si6;
si6=l7;
si6=i32_load(&i->m0,(U64)si6);
si7=l7;
sj7=i64_load(&i->m0,(U64)si7+4U);
f3032(i,si0,si1,si2,si3,si4,si5,si6,sj7);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3090(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1,sj7;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l9;
si6=8U;
si5+=si6;
si6=l8;
si6=i32_load(&i->m0,(U64)si6);
si7=l8;
sj7=i64_load(&i->m0,(U64)si7+4U);
f3032(i,si0,si1,si2,si3,si4,si5,si6,sj7);
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3091(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l9=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si1=16U;
si0+=si1;
f3504(i,si0);
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
sj0=l10;
si0=(U32)(sj0);
l1=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
f3349(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L1:;
si0=l1;
si1=l3;
si2=72U;
si1*=si2;
si0+=si1;
si1=l2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l9;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l8;
si1=98U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l8;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l7;
f15271(i,si0);
L8:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3092(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=72U;
si0*=si1;
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l2;
si0-=si1;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l6;
si1=l2;
si2=l10;
f3353(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l2;
si2=72U;
si1*=si2;
si0+=si1;
si1=l4;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l2;
si2=l10;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=16U;
si0+=si1;
f3504(i,si0);
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=l1;
f3349(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L2:;
si0=l11;
si1=l4;
si2=72U;
si1*=si2;
si0+=si1;
si1=l3;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=8U;
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l9;
si1=98U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l9;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l8;
f15271(i,si0);
L8:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3093(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
l5=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
f3504(i,si0);
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
sj0=l7;
si0=(U32)(sj0);
l1=si0;
goto L1;
L2:;
si0=l4;
si1=l6;
f3349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L1:;
si0=l1;
si1=l6;
si2=72U;
si1*=si2;
si0+=si1;
si1=l2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3094(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=72U;
si0*=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l8;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si1=l8;
si2=l6;
f3353(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l8;
si2=72U;
si1*=si2;
si0+=si1;
si1=l2;
si2=l9;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l8;
si2=l6;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=16U;
si0+=si1;
f3504(i,si0);
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=l1;
f3349(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L2:;
si0=l7;
si1=l2;
si2=72U;
si1*=si2;
si0+=si1;
si1=l3;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3095(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
l2=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
f3349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=72U;
si1*=si2;
si0+=si1;
si1=l1;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l7;
si1=98U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
f15271(i,si0);
L6:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3096(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l7;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
si1=l7;
f3349(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=72U;
si1*=si2;
si0+=si1;
si1=l2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L4;
default:
goto L2;
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L2:;
si0=l3;
si1=98U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L9;
default:
goto L7;
}
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
L9:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l8;
f15271(i,si0);
L7:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3097(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=40U;
si0+=si1;
l8=si0;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
l9=si0;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
l10=si0;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
l11=si0;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l12=si0;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=56U;
si0+=si1;
l13=si0;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l7;
si1=64U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l7;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l3;
si1=72U;
si0*=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0+=si1;
si1=-72U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L38;
case 1:
goto L37;
case 2:
goto L36;
case 3:
goto L35;
case 4:
goto L34;
case 5:
goto L33;
case 6:
goto L32;
case 7:
goto L31;
case 8:
goto L30;
case 9:
goto L29;
case 10:
goto L28;
case 11:
goto L27;
case 12:
goto L26;
case 13:
goto L25;
case 14:
goto L24;
case 15:
goto L23;
case 16:
goto L22;
case 17:
goto L21;
case 18:
goto L20;
case 19:
goto L19;
case 20:
goto L18;
case 21:
goto L17;
case 22:
goto L16;
case 23:
goto L15;
case 24:
goto L14;
case 25:
goto L13;
case 26:
goto L12;
default:
goto L38;
}
L38:;
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
goto L11;
L37:;
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
goto L11;
L36:;
si0=l6;
si1=68U;
si0+=si1;
l6=si0;
goto L11;
L35:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L11;
L34:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L11;
L33:;
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
goto L11;
L32:;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
goto L11;
L31:;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
goto L11;
L30:;
si0=l6;
si1=40U;
si0+=si1;
l6=si0;
goto L11;
L29:;
si0=l6;
si1=40U;
si0+=si1;
l6=si0;
goto L11;
L28:;
si0=l6;
si1=36U;
si0+=si1;
l6=si0;
goto L11;
L27:;
si0=l6;
si1=36U;
si0+=si1;
l6=si0;
goto L11;
L26:;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
goto L11;
L25:;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
goto L11;
L24:;
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
goto L11;
L23:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L11;
L22:;
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
goto L11;
L21:;
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
goto L11;
L20:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
goto L11;
L19:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L11;
L18:;
si0=l6;
si1=28U;
si0+=si1;
l6=si0;
goto L11;
L17:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L11;
L16:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L11;
L15:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
goto L11;
L14:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L11;
L13:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L11;
L12:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l7;
si2=120U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L41;
case 1:
goto L40;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L39;
default:
goto L6;
}
L41:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L40:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L39:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L10:;
si0=1531456U;
si1=43U;
si2=1531892U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L46;
case 1:
goto L45;
case 2:
goto L42;
case 3:
goto L42;
case 4:
goto L44;
default:
goto L42;
}
L46:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
goto L43;
L45:;
si0=l0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L43;
}
goto L42;
L44:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
L43:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L42:;
si0=l7;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3098(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=40U;
si0+=si1;
l9=si0;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
l11=si0;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
l12=si0;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l13=si0;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=56U;
si0+=si1;
l14=si0;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l15;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l8;
si1=64U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l8;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l4;
si1=72U;
si0*=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0+=si1;
si1=-72U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L38;
case 1:
goto L37;
case 2:
goto L36;
case 3:
goto L35;
case 4:
goto L34;
case 5:
goto L33;
case 6:
goto L32;
case 7:
goto L31;
case 8:
goto L30;
case 9:
goto L29;
case 10:
goto L28;
case 11:
goto L27;
case 12:
goto L26;
case 13:
goto L25;
case 14:
goto L24;
case 15:
goto L23;
case 16:
goto L22;
case 17:
goto L21;
case 18:
goto L20;
case 19:
goto L19;
case 20:
goto L18;
case 21:
goto L17;
case 22:
goto L16;
case 23:
goto L15;
case 24:
goto L14;
case 25:
goto L13;
case 26:
goto L12;
default:
goto L38;
}
L38:;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
goto L11;
L37:;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
goto L11;
L36:;
si0=l7;
si1=68U;
si0+=si1;
l7=si0;
goto L11;
L35:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L11;
L34:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L11;
L33:;
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
goto L11;
L32:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
goto L11;
L31:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
goto L11;
L30:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
goto L11;
L29:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
goto L11;
L28:;
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
goto L11;
L27:;
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
goto L11;
L26:;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
goto L11;
L25:;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
goto L11;
L24:;
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
goto L11;
L23:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L11;
L22:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
goto L11;
L21:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
goto L11;
L20:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
goto L11;
L19:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L11;
L18:;
si0=l7;
si1=28U;
si0+=si1;
l7=si0;
goto L11;
L17:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L11;
L16:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L11;
L15:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
goto L11;
L14:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L11;
L12:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
L11:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L41;
case 1:
goto L40;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L39;
default:
goto L6;
}
L41:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L40:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L39:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L10:;
si0=1531456U;
si1=43U;
si2=1531860U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L46;
case 1:
goto L45;
case 2:
goto L42;
case 3:
goto L42;
case 4:
goto L44;
default:
goto L42;
}
L46:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
goto L43;
L45:;
si0=l0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L43;
}
goto L42;
L44:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
L43:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L42:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L51;
case 1:
goto L50;
case 2:
goto L47;
case 3:
goto L47;
case 4:
goto L49;
default:
goto L47;
}
L51:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
goto L48;
L50:;
si0=l0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L48;
}
goto L47;
L49:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L47:;
si0=l8;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3099(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=11U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L5:;
goto L0;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3100(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L11;
}
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L8;
default:
goto L1;
}
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=26U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
sj1=64424509444ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1531744U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1531736U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1531728U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1531720U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
sj1=111669149722ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
f15271(i,si0);
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L14;
default:
goto L2;
}
L16:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L15:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L14:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L4;
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L1;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L1;
L7:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1U;
si1=26U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L2:;
si0=l4;
si1=8U;
si0+=si1;
f3008(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3101(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=19U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3102(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l12=si0;
si1=1U;
si2=l12;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l7;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l3=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l7;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l7;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=l7;
si4=l4;
si5=l7;
si6=24U;
si5+=si6;
si6=l7;
si7=48U;
si6+=si7;
si7=l6;
si8=l8;
f3026(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l7;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3103(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l8;
si2=l1;
si3=l5;
si4=l2;
si5=l5;
si6=24U;
si5+=si6;
si6=l5;
si7=48U;
si6+=si7;
si7=l4;
si8=l6;
f3026(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3104(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l13=si0;
si1=1U;
si2=l13;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l8;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l8;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=l3;
si2=l1;
si3=l8;
si4=l4;
si5=l8;
si6=24U;
si5+=si6;
si6=l8;
si7=48U;
si6+=si7;
si7=l7;
si8=l9;
f3026(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l8;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3105(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l6;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=l3;
si2=l1;
si3=l6;
si4=l2;
si5=l6;
si6=24U;
si5+=si6;
si6=l6;
si7=48U;
si6+=si7;
si7=l5;
si8=l7;
f3026(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3106(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l11=si0;
si1=1U;
si2=l11;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l6;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l3=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=98U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=l6;
si4=l4;
si5=l6;
si6=24U;
si5+=si6;
si6=l6;
si7=48U;
si6+=si7;
si7=l5;
si8=l7;
f3026(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3107(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l6=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=98U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l7;
si2=l1;
si3=l4;
si4=l2;
si5=l4;
si6=24U;
si5+=si6;
si6=l4;
si7=48U;
si6+=si7;
si7=l3;
si8=l5;
f3026(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3108(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l12=si0;
si1=1U;
si2=l12;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l7;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=98U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=l7;
si4=l4;
si5=l7;
si6=24U;
si5+=si6;
si6=l7;
si7=48U;
si6+=si7;
si7=l6;
si8=l8;
f3026(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l7;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3109(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=98U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l7;
si2=l1;
si3=l5;
si4=l2;
si5=l5;
si6=24U;
si5+=si6;
si6=l5;
si7=48U;
si6+=si7;
si7=l4;
si8=l6;
f3026(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3110(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
sj1=34359738404ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3111(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=22U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3112(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=41U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
sj1=64424509444ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1532114U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1532106U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1532098U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1532090U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1532082U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1532074U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
sj1=176093659177ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1U;
si1=41U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
f3007(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L9;
default:
goto L7;
}
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L14;
default:
goto L12;
}
L16:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
goto L13;
L15:;
si0=l0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L12:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3113(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l5;
si1=l2;
si2=96U;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l8;
si2=88U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l8;
si2=80U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l8;
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l8;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l8;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L6;
default:
goto L1;
}
L8:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L11;
default:
goto L9;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L10;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
goto L9;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L9:;
si0=l8;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3114(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=18U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3115(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3116(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=48U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=27U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3117(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=32U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L6;
default:
goto L1;
}
L8:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L9;
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L10;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
L10:;
goto L0;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3118(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=31U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L5;
default:
goto L4;
}
L7:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L4;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L4:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3119(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=23U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L5;
default:
goto L4;
}
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L4;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L4:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3120(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3121(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f3358(i,si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
sj1=l8;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
l8=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=26U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
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
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3122(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=14U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L5;
default:
goto L4;
}
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L4;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L4:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3123(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l2;
si2=48U;
si1*=si2;
l9=si1;
si0+=si1;
l8=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l7;
si1=l11;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l10;
si1=40U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=32U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l2;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
si2=2U;
f3485(i,si0,si1,si2);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l11;
si2=48U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l9;
si1=-48U;
si0+=si1;
si1=l11;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=48U;
si0+=si1;
l10=si0;
si0=l9;
si1=l11;
si0-=si1;
si1=-48U;
si0+=si1;
si1=48U;
si0=DIV_U(si0,si1);
l11=si0;
L5:;
{
si0=l10;
f3500(i,si0);
si0=l10;
si1=48U;
si0+=si1;
l10=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
l8=si0;
L1:;
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=l7;
si1-=si2;
si2=48U;
si1=DIV_U(si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L9;
default:
goto L6;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L10:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3124(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=0U;
l2=si0;
si0=l4;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=36U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=44U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3125(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=9U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L5:;
goto L0;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3126(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
si2=1U;
f3485(i,si0,si1,si2);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si2=48U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=152U;
si0+=si1;
l9=si0;
si1=l8;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=144U;
si0+=si1;
l10=si0;
si1=l8;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
l11=si0;
si1=l8;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0+=si1;
l12=si0;
si1=l8;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
si1=l8;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=12U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=44U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=64U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
si1=8U;
si0+=si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l12=si0;
si0=l10;
si1=24U;
si0+=si1;
l13=si0;
si0=l10;
si1=32U;
si0+=si1;
l15=si0;
si0=l10;
si1=40U;
si0+=si1;
l16=si0;
si0=l7;
l1=si0;
L10:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=38U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
goto L3;
L11:;
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l1;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l1;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=112U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=1U;
f3485(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l9;
f3347(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l9;
si2=48U;
si1*=si2;
si0+=si1;
l2=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l9;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L2;
}
L8:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=23U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15271(i,si0);
goto L1;
L7:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1531456U;
si1=43U;
si2=1531592U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l8;
si1=l1;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l2=si0;
si0=l8;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
L13:;
{
si0=l1;
f3500(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L13;
}
}
L2:;
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
f15271(i,si0);
L14:;
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3127(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=48U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l1;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
si2=1U;
f3485(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l3=si0;
si0=l9;
si1=38U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l8;
si2=34U;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L8;
default:
goto L1;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L9:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3128(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=33U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L5;
default:
goto L4;
}
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L4;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L4:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3129(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=98U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l7;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=36U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=98U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L7;
default:
goto L3;
}
L9:;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L5:;
sj0=l6;
si0=(U32)(sj0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
sj0=l6;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
L4:;
si0=l4;
f15271(i,si0);
L3:;
goto L0;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1531456U;
si1=43U;
si2=1531972U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}


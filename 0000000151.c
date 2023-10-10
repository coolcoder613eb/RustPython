#include "w2c2_base.h"

#include "rustpython.h"

F64 f15130(rustpythonInstance*i,F64 l0) {
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

F64 f15131(rustpythonInstance*i,F64 l0) {
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
sd0=f64_load(&i->m0,(U64)si0+18645440U);
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
sd3=f64_load(&i->m0,(U64)si3+18645512U);
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18645504U);
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
sd5=f64_load(&i->m0,(U64)si5+18645576U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645568U);
sd4+=sd5;
sd3*=sd4;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645560U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645552U);
sd4+=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l5;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645544U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645536U);
sd4+=sd5;
sd3*=sd4;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645528U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645520U);
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
sd4=f64_load(&i->m0,(U64)si4+18645448U);
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
sd0=f15127(i,si0);
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
sd0=f15128(i,sd0);
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
si1=18645592U;
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
sd1=f64_load(&i->m0,(U64)si1+18645440U);
l3=sd1;
si2=l9;
si3=18645584U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sj3=l1;
sj4=l10;
sj5=-4503599627370496ULL;
sj4&=sj5;
sj3-=sj4;
sd3=f64_reinterpret_i64(sj3);
si4=l9;
si5=18646608U;
si4+=si5;
sd4=f64_load(&i->m0,(U64)si4);
sd3-=sd4;
si4=l9;
si5=18646616U;
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
sd4=f64_load(&i->m0,(U64)si4+18645496U);
sd3*=sd4;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+18645488U);
sd3+=sd4;
sd2*=sd3;
sd3=l5;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645480U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645472U);
sd4+=sd5;
sd3*=sd4;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645464U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18645456U);
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
sd3=f64_load(&i->m0,(U64)si3+18645448U);
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

F64 f15132(rustpythonInstance*i,F64 l0,F64 l1) {
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
si2=f15133(i,sj2);
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
si0=f15133(i,sj0);
l8=si0;
if(si0){
goto L10;
}
sd0=l0;
sd0=f15128(i,sd0);
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
sd0=f15117(i,si0);
goto L0;
L12:;
si0=0U;
sd0=f15116(i,si0);
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
si3=18651944U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
l12=sd2;
sd1*=sd2;
sd2=-1;
sd1+=sd2;
l0=sd1;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18651888U);
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
sd3=f64_load(&i->m0,(U64)si3+18651872U);
sd2*=sd3;
si3=l5;
si4=18651960U;
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
sd5=f64_load(&i->m0,(U64)si5+18651880U);
sd4*=sd5;
si5=l5;
si6=18651968U;
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
sd7=f64_load(&i->m0,(U64)si7+18651936U);
sd6*=sd7;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+18651928U);
sd6+=sd7;
sd5*=sd6;
sd6=l0;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+18651920U);
sd6*=sd7;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+18651912U);
sd6+=sd7;
sd5+=sd6;
sd4*=sd5;
sd5=l0;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+18651904U);
sd5*=sd6;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+18651896U);
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
sd0=f15116(i,si0);
goto L0;
L15:;
si0=l8;
sd0=f15117(i,si0);
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
sd2=f64_load(&i->m0,(U64)si2+18643280U);
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18643288U);
l0=sd2;
sd1+=sd2;
l10=sd1;
sd2=l0;
sd1-=sd2;
l0=sd1;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18643304U);
sd1*=sd2;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18643296U);
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
sd2=f64_load(&i->m0,(U64)si2+18643336U);
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18643328U);
sd1+=sd2;
sd0*=sd1;
sd1=l1;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18643320U);
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18643312U);
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
si3=18643392U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd3=l0;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
si0=l7;
si1=18643400U;
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
sd0=f15134(i,sd0,sj1,sj2);
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

U32 f15133(rustpythonInstance*i,U64 l0) {
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

F64 f15134(rustpythonInstance*i,F64 l0,U64 l1,U64 l2) {
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

F64 f15135(rustpythonInstance*i,F64 l0) {
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

F64 f15136(rustpythonInstance*i,F64 l0,U32 l1) {
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

F64 f15137(rustpythonInstance*i,F64 l0) {
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
sd0=f15111(i,sd0,sd1,si2);
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
si0=f15110(i,sd0,si1);
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
sd0=f15111(i,sd0,sd1,si2);
l0=sd0;
goto L1;
L6:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd0=f15108(i,sd0,sd1);
l0=sd0;
goto L1;
L5:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=1U;
sd0=f15111(i,sd0,sd1,si2);
sd0=-(sd0);
l0=sd0;
goto L1;
L4:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd0=f15108(i,sd0,sd1);
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

F64 f15138(rustpythonInstance*i,F64 l0) {
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
sd0=f15122(i,sd0);
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
sd1=f15113(i,sd1);
sd0*=sd1;
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

F64 f15139(rustpythonInstance*i,F64 l0,F64 l1,U32 l2) {
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

F64 f15140(rustpythonInstance*i,F64 l0) {
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
sd0=f15139(i,sd0,sd1,si2);
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
si0=f15110(i,sd0,si1);
l2=si0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=1U;
si2&=si3;
sd0=f15139(i,sd0,sd1,si2);
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

F64 f15141(rustpythonInstance*i,F64 l0) {
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
sd2=f15122(i,sd2);
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
sd0=f15122(i,sd0);
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
sd0=f15122(i,sd0);
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

U32 f15142(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 f15143(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=si0 < si1;
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
si0=si0 >= si1;
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

U32 f15144(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l5=si0;
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
l5=si0;
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
l5=si0;
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
si0=l5;
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
l5=si0;
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
si0=l5;
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
l5=si0;
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
si0=l5;
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
l5=si0;
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
l6=si0;
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
l5=si0;
L18:;
{
si0=l5;
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
si0=l6;
si1=12U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=-16U;
si0+=si1;
l5=si0;
si0=l0;
si1=-16U;
si0+=si1;
l6=si0;
L19:;
{
si0=l6;
si1=l2;
si0+=si1;
l3=si0;
si1=12U;
si0+=si1;
si1=l5;
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
l3=si0;
si0=l2;
si1=3U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=-1U;
si0+=si1;
l5=si0;
si0=l0;
si1=-1U;
si0+=si1;
l6=si0;
si0=l2;
l3=si0;
L21:;
{
si0=l6;
si1=l3;
si0+=si1;
si1=l5;
si2=l3;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l2;
si1=4U;
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
l5=si0;
L22:;
{
si0=l5;
si1=l3;
si0+=si1;
l1=si0;
si1=3U;
si0+=si1;
si1=l4;
si2=l3;
si1+=si2;
l2=si1;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
si1=l2;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
si1=l2;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
if(si0){
goto L22;
}
goto L1;
}
L5:;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=-4U;
si0+=si1;
l4=si0;
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
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l4;
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
si0=l5;
si1=-32U;
si0+=si1;
l5=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L25;
}
}
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=7U;
si0&=si1;
l4=si0;
if(si0){
goto L27;
}
si0=l5;
l2=si0;
goto L26;
L27:;
si0=l5;
l2=si0;
L28:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L28;
}
}
L26:;
si0=l5;
si1=8U;
si0=si0 < si1;
if(si0){
goto L1;
}
L29:;
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
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
}
L1:;
si0=l0;
L0:;
return si0;
}

U32 f15145(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 f15146(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=f15152(i,si1);
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

U32 f15147(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f15148(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f15149(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f15148(i,si0,si1);
si0=l0;
L0:;
return si0;
}

U32 f15150(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=f15152(i,si0);
si1=1U;
si0+=si1;
l1=si0;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=l1;
si0=f15143(i,si0,si1,si2);
L1:;
si0=l2;
L0:;
return si0;
}

U32 f15151(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=f15095(i,si0);
l0=si0;
si0=f15152(i,si0);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
si0=0U;
l3=si0;
L1:;
si0=l3;
L0:;
return si0;
}

U32 f15152(rustpythonInstance*i,U32 l0) {
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

U32 f15153(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f15154(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L4;
}
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
f15156(i,si0,sj1,sj2,si3);
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
L5:;
{
sj0=l2;
sj1=l9;
sj0-=sj1;
sj1=l1;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l11=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L6;
}
sj0=l8;
sj1=l6;
sj0|=sj1;
l6=sj0;
sj0=l1;
sj1=l10;
sj0-=sj1;
l1=sj0;
sj1=l3;
si0=sj0 >= sj1;
sj1=l11;
sj2=l4;
si1=sj1 >= sj2;
sj2=l11;
sj3=l4;
si2=sj2 == sj3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L2;
}
sj0=l11;
l2=sj0;
L6:;
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
goto L5;
}
L4:;
sj0=l2;
si0=!(sj0);
if(si0){
goto L10;
}
sj0=l2;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L7;
}
sj0=l2;
sj1=l3;
si0=sj0 == sj1;
if(si0){
goto L9;
}
sj0=l2;
sj1=l2;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l8=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l11=sj0;
sj0=l3;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L8;
}
sj0=l11;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l9=sj0;
sj1=l9;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l9=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=4294967295ULL;
sj1&=sj2;
sj0|=sj1;
l10=sj0;
sj1=l10;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l10=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj0=l9;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l10;
sj0|=sj1;
l6=sj0;
sj0=l9;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l8;
sj0|=sj1;
l8=sj0;
sj0=0ULL;
l11=sj0;
goto L1;
L10:;
sj0=l1;
sj1=l1;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l6=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj0=0ULL;
l11=sj0;
goto L2;
L9:;
sj0=l1;
sj1=l1;
sj2=l2;
sj1=DIV_U(sj1,sj2);
l6=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj0=0ULL;
l11=sj0;
sj0=1ULL;
l8=sj0;
goto L1;
L8:;
sj0=l1;
sj1=l3;
si0=sj0 < sj1;
sj1=l11;
sj2=l4;
si1=sj1 < sj2;
sj2=l11;
sj3=l4;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L11;
}
sj0=l4;
sj1=63ULL;
sj0<<=(sj1&63);
sj1=l3;
sj2=1ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l9=sj0;
sj0=l3;
sj1=63ULL;
sj0<<=(sj1&63);
l10=sj0;
sj0=-9223372036854775808ULL;
l2=sj0;
sj0=0ULL;
l6=sj0;
L12:;
{
sj0=l11;
sj1=l9;
sj0-=sj1;
sj1=l1;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l4=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L13;
}
sj0=l1;
sj1=l10;
sj0-=sj1;
l1=sj0;
sj0=l2;
sj1=l6;
sj0|=sj1;
l6=sj0;
sj0=l4;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L14;
}
sj0=l4;
l11=sj0;
goto L13;
L14:;
sj0=l1;
sj1=l3;
sj0=DIV_U(sj0,sj1);
l9=sj0;
sj1=l6;
sj0|=sj1;
l6=sj0;
sj0=l1;
sj1=l9;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj0=0ULL;
l11=sj0;
goto L1;
L13:;
sj0=l10;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=l9;
sj2=63ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l10=sj0;
sj0=l2;
sj1=1ULL;
sj0>>=(sj1&63);
l2=sj0;
sj0=l9;
sj1=1ULL;
sj0>>=(sj1&63);
l9=sj0;
goto L12;
}
L11:;
sj0=0ULL;
l6=sj0;
goto L1;
L7:;
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
l12=si5;
si4-=si5;
si5=64U;
si4+=si5;
si5=l7;
si6=l12;
si5=si5 == si6;
si3=si5?si3:si4;
l7=si3;
f15156(i,si0,sj1,sj2,si3);
sj0=1ULL;
si1=l7;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l11=sj0;
si0=l5;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj0=0ULL;
l4=sj0;
L15:;
{
sj0=l2;
sj1=l9;
sj0-=sj1;
sj1=l1;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l8=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L16;
}
sj0=l1;
sj1=l10;
sj0-=sj1;
l1=sj0;
sj0=l11;
sj1=l4;
sj0|=sj1;
l4=sj0;
sj0=l8;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L17;
}
sj0=l8;
l2=sj0;
goto L16;
L17:;
sj0=l1;
sj1=l3;
sj0=DIV_U(sj0,sj1);
l9=sj0;
sj1=l4;
sj0|=sj1;
l6=sj0;
sj0=l1;
sj1=l9;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj0=0ULL;
l11=sj0;
goto L2;
L16:;
sj0=l10;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=l9;
sj2=63ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l10=sj0;
sj0=l11;
sj1=1ULL;
sj0>>=(sj1&63);
l11=sj0;
sj0=l9;
sj1=1ULL;
sj0>>=(sj1&63);
l9=sj0;
goto L15;
}
L3:;
sj0=l2;
l11=sj0;
L2:;
sj0=0ULL;
l8=sj0;
L1:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15155(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
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
f15154(i,si0,sj1,sj2,sj3,sj4);
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

void f15156(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U32 l3) {
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

void f15157(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si2;
U64 sj1,sj2,sj3,sj4,sj5;
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
sj2=l3;
sj3=32ULL;
sj2>>=(sj3&63);
l8=sj2;
sj3=l6;
sj2*=sj3;
l6=sj2;
sj3=l5;
sj4=l1;
sj5=32ULL;
sj4>>=(sj5&63);
l9=sj4;
sj3*=sj4;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
sj2=l9;
sj1*=sj2;
sj2=l5;
sj3=l6;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=32ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1+=sj2;
sj2=l10;
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

void f15158(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U32 l3) {
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

void f15159(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4,U32 l5) {
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=32U;
si0+=si1;
sj1=l1;
sj2=0ULL;
sj3=l7;
sj4=l3;
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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


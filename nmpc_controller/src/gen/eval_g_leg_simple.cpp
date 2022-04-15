/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_g_leg_simple_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[100] = {96, 1, 0, 96, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[56] = {52, 1, 0, 52, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};

/* eval_g_leg_simple:(w[96],p[2])->(g[52]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a8, a9;
  a0=arg[0]? arg[0][60] : 0;
  a1=arg[0]? arg[0][0] : 0;
  a2=arg[0]? arg[0][6] : 0;
  a3=arg[1]? arg[1][0] : 0;
  a4=(a2*a3);
  a4=(a1+a4);
  a5=5.0000000000000000e-01;
  a6=arg[0]? arg[0][36] : 0;
  a7=arg[0]? arg[0][39] : 0;
  a8=(a6+a7);
  a9=arg[0]? arg[0][42] : 0;
  a8=(a8+a9);
  a10=arg[0]? arg[0][45] : 0;
  a8=(a8+a10);
  a11=1.3300000000000001e+01;
  a8=(a8/a11);
  a8=(a5*a8);
  a12=casadi_sq(a3);
  a8=(a8*a12);
  a4=(a4+a8);
  a4=(a0-a4);
  if (res[0]!=0) res[0][0]=a4;
  a4=arg[0]? arg[0][61] : 0;
  a8=arg[0]? arg[0][1] : 0;
  a13=arg[0]? arg[0][7] : 0;
  a14=(a13*a3);
  a14=(a8+a14);
  a15=arg[0]? arg[0][37] : 0;
  a16=arg[0]? arg[0][40] : 0;
  a17=(a15+a16);
  a18=arg[0]? arg[0][43] : 0;
  a17=(a17+a18);
  a19=arg[0]? arg[0][46] : 0;
  a17=(a17+a19);
  a17=(a17/a11);
  a17=(a5*a17);
  a17=(a17*a12);
  a14=(a14+a17);
  a14=(a4-a14);
  if (res[0]!=0) res[0][1]=a14;
  a14=arg[0]? arg[0][62] : 0;
  a17=arg[0]? arg[0][2] : 0;
  a20=arg[0]? arg[0][8] : 0;
  a21=(a20*a3);
  a21=(a17+a21);
  a22=arg[0]? arg[0][38] : 0;
  a23=arg[0]? arg[0][41] : 0;
  a24=(a22+a23);
  a25=arg[0]? arg[0][44] : 0;
  a24=(a24+a25);
  a26=arg[0]? arg[0][47] : 0;
  a24=(a24+a26);
  a24=(a24/a11);
  a27=9.8100000000000005e+00;
  a24=(a24-a27);
  a24=(a5*a24);
  a24=(a24*a12);
  a21=(a21+a24);
  a21=(a14-a21);
  if (res[0]!=0) res[0][2]=a21;
  a21=arg[0]? arg[0][63] : 0;
  a24=arg[0]? arg[0][3] : 0;
  a12=(a21-a24);
  a28=arg[0]? arg[0][9] : 0;
  a29=arg[0]? arg[0][69] : 0;
  a30=(a28+a29);
  a31=2.;
  a30=(a30/a31);
  a32=arg[0]? arg[0][4] : 0;
  a33=arg[0]? arg[0][64] : 0;
  a34=(a32+a33);
  a34=(a34/a31);
  a35=cos(a34);
  a36=(a30*a35);
  a37=arg[0]? arg[0][11] : 0;
  a38=arg[0]? arg[0][71] : 0;
  a39=(a37+a38);
  a39=(a39/a31);
  a24=(a24+a21);
  a24=(a24/a31);
  a21=cos(a24);
  a40=(a39*a21);
  a34=sin(a34);
  a40=(a40*a34);
  a36=(a36+a40);
  a40=arg[0]? arg[0][10] : 0;
  a41=arg[0]? arg[0][70] : 0;
  a42=(a40+a41);
  a42=(a42/a31);
  a24=sin(a24);
  a43=(a42*a24);
  a43=(a43*a34);
  a36=(a36+a43);
  a36=(a36/a35);
  a36=(a36*a3);
  a12=(a12-a36);
  if (res[0]!=0) res[0][3]=a12;
  a33=(a33-a32);
  a32=(a42*a21);
  a12=(a39*a24);
  a32=(a32-a12);
  a32=(a32*a3);
  a33=(a33-a32);
  if (res[0]!=0) res[0][4]=a33;
  a33=arg[0]? arg[0][65] : 0;
  a32=arg[0]? arg[0][5] : 0;
  a12=(a33-a32);
  a36=(a39*a21);
  a43=(a42*a24);
  a36=(a36+a43);
  a36=(a36/a35);
  a36=(a36*a3);
  a12=(a12-a36);
  if (res[0]!=0) res[0][5]=a12;
  a12=arg[0]? arg[0][66] : 0;
  a36=(a6+a7);
  a36=(a36+a9);
  a36=(a36+a10);
  a36=(a36/a11);
  a36=(a36*a3);
  a2=(a2+a36);
  a12=(a12-a2);
  if (res[0]!=0) res[0][6]=a12;
  a12=arg[0]? arg[0][67] : 0;
  a2=(a15+a16);
  a2=(a2+a18);
  a2=(a2+a19);
  a2=(a2/a11);
  a2=(a2*a3);
  a13=(a13+a2);
  a12=(a12-a13);
  if (res[0]!=0) res[0][7]=a12;
  a12=arg[0]? arg[0][68] : 0;
  a13=(a22+a23);
  a13=(a13+a25);
  a13=(a13+a26);
  a13=(a13/a11);
  a13=(a13-a27);
  a13=(a13*a3);
  a20=(a20+a13);
  a12=(a12-a20);
  if (res[0]!=0) res[0][8]=a12;
  a12=9.3212278260869572e-02;
  a29=(a29-a28);
  a12=(a12*a29);
  a28=2.8968800000000020e-02;
  a20=(a42*a39);
  a28=(a28*a20);
  a20=arg[0]? arg[0][13] : 0;
  a13=arg[0]? arg[0][73] : 0;
  a27=(a20+a13);
  a27=(a27/a31);
  a8=(a8+a4);
  a8=(a8/a31);
  a4=(a27-a8);
  a4=(a34*a4);
  a32=(a32+a33);
  a32=(a32/a31);
  a33=sin(a32);
  a11=(a35*a33);
  a2=arg[0]? arg[0][14] : 0;
  a36=arg[0]? arg[0][74] : 0;
  a43=(a2+a36);
  a43=(a43/a31);
  a17=(a17+a14);
  a17=(a17/a31);
  a43=(a43-a17);
  a11=(a11*a43);
  a4=(a4+a11);
  a4=(a4*a6);
  a11=arg[0]? arg[0][12] : 0;
  a14=arg[0]? arg[0][72] : 0;
  a44=(a11+a14);
  a44=(a44/a31);
  a1=(a1+a0);
  a1=(a1/a31);
  a0=(a44-a1);
  a45=(a34*a0);
  a32=cos(a32);
  a46=(a35*a32);
  a46=(a46*a43);
  a45=(a45+a46);
  a45=(a45*a15);
  a4=(a4-a45);
  a45=(a8*a32);
  a46=(a1*a33);
  a47=(a45-a46);
  a48=(a27*a32);
  a47=(a47-a48);
  a48=(a44*a33);
  a47=(a47+a48);
  a47=(a35*a47);
  a47=(a47*a22);
  a4=(a4-a47);
  a47=arg[0]? arg[0][16] : 0;
  a48=arg[0]? arg[0][76] : 0;
  a49=(a47+a48);
  a49=(a49/a31);
  a50=(a49-a8);
  a50=(a34*a50);
  a51=(a35*a33);
  a52=arg[0]? arg[0][17] : 0;
  a53=arg[0]? arg[0][77] : 0;
  a54=(a52+a53);
  a54=(a54/a31);
  a54=(a54-a17);
  a51=(a51*a54);
  a50=(a50+a51);
  a50=(a50*a7);
  a4=(a4+a50);
  a50=arg[0]? arg[0][15] : 0;
  a51=arg[0]? arg[0][75] : 0;
  a55=(a50+a51);
  a55=(a55/a31);
  a56=(a55-a1);
  a57=(a34*a56);
  a58=(a35*a32);
  a58=(a58*a54);
  a57=(a57+a58);
  a57=(a57*a16);
  a4=(a4-a57);
  a57=(a45-a46);
  a58=(a49*a32);
  a57=(a57-a58);
  a58=(a55*a33);
  a57=(a57+a58);
  a57=(a35*a57);
  a57=(a57*a23);
  a4=(a4-a57);
  a57=arg[0]? arg[0][19] : 0;
  a58=arg[0]? arg[0][79] : 0;
  a59=(a57+a58);
  a59=(a59/a31);
  a60=(a59-a8);
  a60=(a34*a60);
  a61=(a35*a33);
  a62=arg[0]? arg[0][20] : 0;
  a63=arg[0]? arg[0][80] : 0;
  a64=(a62+a63);
  a64=(a64/a31);
  a64=(a64-a17);
  a61=(a61*a64);
  a60=(a60+a61);
  a60=(a60*a9);
  a4=(a4+a60);
  a60=arg[0]? arg[0][18] : 0;
  a61=arg[0]? arg[0][78] : 0;
  a65=(a60+a61);
  a65=(a65/a31);
  a66=(a65-a1);
  a67=(a34*a66);
  a68=(a35*a32);
  a68=(a68*a64);
  a67=(a67+a68);
  a67=(a67*a18);
  a4=(a4-a67);
  a67=(a45-a46);
  a68=(a59*a32);
  a67=(a67-a68);
  a68=(a65*a33);
  a67=(a67+a68);
  a67=(a35*a67);
  a67=(a67*a25);
  a4=(a4-a67);
  a67=arg[0]? arg[0][22] : 0;
  a68=arg[0]? arg[0][82] : 0;
  a69=(a67+a68);
  a69=(a69/a31);
  a70=(a69-a8);
  a70=(a34*a70);
  a71=(a35*a33);
  a72=arg[0]? arg[0][23] : 0;
  a73=arg[0]? arg[0][83] : 0;
  a74=(a72+a73);
  a74=(a74/a31);
  a74=(a74-a17);
  a71=(a71*a74);
  a70=(a70+a71);
  a70=(a70*a10);
  a4=(a4+a70);
  a70=arg[0]? arg[0][21] : 0;
  a71=arg[0]? arg[0][81] : 0;
  a17=(a70+a71);
  a17=(a17/a31);
  a31=(a17-a1);
  a75=(a34*a31);
  a76=(a35*a32);
  a76=(a76*a74);
  a75=(a75+a76);
  a75=(a75*a19);
  a4=(a4-a75);
  a45=(a45-a46);
  a46=(a69*a32);
  a45=(a45-a46);
  a46=(a17*a33);
  a45=(a45+a46);
  a45=(a35*a45);
  a45=(a45*a26);
  a4=(a4-a45);
  a28=(a28-a4);
  a28=(a28*a3);
  a12=(a12+a28);
  if (res[0]!=0) res[0][9]=a12;
  a12=4.3125046780173909e-01;
  a28=(a12*a21);
  a41=(a41-a40);
  a28=(a28*a41);
  a40=-4.6021926780173911e-01;
  a40=(a40*a24);
  a38=(a38-a37);
  a40=(a40*a38);
  a28=(a28+a40);
  a40=-1.3877787807814460e-17;
  a37=26445640661418040.;
  a4=(a39*a21);
  a37=(a37*a4);
  a4=24358218631252112.;
  a45=(a42*a24);
  a4=(a4*a45);
  a37=(a37+a4);
  a37=(a30*a37);
  a40=(a40*a37);
  a37=(a32*a43);
  a37=(a37*a6);
  a43=(a33*a43);
  a43=(a43*a15);
  a37=(a37+a43);
  a1=(a1*a32);
  a43=(a8*a33);
  a4=(a1+a43);
  a44=(a44*a32);
  a4=(a4-a44);
  a44=(a27*a33);
  a4=(a4-a44);
  a4=(a4*a22);
  a37=(a37+a4);
  a4=(a32*a54);
  a4=(a4*a7);
  a37=(a37+a4);
  a54=(a33*a54);
  a54=(a54*a16);
  a37=(a37+a54);
  a54=(a1+a43);
  a55=(a55*a32);
  a54=(a54-a55);
  a55=(a49*a33);
  a54=(a54-a55);
  a54=(a54*a23);
  a37=(a37+a54);
  a54=(a32*a64);
  a54=(a54*a9);
  a37=(a37+a54);
  a64=(a33*a64);
  a64=(a64*a18);
  a37=(a37+a64);
  a64=(a1+a43);
  a65=(a65*a32);
  a64=(a64-a65);
  a65=(a59*a33);
  a64=(a64-a65);
  a64=(a64*a25);
  a37=(a37+a64);
  a64=(a32*a74);
  a64=(a64*a10);
  a37=(a37+a64);
  a74=(a33*a74);
  a74=(a74*a19);
  a37=(a37+a74);
  a1=(a1+a43);
  a17=(a17*a32);
  a1=(a1-a17);
  a33=(a69*a33);
  a1=(a1-a33);
  a1=(a1*a26);
  a37=(a37+a1);
  a40=(a40-a37);
  a40=(a40*a3);
  a28=(a28+a40);
  if (res[0]!=0) res[0][10]=a28;
  a28=-9.3212278260869572e-02;
  a28=(a28*a34);
  a28=(a28*a29);
  a29=(a35*a24);
  a12=(a12*a29);
  a12=(a12*a41);
  a28=(a28+a12);
  a12=4.6021926780173911e-01;
  a41=(a21*a35);
  a12=(a12*a41);
  a12=(a12*a38);
  a28=(a28+a12);
  a12=-2.8968800000000020e-02;
  a38=(a42*a39);
  a38=(a38*a34);
  a12=(a12*a38);
  a38=3.3803818954086950e-01;
  a42=(a30*a42);
  a42=(a42*a21);
  a42=(a42*a35);
  a38=(a38*a42);
  a12=(a12+a38);
  a38=3.6700698954086952e-01;
  a30=(a30*a39);
  a30=(a30*a35);
  a30=(a30*a24);
  a38=(a38*a30);
  a12=(a12-a38);
  a27=(a8-a27);
  a27=(a27*a6);
  a0=(a0*a15);
  a27=(a27+a0);
  a49=(a8-a49);
  a49=(a49*a7);
  a27=(a27+a49);
  a56=(a56*a16);
  a27=(a27+a56);
  a59=(a8-a59);
  a59=(a59*a9);
  a27=(a27+a59);
  a66=(a66*a18);
  a27=(a27+a66);
  a8=(a8-a69);
  a8=(a8*a10);
  a27=(a27+a8);
  a31=(a31*a19);
  a27=(a27+a31);
  a12=(a12-a27);
  a12=(a12*a3);
  a28=(a28+a12);
  if (res[0]!=0) res[0][11]=a28;
  a28=arg[1]? arg[1][1] : 0;
  a12=(a28*a22);
  a12=(a6-a12);
  if (res[0]!=0) res[0][12]=a12;
  a12=(a28*a22);
  a6=(a6+a12);
  a6=(-a6);
  if (res[0]!=0) res[0][13]=a6;
  a6=(a28*a22);
  a6=(a15-a6);
  if (res[0]!=0) res[0][14]=a6;
  a22=(a28*a22);
  a15=(a15+a22);
  a15=(-a15);
  if (res[0]!=0) res[0][15]=a15;
  a15=(a28*a23);
  a15=(a7-a15);
  if (res[0]!=0) res[0][16]=a15;
  a15=(a28*a23);
  a7=(a7+a15);
  a7=(-a7);
  if (res[0]!=0) res[0][17]=a7;
  a7=(a28*a23);
  a7=(a16-a7);
  if (res[0]!=0) res[0][18]=a7;
  a23=(a28*a23);
  a16=(a16+a23);
  a16=(-a16);
  if (res[0]!=0) res[0][19]=a16;
  a16=(a28*a25);
  a16=(a9-a16);
  if (res[0]!=0) res[0][20]=a16;
  a16=(a28*a25);
  a9=(a9+a16);
  a9=(-a9);
  if (res[0]!=0) res[0][21]=a9;
  a9=(a28*a25);
  a9=(a18-a9);
  if (res[0]!=0) res[0][22]=a9;
  a25=(a28*a25);
  a18=(a18+a25);
  a18=(-a18);
  if (res[0]!=0) res[0][23]=a18;
  a18=(a28*a26);
  a18=(a10-a18);
  if (res[0]!=0) res[0][24]=a18;
  a18=(a28*a26);
  a10=(a10+a18);
  a10=(-a10);
  if (res[0]!=0) res[0][25]=a10;
  a10=(a28*a26);
  a10=(a19-a10);
  if (res[0]!=0) res[0][26]=a10;
  a28=(a28*a26);
  a19=(a19+a28);
  a19=(-a19);
  if (res[0]!=0) res[0][27]=a19;
  a19=arg[0]? arg[0][24] : 0;
  a28=(a19*a3);
  a11=(a11+a28);
  a28=arg[0]? arg[0][48] : 0;
  a26=1.0000000000000000e-02;
  a10=(a28/a26);
  a10=(a5*a10);
  a18=casadi_sq(a3);
  a10=(a10*a18);
  a11=(a11+a10);
  a14=(a14-a11);
  if (res[0]!=0) res[0][28]=a14;
  a14=arg[0]? arg[0][25] : 0;
  a11=(a14*a3);
  a20=(a20+a11);
  a11=arg[0]? arg[0][49] : 0;
  a10=(a11/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a20=(a20+a10);
  a13=(a13-a20);
  if (res[0]!=0) res[0][29]=a13;
  a13=arg[0]? arg[0][26] : 0;
  a20=(a13*a3);
  a2=(a2+a20);
  a20=arg[0]? arg[0][50] : 0;
  a10=(a20/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a2=(a2+a10);
  a36=(a36-a2);
  if (res[0]!=0) res[0][30]=a36;
  a36=arg[0]? arg[0][27] : 0;
  a2=(a36*a3);
  a50=(a50+a2);
  a2=arg[0]? arg[0][51] : 0;
  a10=(a2/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a50=(a50+a10);
  a51=(a51-a50);
  if (res[0]!=0) res[0][31]=a51;
  a51=arg[0]? arg[0][28] : 0;
  a50=(a51*a3);
  a47=(a47+a50);
  a50=arg[0]? arg[0][52] : 0;
  a10=(a50/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a47=(a47+a10);
  a48=(a48-a47);
  if (res[0]!=0) res[0][32]=a48;
  a48=arg[0]? arg[0][29] : 0;
  a47=(a48*a3);
  a52=(a52+a47);
  a47=arg[0]? arg[0][53] : 0;
  a10=(a47/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a52=(a52+a10);
  a53=(a53-a52);
  if (res[0]!=0) res[0][33]=a53;
  a53=arg[0]? arg[0][30] : 0;
  a52=(a53*a3);
  a60=(a60+a52);
  a52=arg[0]? arg[0][54] : 0;
  a10=(a52/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a60=(a60+a10);
  a61=(a61-a60);
  if (res[0]!=0) res[0][34]=a61;
  a61=arg[0]? arg[0][31] : 0;
  a60=(a61*a3);
  a57=(a57+a60);
  a60=arg[0]? arg[0][55] : 0;
  a10=(a60/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a57=(a57+a10);
  a58=(a58-a57);
  if (res[0]!=0) res[0][35]=a58;
  a58=arg[0]? arg[0][32] : 0;
  a57=(a58*a3);
  a62=(a62+a57);
  a57=arg[0]? arg[0][56] : 0;
  a10=(a57/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a62=(a62+a10);
  a63=(a63-a62);
  if (res[0]!=0) res[0][36]=a63;
  a63=arg[0]? arg[0][33] : 0;
  a62=(a63*a3);
  a70=(a70+a62);
  a62=arg[0]? arg[0][57] : 0;
  a10=(a62/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a70=(a70+a10);
  a71=(a71-a70);
  if (res[0]!=0) res[0][37]=a71;
  a71=arg[0]? arg[0][34] : 0;
  a70=(a71*a3);
  a67=(a67+a70);
  a70=arg[0]? arg[0][58] : 0;
  a10=(a70/a26);
  a10=(a5*a10);
  a10=(a10*a18);
  a67=(a67+a10);
  a68=(a68-a67);
  if (res[0]!=0) res[0][38]=a68;
  a68=arg[0]? arg[0][35] : 0;
  a67=(a68*a3);
  a72=(a72+a67);
  a67=arg[0]? arg[0][59] : 0;
  a10=(a67/a26);
  a5=(a5*a10);
  a5=(a5*a18);
  a72=(a72+a5);
  a73=(a73-a72);
  if (res[0]!=0) res[0][39]=a73;
  a73=arg[0]? arg[0][84] : 0;
  a28=(a28/a26);
  a28=(a28*a3);
  a19=(a19+a28);
  a73=(a73-a19);
  if (res[0]!=0) res[0][40]=a73;
  a73=arg[0]? arg[0][85] : 0;
  a11=(a11/a26);
  a11=(a11*a3);
  a14=(a14+a11);
  a73=(a73-a14);
  if (res[0]!=0) res[0][41]=a73;
  a73=arg[0]? arg[0][86] : 0;
  a20=(a20/a26);
  a20=(a20*a3);
  a13=(a13+a20);
  a73=(a73-a13);
  if (res[0]!=0) res[0][42]=a73;
  a73=arg[0]? arg[0][87] : 0;
  a2=(a2/a26);
  a2=(a2*a3);
  a36=(a36+a2);
  a73=(a73-a36);
  if (res[0]!=0) res[0][43]=a73;
  a73=arg[0]? arg[0][88] : 0;
  a50=(a50/a26);
  a50=(a50*a3);
  a51=(a51+a50);
  a73=(a73-a51);
  if (res[0]!=0) res[0][44]=a73;
  a73=arg[0]? arg[0][89] : 0;
  a47=(a47/a26);
  a47=(a47*a3);
  a48=(a48+a47);
  a73=(a73-a48);
  if (res[0]!=0) res[0][45]=a73;
  a73=arg[0]? arg[0][90] : 0;
  a52=(a52/a26);
  a52=(a52*a3);
  a53=(a53+a52);
  a73=(a73-a53);
  if (res[0]!=0) res[0][46]=a73;
  a73=arg[0]? arg[0][91] : 0;
  a60=(a60/a26);
  a60=(a60*a3);
  a61=(a61+a60);
  a73=(a73-a61);
  if (res[0]!=0) res[0][47]=a73;
  a73=arg[0]? arg[0][92] : 0;
  a57=(a57/a26);
  a57=(a57*a3);
  a58=(a58+a57);
  a73=(a73-a58);
  if (res[0]!=0) res[0][48]=a73;
  a73=arg[0]? arg[0][93] : 0;
  a62=(a62/a26);
  a62=(a62*a3);
  a63=(a63+a62);
  a73=(a73-a63);
  if (res[0]!=0) res[0][49]=a73;
  a73=arg[0]? arg[0][94] : 0;
  a70=(a70/a26);
  a70=(a70*a3);
  a71=(a71+a70);
  a73=(a73-a71);
  if (res[0]!=0) res[0][50]=a73;
  a73=arg[0]? arg[0][95] : 0;
  a67=(a67/a26);
  a67=(a67*a3);
  a68=(a68+a67);
  a73=(a73-a68);
  if (res[0]!=0) res[0][51]=a73;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_g_leg_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}



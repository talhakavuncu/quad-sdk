/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_jac_g_leg_complex_to_simple_ ## ID
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

static const casadi_int casadi_s0[124] = {120, 1, 0, 120, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[448] = {52, 120, 0, 4, 8, 11, 16, 21, 24, 26, 28, 30, 34, 40, 46, 50, 54, 57, 61, 65, 68, 72, 76, 79, 83, 87, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110, 112, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 121, 128, 136, 143, 150, 158, 165, 172, 180, 187, 194, 202, 204, 206, 208, 210, 212, 214, 216, 218, 220, 222, 224, 226, 230, 234, 237, 242, 247, 250, 251, 252, 253, 257, 263, 269, 273, 277, 280, 284, 288, 291, 295, 299, 302, 306, 310, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 0, 9, 10, 11, 1, 9, 10, 11, 2, 9, 10, 3, 4, 5, 10, 11, 3, 4, 5, 9, 11, 5, 9, 10, 0, 6, 1, 7, 2, 8, 3, 9, 10, 11, 3, 4, 5, 9, 10, 11, 3, 4, 5, 9, 10, 11, 9, 10, 11, 28, 9, 10, 11, 29, 9, 10, 30, 9, 10, 11, 31, 9, 10, 11, 32, 9, 10, 33, 9, 10, 11, 34, 9, 10, 11, 35, 9, 10, 36, 9, 10, 11, 37, 9, 10, 11, 38, 9, 10, 39, 28, 40, 29, 41, 30, 42, 31, 43, 32, 44, 33, 45, 34, 46, 35, 47, 36, 48, 37, 49, 38, 50, 39, 51, 0, 6, 9, 10, 11, 12, 13, 1, 7, 9, 10, 11, 14, 15, 2, 8, 9, 10, 12, 13, 14, 15, 0, 6, 9, 10, 11, 16, 17, 1, 7, 9, 10, 11, 18, 19, 2, 8, 9, 10, 16, 17, 18, 19, 0, 6, 9, 10, 11, 20, 21, 1, 7, 9, 10, 11, 22, 23, 2, 8, 9, 10, 20, 21, 22, 23, 0, 6, 9, 10, 11, 24, 25, 1, 7, 9, 10, 11, 26, 27, 2, 8, 9, 10, 24, 25, 26, 27, 28, 40, 29, 41, 30, 42, 31, 43, 32, 44, 33, 45, 34, 46, 35, 47, 36, 48, 37, 49, 38, 50, 39, 51, 0, 9, 10, 11, 1, 9, 10, 11, 2, 9, 10, 3, 4, 5, 10, 11, 3, 4, 5, 9, 11, 5, 9, 10, 6, 7, 8, 3, 9, 10, 11, 3, 4, 5, 9, 10, 11, 3, 4, 5, 9, 10, 11, 9, 10, 11, 28, 9, 10, 11, 29, 9, 10, 30, 9, 10, 11, 31, 9, 10, 11, 32, 9, 10, 33, 9, 10, 11, 34, 9, 10, 11, 35, 9, 10, 36, 9, 10, 11, 37, 9, 10, 11, 38, 9, 10, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};

/* eval_jac_g_leg_complex_to_simple:(w[120],p[2])->(jac_g[52x120,325nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a14, a140, a141, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=-1.;
  if (res[0]!=0) res[0][0]=a0;
  a1=5.0000000000000000e-01;
  a2=arg[0]? arg[0][4] : 0;
  a3=arg[0]? arg[0][88] : 0;
  a2=(a2+a3);
  a3=2.;
  a2=(a2/a3);
  a4=sin(a2);
  a5=arg[0]? arg[0][70] : 0;
  a6=arg[1]? arg[1][0] : 0;
  a7=(a5*a6);
  a8=(a4*a7);
  a9=arg[0]? arg[0][67] : 0;
  a10=(a9*a6);
  a11=(a4*a10);
  a12=(a8+a11);
  a13=arg[0]? arg[0][64] : 0;
  a14=(a13*a6);
  a15=(a4*a14);
  a12=(a12+a15);
  a16=arg[0]? arg[0][5] : 0;
  a17=arg[0]? arg[0][89] : 0;
  a16=(a16+a17);
  a16=(a16/a3);
  a17=sin(a16);
  a18=cos(a2);
  a19=arg[0]? arg[0][71] : 0;
  a20=(a19*a6);
  a21=(a18*a20);
  a22=arg[0]? arg[0][68] : 0;
  a23=(a22*a6);
  a24=(a18*a23);
  a25=(a21+a24);
  a26=arg[0]? arg[0][65] : 0;
  a27=(a26*a6);
  a28=(a18*a27);
  a25=(a25+a28);
  a29=arg[0]? arg[0][62] : 0;
  a30=(a29*a6);
  a31=(a18*a30);
  a25=(a25+a31);
  a32=(a17*a25);
  a12=(a12+a32);
  a32=arg[0]? arg[0][61] : 0;
  a33=(a32*a6);
  a34=(a4*a33);
  a12=(a12+a34);
  a12=(a1*a12);
  a12=(-a12);
  if (res[0]!=0) res[0][1]=a12;
  a35=cos(a16);
  a19=(a19*a6);
  a22=(a22*a6);
  a36=(a19+a22);
  a26=(a26*a6);
  a36=(a36+a26);
  a29=(a29*a6);
  a36=(a36+a29);
  a37=(a35*a36);
  a37=(a1*a37);
  a37=(-a37);
  if (res[0]!=0) res[0][2]=a37;
  a38=(a5*a6);
  a39=(a9*a6);
  a40=(a38+a39);
  a41=(a13*a6);
  a40=(a40+a41);
  a42=(a32*a6);
  a40=(a40+a42);
  a40=(a1*a40);
  if (res[0]!=0) res[0][3]=a40;
  if (res[0]!=0) res[0][4]=a0;
  a43=arg[0]? arg[0][69] : 0;
  a44=(a43*a6);
  a45=(a4*a44);
  a46=arg[0]? arg[0][66] : 0;
  a47=(a46*a6);
  a48=(a4*a47);
  a49=(a45+a48);
  a50=arg[0]? arg[0][63] : 0;
  a51=(a50*a6);
  a52=(a4*a51);
  a49=(a49+a52);
  a53=(a21+a24);
  a53=(a53+a28);
  a53=(a53+a31);
  a54=(a35*a53);
  a49=(a49+a54);
  a54=arg[0]? arg[0][60] : 0;
  a55=(a54*a6);
  a56=(a4*a55);
  a49=(a49+a56);
  a49=(a1*a49);
  if (res[0]!=0) res[0][5]=a49;
  a57=(a19+a22);
  a57=(a57+a26);
  a57=(a57+a29);
  a58=(a17*a57);
  a58=(a1*a58);
  a58=(-a58);
  if (res[0]!=0) res[0][6]=a58;
  a59=(a43*a6);
  a60=(a46*a6);
  a61=(a59+a60);
  a62=(a50*a6);
  a61=(a61+a62);
  a63=(a54*a6);
  a61=(a61+a63);
  a61=(a1*a61);
  a61=(-a61);
  if (res[0]!=0) res[0][7]=a61;
  if (res[0]!=0) res[0][8]=a0;
  a64=(a18*a35);
  a65=(a64*a7);
  a66=(a18*a17);
  a67=(a66*a44);
  a65=(a65-a67);
  a67=(a18*a35);
  a68=(a67*a10);
  a69=(a18*a17);
  a70=(a69*a47);
  a68=(a68-a70);
  a70=(a65+a68);
  a71=(a18*a35);
  a72=(a71*a14);
  a73=(a18*a17);
  a74=(a73*a51);
  a72=(a72-a74);
  a70=(a70+a72);
  a74=(a18*a35);
  a75=(a74*a33);
  a76=(a18*a17);
  a77=(a76*a55);
  a75=(a75-a77);
  a70=(a70+a75);
  a70=(a1*a70);
  a70=(-a70);
  if (res[0]!=0) res[0][9]=a70;
  a5=(a5*a6);
  a77=(a17*a5);
  a43=(a43*a6);
  a78=(a35*a43);
  a77=(a77+a78);
  a9=(a9*a6);
  a78=(a17*a9);
  a46=(a46*a6);
  a79=(a35*a46);
  a78=(a78+a79);
  a79=(a77+a78);
  a13=(a13*a6);
  a80=(a17*a13);
  a50=(a50*a6);
  a81=(a35*a50);
  a80=(a80+a81);
  a79=(a79+a80);
  a32=(a32*a6);
  a81=(a17*a32);
  a54=(a54*a6);
  a82=(a35*a54);
  a81=(a81+a82);
  a79=(a79+a81);
  a79=(a1*a79);
  if (res[0]!=0) res[0][10]=a79;
  a82=arg[0]? arg[0][3] : 0;
  a83=arg[0]? arg[0][87] : 0;
  a82=(a82+a83);
  a82=(a82/a3);
  a83=sin(a82);
  a84=arg[0]? arg[0][11] : 0;
  a85=arg[0]? arg[0][95] : 0;
  a86=(a84+a85);
  a86=(a86/a3);
  a87=(a6/a18);
  a88=(a4*a87);
  a89=(a86*a88);
  a89=(a83*a89);
  a90=cos(a82);
  a91=arg[0]? arg[0][10] : 0;
  a92=arg[0]? arg[0][94] : 0;
  a93=(a91+a92);
  a93=(a93/a3);
  a94=(a4*a87);
  a95=(a93*a94);
  a95=(a90*a95);
  a89=(a89-a95);
  a89=(a1*a89);
  a95=(a89+a0);
  if (res[0]!=0) res[0][11]=a95;
  a95=(a86*a6);
  a95=(a90*a95);
  a96=(a93*a6);
  a96=(a83*a96);
  a95=(a95+a96);
  a95=(a1*a95);
  if (res[0]!=0) res[0][12]=a95;
  a96=(a6/a18);
  a97=(a86*a96);
  a97=(a83*a97);
  a98=(a93*a96);
  a98=(a90*a98);
  a97=(a97-a98);
  a97=(a1*a97);
  if (res[0]!=0) res[0][13]=a97;
  a98=24358218631252112.;
  a99=arg[0]? arg[0][9] : 0;
  a100=arg[0]? arg[0][93] : 0;
  a101=(a99+a100);
  a101=(a101/a3);
  a102=-1.3877787807814460e-17;
  a102=(a102*a6);
  a103=(a101*a102);
  a104=(a98*a103);
  a105=(a93*a104);
  a106=-4.6021926780173911e-01;
  a85=(a85-a84);
  a84=(a106*a85);
  a105=(a105+a84);
  a105=(a90*a105);
  a84=26445640661418040.;
  a103=(a84*a103);
  a107=(a86*a103);
  a108=4.3125046780173909e-01;
  a92=(a92-a91);
  a91=(a108*a92);
  a107=(a107+a91);
  a107=(a83*a107);
  a105=(a105-a107);
  a105=(a1*a105);
  if (res[0]!=0) res[0][14]=a105;
  a92=(a108*a92);
  a107=(a18*a92);
  a91=(a101*a86);
  a109=(a91*a18);
  a110=3.6700698954086952e-01;
  a110=(a110*a6);
  a109=(a109*a110);
  a107=(a107-a109);
  a90=(a90*a107);
  a107=(a101*a93);
  a109=3.3803818954086950e-01;
  a109=(a109*a6);
  a111=(a18*a109);
  a112=(a107*a111);
  a113=4.6021926780173911e-01;
  a85=(a113*a85);
  a114=(a18*a85);
  a112=(a112+a114);
  a83=(a83*a112);
  a90=(a90-a83);
  a90=(a1*a90);
  if (res[0]!=0) res[0][15]=a90;
  a83=cos(a2);
  a112=sin(a82);
  a114=(a93*a112);
  a115=(a114*a87);
  a82=cos(a82);
  a116=(a86*a82);
  a117=(a116*a87);
  a115=(a115+a117);
  a115=(a83*a115);
  a2=sin(a2);
  a117=(a101*a18);
  a116=(a116*a4);
  a117=(a117+a116);
  a114=(a114*a4);
  a117=(a117+a114);
  a117=(a117/a18);
  a117=(a117/a18);
  a117=(a117*a6);
  a87=(a101*a87);
  a117=(a117-a87);
  a117=(a2*a117);
  a115=(a115+a117);
  a115=(a1*a115);
  a115=(-a115);
  if (res[0]!=0) res[0][16]=a115;
  if (res[0]!=0) res[0][17]=a0;
  a117=(a86*a82);
  a87=(a93*a112);
  a117=(a117+a87);
  a117=(a117/a18);
  a117=(a117/a18);
  a117=(a117*a6);
  a117=(a2*a117);
  a117=(a1*a117);
  a117=(-a117);
  if (res[0]!=0) res[0][18]=a117;
  a87=arg[0]? arg[0][21] : 0;
  a114=arg[0]? arg[0][105] : 0;
  a87=(a87+a114);
  a87=(a87/a3);
  a114=arg[0]? arg[0][0] : 0;
  a116=arg[0]? arg[0][84] : 0;
  a114=(a114+a116);
  a114=(a114/a3);
  a116=(a87-a114);
  a118=(a116*a7);
  a119=arg[0]? arg[0][22] : 0;
  a120=arg[0]? arg[0][106] : 0;
  a119=(a119+a120);
  a119=(a119/a3);
  a120=arg[0]? arg[0][1] : 0;
  a121=arg[0]? arg[0][85] : 0;
  a120=(a120+a121);
  a120=(a120/a3);
  a121=(a119-a120);
  a122=(a121*a44);
  a118=(a118-a122);
  a122=arg[0]? arg[0][18] : 0;
  a123=arg[0]? arg[0][102] : 0;
  a122=(a122+a123);
  a122=(a122/a3);
  a123=(a122-a114);
  a124=(a123*a10);
  a118=(a118+a124);
  a124=arg[0]? arg[0][19] : 0;
  a125=arg[0]? arg[0][103] : 0;
  a124=(a124+a125);
  a124=(a124/a3);
  a125=(a124-a120);
  a126=(a125*a47);
  a118=(a118-a126);
  a126=arg[0]? arg[0][15] : 0;
  a127=arg[0]? arg[0][99] : 0;
  a126=(a126+a127);
  a126=(a126/a3);
  a127=(a126-a114);
  a128=(a127*a14);
  a118=(a118+a128);
  a128=arg[0]? arg[0][16] : 0;
  a129=arg[0]? arg[0][100] : 0;
  a128=(a128+a129);
  a128=(a128/a3);
  a129=(a128-a120);
  a130=(a129*a51);
  a118=(a118-a130);
  a130=arg[0]? arg[0][12] : 0;
  a131=arg[0]? arg[0][96] : 0;
  a130=(a130+a131);
  a130=(a130/a3);
  a131=(a130-a114);
  a132=(a131*a33);
  a118=(a118+a132);
  a132=arg[0]? arg[0][13] : 0;
  a133=arg[0]? arg[0][97] : 0;
  a132=(a132+a133);
  a132=(a132/a3);
  a133=(a132-a120);
  a134=(a133*a55);
  a118=(a118-a134);
  a118=(a83*a118);
  a134=(a120*a35);
  a135=(a114*a17);
  a136=(a134-a135);
  a137=(a119*a35);
  a136=(a136-a137);
  a137=(a87*a17);
  a136=(a136+a137);
  a20=(a136*a20);
  a137=arg[0]? arg[0][23] : 0;
  a138=arg[0]? arg[0][107] : 0;
  a137=(a137+a138);
  a137=(a137/a3);
  a138=arg[0]? arg[0][2] : 0;
  a139=arg[0]? arg[0][86] : 0;
  a138=(a138+a139);
  a138=(a138/a3);
  a137=(a137-a138);
  a7=(a137*a7);
  a139=(a35*a7);
  a20=(a20+a139);
  a44=(a137*a44);
  a139=(a17*a44);
  a20=(a20-a139);
  a139=(a134-a135);
  a140=(a124*a35);
  a139=(a139-a140);
  a140=(a122*a17);
  a139=(a139+a140);
  a23=(a139*a23);
  a20=(a20+a23);
  a23=arg[0]? arg[0][20] : 0;
  a140=arg[0]? arg[0][104] : 0;
  a23=(a23+a140);
  a23=(a23/a3);
  a23=(a23-a138);
  a10=(a23*a10);
  a140=(a35*a10);
  a20=(a20+a140);
  a47=(a23*a47);
  a140=(a17*a47);
  a20=(a20-a140);
  a140=(a134-a135);
  a141=(a128*a35);
  a140=(a140-a141);
  a141=(a126*a17);
  a140=(a140+a141);
  a27=(a140*a27);
  a20=(a20+a27);
  a27=arg[0]? arg[0][17] : 0;
  a141=arg[0]? arg[0][101] : 0;
  a27=(a27+a141);
  a27=(a27/a3);
  a27=(a27-a138);
  a14=(a27*a14);
  a141=(a35*a14);
  a20=(a20+a141);
  a51=(a27*a51);
  a141=(a17*a51);
  a20=(a20-a141);
  a134=(a134-a135);
  a135=(a132*a35);
  a134=(a134-a135);
  a135=(a130*a17);
  a134=(a134+a135);
  a30=(a134*a30);
  a20=(a20+a30);
  a30=arg[0]? arg[0][14] : 0;
  a135=arg[0]? arg[0][98] : 0;
  a30=(a30+a135);
  a30=(a30/a3);
  a30=(a30-a138);
  a33=(a30*a33);
  a138=(a35*a33);
  a20=(a20+a138);
  a55=(a30*a55);
  a138=(a17*a55);
  a20=(a20-a138);
  a20=(a2*a20);
  a118=(a118-a20);
  a118=(a1*a118);
  if (res[0]!=0) res[0][19]=a118;
  a20=(a93*a86);
  a138=-2.8968800000000020e-02;
  a138=(a138*a6);
  a20=(a20*a138);
  a3=-9.3212278260869572e-02;
  a100=(a100-a99);
  a100=(a3*a100);
  a20=(a20+a100);
  a83=(a83*a20);
  a107=(a107*a82);
  a107=(a107*a109);
  a110=(a112*a110);
  a91=(a91*a110);
  a107=(a107-a91);
  a85=(a82*a85);
  a107=(a107+a85);
  a92=(a112*a92);
  a107=(a107+a92);
  a2=(a2*a107);
  a83=(a83-a2);
  a83=(a1*a83);
  if (res[0]!=0) res[0][20]=a83;
  if (res[0]!=0) res[0][21]=a0;
  a2=cos(a16);
  a107=(a87*a21);
  a44=(a18*a44);
  a107=(a107-a44);
  a44=(a122*a24);
  a107=(a107+a44);
  a47=(a18*a47);
  a107=(a107-a47);
  a47=(a126*a28);
  a107=(a107+a47);
  a51=(a18*a51);
  a107=(a107-a51);
  a51=(a130*a31);
  a107=(a107+a51);
  a25=(a114*a25);
  a107=(a107-a25);
  a55=(a18*a55);
  a107=(a107-a55);
  a107=(a2*a107);
  a16=sin(a16);
  a7=(a18*a7);
  a55=(a119*a21);
  a7=(a7-a55);
  a55=(a124*a24);
  a7=(a7-a55);
  a10=(a18*a10);
  a7=(a7+a10);
  a10=(a128*a28);
  a7=(a7-a10);
  a14=(a18*a14);
  a7=(a7+a14);
  a14=(a132*a31);
  a7=(a7-a14);
  a53=(a120*a53);
  a7=(a7+a53);
  a33=(a18*a33);
  a7=(a7+a33);
  a7=(a16*a7);
  a107=(a107-a7);
  a107=(a1*a107);
  if (res[0]!=0) res[0][22]=a107;
  a7=(a119*a19);
  a5=(a137*a5);
  a7=(a7-a5);
  a5=(a124*a22);
  a7=(a7+a5);
  a9=(a23*a9);
  a7=(a7-a9);
  a9=(a128*a26);
  a7=(a7+a9);
  a13=(a27*a13);
  a7=(a7-a13);
  a13=(a132*a29);
  a7=(a7+a13);
  a57=(a120*a57);
  a7=(a7-a57);
  a32=(a30*a32);
  a7=(a7-a32);
  a2=(a2*a7);
  a7=(a87*a19);
  a43=(a137*a43);
  a7=(a7-a43);
  a43=(a122*a22);
  a7=(a7+a43);
  a46=(a23*a46);
  a7=(a7-a46);
  a46=(a126*a26);
  a7=(a7+a46);
  a50=(a27*a50);
  a7=(a7-a50);
  a50=(a130*a29);
  a7=(a7+a50);
  a36=(a114*a36);
  a7=(a7-a36);
  a54=(a30*a54);
  a7=(a7-a54);
  a16=(a16*a7);
  a2=(a2-a16);
  a2=(a1*a2);
  if (res[0]!=0) res[0][23]=a2;
  a16=(-a6);
  if (res[0]!=0) res[0][24]=a16;
  if (res[0]!=0) res[0][25]=a0;
  a16=(-a6);
  if (res[0]!=0) res[0][26]=a16;
  if (res[0]!=0) res[0][27]=a0;
  a16=(-a6);
  if (res[0]!=0) res[0][28]=a16;
  if (res[0]!=0) res[0][29]=a0;
  a16=(a1*a6);
  a16=(-a16);
  if (res[0]!=0) res[0][30]=a16;
  if (res[0]!=0) res[0][31]=a3;
  a7=(a86*a82);
  a84=(a84*a7);
  a7=(a93*a112);
  a98=(a98*a7);
  a84=(a84+a98);
  a84=(a84*a102);
  a84=(a1*a84);
  if (res[0]!=0) res[0][32]=a84;
  a111=(a82*a111);
  a102=(a93*a111);
  a110=(a18*a110);
  a98=(a86*a110);
  a102=(a102-a98);
  a102=(a1*a102);
  a3=(a3*a4);
  a98=(a102-a3);
  if (res[0]!=0) res[0][33]=a98;
  a94=(a112*a94);
  a94=(a1*a94);
  a94=(-a94);
  if (res[0]!=0) res[0][34]=a94;
  a98=(a82*a6);
  a98=(a1*a98);
  a98=(-a98);
  if (res[0]!=0) res[0][35]=a98;
  a7=(a112*a96);
  a7=(a1*a7);
  a7=(-a7);
  if (res[0]!=0) res[0][36]=a7;
  a54=2.8968800000000020e-02;
  a54=(a54*a6);
  a36=(a86*a54);
  a36=(a1*a36);
  if (res[0]!=0) res[0][37]=a36;
  a104=(a112*a104);
  a104=(a1*a104);
  a50=(a108*a82);
  a46=(a104-a50);
  if (res[0]!=0) res[0][38]=a46;
  a111=(a101*a111);
  a138=(a4*a138);
  a86=(a86*a138);
  a111=(a111+a86);
  a111=(a1*a111);
  a86=(a18*a112);
  a108=(a108*a86);
  a86=(a111-a108);
  if (res[0]!=0) res[0][39]=a86;
  a88=(a82*a88);
  a88=(a1*a88);
  a88=(-a88);
  if (res[0]!=0) res[0][40]=a88;
  a86=(a112*a6);
  a86=(a1*a86);
  if (res[0]!=0) res[0][41]=a86;
  a96=(a82*a96);
  a96=(a1*a96);
  a96=(-a96);
  if (res[0]!=0) res[0][42]=a96;
  a54=(a93*a54);
  a54=(a1*a54);
  if (res[0]!=0) res[0][43]=a54;
  a103=(a82*a103);
  a103=(a1*a103);
  a106=(a106*a112);
  a112=(a103-a106);
  if (res[0]!=0) res[0][44]=a112;
  a93=(a93*a138);
  a101=(a101*a110);
  a93=(a93-a101);
  a93=(a1*a93);
  a82=(a82*a18);
  a113=(a113*a82);
  a82=(a93-a113);
  if (res[0]!=0) res[0][45]=a82;
  a82=(a17*a31);
  a82=(a82+a34);
  a82=(a1*a82);
  if (res[0]!=0) res[0][46]=a82;
  a34=(a35*a29);
  a34=(a1*a34);
  if (res[0]!=0) res[0][47]=a34;
  a42=(a1*a42);
  a42=(-a42);
  if (res[0]!=0) res[0][48]=a42;
  if (res[0]!=0) res[0][49]=a0;
  a31=(a35*a31);
  a31=(a31+a56);
  a31=(a1*a31);
  a31=(-a31);
  if (res[0]!=0) res[0][50]=a31;
  a29=(a17*a29);
  a29=(a1*a29);
  if (res[0]!=0) res[0][51]=a29;
  a63=(a1*a63);
  if (res[0]!=0) res[0][52]=a63;
  if (res[0]!=0) res[0][53]=a0;
  a75=(a1*a75);
  if (res[0]!=0) res[0][54]=a75;
  a81=(a1*a81);
  a81=(-a81);
  if (res[0]!=0) res[0][55]=a81;
  if (res[0]!=0) res[0][56]=a0;
  a56=(a17*a28);
  a56=(a56+a15);
  a56=(a1*a56);
  if (res[0]!=0) res[0][57]=a56;
  a15=(a35*a26);
  a15=(a1*a15);
  if (res[0]!=0) res[0][58]=a15;
  a41=(a1*a41);
  a41=(-a41);
  if (res[0]!=0) res[0][59]=a41;
  if (res[0]!=0) res[0][60]=a0;
  a28=(a35*a28);
  a28=(a28+a52);
  a28=(a1*a28);
  a28=(-a28);
  if (res[0]!=0) res[0][61]=a28;
  a26=(a17*a26);
  a26=(a1*a26);
  if (res[0]!=0) res[0][62]=a26;
  a62=(a1*a62);
  if (res[0]!=0) res[0][63]=a62;
  if (res[0]!=0) res[0][64]=a0;
  a72=(a1*a72);
  if (res[0]!=0) res[0][65]=a72;
  a80=(a1*a80);
  a80=(-a80);
  if (res[0]!=0) res[0][66]=a80;
  if (res[0]!=0) res[0][67]=a0;
  a52=(a17*a24);
  a52=(a52+a11);
  a52=(a1*a52);
  if (res[0]!=0) res[0][68]=a52;
  a11=(a35*a22);
  a11=(a1*a11);
  if (res[0]!=0) res[0][69]=a11;
  a39=(a1*a39);
  a39=(-a39);
  if (res[0]!=0) res[0][70]=a39;
  if (res[0]!=0) res[0][71]=a0;
  a24=(a35*a24);
  a24=(a24+a48);
  a24=(a1*a24);
  a24=(-a24);
  if (res[0]!=0) res[0][72]=a24;
  a22=(a17*a22);
  a22=(a1*a22);
  if (res[0]!=0) res[0][73]=a22;
  a60=(a1*a60);
  if (res[0]!=0) res[0][74]=a60;
  if (res[0]!=0) res[0][75]=a0;
  a68=(a1*a68);
  if (res[0]!=0) res[0][76]=a68;
  a78=(a1*a78);
  a78=(-a78);
  if (res[0]!=0) res[0][77]=a78;
  if (res[0]!=0) res[0][78]=a0;
  a48=(a17*a21);
  a48=(a48+a8);
  a48=(a1*a48);
  if (res[0]!=0) res[0][79]=a48;
  a8=(a35*a19);
  a8=(a1*a8);
  if (res[0]!=0) res[0][80]=a8;
  a38=(a1*a38);
  a38=(-a38);
  if (res[0]!=0) res[0][81]=a38;
  if (res[0]!=0) res[0][82]=a0;
  a21=(a35*a21);
  a21=(a21+a45);
  a21=(a1*a21);
  a21=(-a21);
  if (res[0]!=0) res[0][83]=a21;
  a19=(a17*a19);
  a19=(a1*a19);
  if (res[0]!=0) res[0][84]=a19;
  a59=(a1*a59);
  if (res[0]!=0) res[0][85]=a59;
  if (res[0]!=0) res[0][86]=a0;
  a65=(a1*a65);
  if (res[0]!=0) res[0][87]=a65;
  a77=(a1*a77);
  a77=(-a77);
  if (res[0]!=0) res[0][88]=a77;
  if (res[0]!=0) res[0][89]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][90]=a45;
  if (res[0]!=0) res[0][91]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][92]=a45;
  if (res[0]!=0) res[0][93]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][94]=a45;
  if (res[0]!=0) res[0][95]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][96]=a45;
  if (res[0]!=0) res[0][97]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][98]=a45;
  if (res[0]!=0) res[0][99]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][100]=a45;
  if (res[0]!=0) res[0][101]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][102]=a45;
  if (res[0]!=0) res[0][103]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][104]=a45;
  if (res[0]!=0) res[0][105]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][106]=a45;
  if (res[0]!=0) res[0][107]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][108]=a45;
  if (res[0]!=0) res[0][109]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][110]=a45;
  if (res[0]!=0) res[0][111]=a0;
  a45=(-a6);
  if (res[0]!=0) res[0][112]=a45;
  if (res[0]!=0) res[0][113]=a0;
  a45=7.5187969924812026e-02;
  a101=casadi_sq(a6);
  a110=(a1*a101);
  a110=(a45*a110);
  a110=(-a110);
  if (res[0]!=0) res[0][114]=a110;
  a138=(a45*a6);
  a138=(-a138);
  if (res[0]!=0) res[0][115]=a138;
  a133=(a4*a133);
  a76=(a76*a30);
  a133=(a133+a76);
  a133=(a133*a6);
  a133=(-a133);
  if (res[0]!=0) res[0][116]=a133;
  a133=(a35*a30);
  a133=(a133*a6);
  a133=(-a133);
  if (res[0]!=0) res[0][117]=a133;
  a133=(a120-a132);
  a133=(a133*a6);
  a133=(-a133);
  if (res[0]!=0) res[0][118]=a133;
  a133=1.;
  if (res[0]!=0) res[0][119]=a133;
  if (res[0]!=0) res[0][120]=a0;
  a76=(a1*a101);
  a76=(a45*a76);
  a76=(-a76);
  if (res[0]!=0) res[0][121]=a76;
  a112=(a45*a6);
  a112=(-a112);
  if (res[0]!=0) res[0][122]=a112;
  a46=(a4*a131);
  a74=(a74*a30);
  a46=(a46+a74);
  a46=(a46*a6);
  if (res[0]!=0) res[0][123]=a46;
  a30=(a17*a30);
  a30=(a30*a6);
  a30=(-a30);
  if (res[0]!=0) res[0][124]=a30;
  a131=(a131*a6);
  a131=(-a131);
  if (res[0]!=0) res[0][125]=a131;
  if (res[0]!=0) res[0][126]=a133;
  if (res[0]!=0) res[0][127]=a0;
  a101=(a1*a101);
  a101=(a45*a101);
  a101=(-a101);
  if (res[0]!=0) res[0][128]=a101;
  a45=(a45*a6);
  a45=(-a45);
  if (res[0]!=0) res[0][129]=a45;
  a134=(a18*a134);
  a134=(a134*a6);
  if (res[0]!=0) res[0][130]=a134;
  a114=(a114*a35);
  a134=(a120*a17);
  a131=(a114+a134);
  a130=(a130*a35);
  a131=(a131-a130);
  a132=(a132*a17);
  a131=(a131-a132);
  a131=(a131*a6);
  a131=(-a131);
  if (res[0]!=0) res[0][131]=a131;
  a131=arg[1]? arg[1][1] : 0;
  a132=(-a131);
  if (res[0]!=0) res[0][132]=a132;
  a132=(-a131);
  if (res[0]!=0) res[0][133]=a132;
  a132=(-a131);
  if (res[0]!=0) res[0][134]=a132;
  a132=(-a131);
  if (res[0]!=0) res[0][135]=a132;
  if (res[0]!=0) res[0][136]=a110;
  if (res[0]!=0) res[0][137]=a138;
  a129=(a4*a129);
  a73=(a73*a27);
  a129=(a129+a73);
  a129=(a129*a6);
  a129=(-a129);
  if (res[0]!=0) res[0][138]=a129;
  a129=(a35*a27);
  a129=(a129*a6);
  a129=(-a129);
  if (res[0]!=0) res[0][139]=a129;
  a129=(a120-a128);
  a129=(a129*a6);
  a129=(-a129);
  if (res[0]!=0) res[0][140]=a129;
  if (res[0]!=0) res[0][141]=a133;
  if (res[0]!=0) res[0][142]=a0;
  if (res[0]!=0) res[0][143]=a76;
  if (res[0]!=0) res[0][144]=a112;
  a129=(a4*a127);
  a71=(a71*a27);
  a129=(a129+a71);
  a129=(a129*a6);
  if (res[0]!=0) res[0][145]=a129;
  a27=(a17*a27);
  a27=(a27*a6);
  a27=(-a27);
  if (res[0]!=0) res[0][146]=a27;
  a127=(a127*a6);
  a127=(-a127);
  if (res[0]!=0) res[0][147]=a127;
  if (res[0]!=0) res[0][148]=a133;
  if (res[0]!=0) res[0][149]=a0;
  if (res[0]!=0) res[0][150]=a101;
  if (res[0]!=0) res[0][151]=a45;
  a140=(a18*a140);
  a140=(a140*a6);
  if (res[0]!=0) res[0][152]=a140;
  a140=(a114+a134);
  a126=(a126*a35);
  a140=(a140-a126);
  a128=(a128*a17);
  a140=(a140-a128);
  a140=(a140*a6);
  a140=(-a140);
  if (res[0]!=0) res[0][153]=a140;
  a140=(-a131);
  if (res[0]!=0) res[0][154]=a140;
  a140=(-a131);
  if (res[0]!=0) res[0][155]=a140;
  a140=(-a131);
  if (res[0]!=0) res[0][156]=a140;
  a140=(-a131);
  if (res[0]!=0) res[0][157]=a140;
  if (res[0]!=0) res[0][158]=a110;
  if (res[0]!=0) res[0][159]=a138;
  a125=(a4*a125);
  a69=(a69*a23);
  a125=(a125+a69);
  a125=(a125*a6);
  a125=(-a125);
  if (res[0]!=0) res[0][160]=a125;
  a125=(a35*a23);
  a125=(a125*a6);
  a125=(-a125);
  if (res[0]!=0) res[0][161]=a125;
  a125=(a120-a124);
  a125=(a125*a6);
  a125=(-a125);
  if (res[0]!=0) res[0][162]=a125;
  if (res[0]!=0) res[0][163]=a133;
  if (res[0]!=0) res[0][164]=a0;
  if (res[0]!=0) res[0][165]=a76;
  if (res[0]!=0) res[0][166]=a112;
  a125=(a4*a123);
  a67=(a67*a23);
  a125=(a125+a67);
  a125=(a125*a6);
  if (res[0]!=0) res[0][167]=a125;
  a23=(a17*a23);
  a23=(a23*a6);
  a23=(-a23);
  if (res[0]!=0) res[0][168]=a23;
  a123=(a123*a6);
  a123=(-a123);
  if (res[0]!=0) res[0][169]=a123;
  if (res[0]!=0) res[0][170]=a133;
  if (res[0]!=0) res[0][171]=a0;
  if (res[0]!=0) res[0][172]=a101;
  if (res[0]!=0) res[0][173]=a45;
  a139=(a18*a139);
  a139=(a139*a6);
  if (res[0]!=0) res[0][174]=a139;
  a139=(a114+a134);
  a122=(a122*a35);
  a139=(a139-a122);
  a124=(a124*a17);
  a139=(a139-a124);
  a139=(a139*a6);
  a139=(-a139);
  if (res[0]!=0) res[0][175]=a139;
  a139=(-a131);
  if (res[0]!=0) res[0][176]=a139;
  a139=(-a131);
  if (res[0]!=0) res[0][177]=a139;
  a139=(-a131);
  if (res[0]!=0) res[0][178]=a139;
  a139=(-a131);
  if (res[0]!=0) res[0][179]=a139;
  if (res[0]!=0) res[0][180]=a110;
  if (res[0]!=0) res[0][181]=a138;
  a121=(a4*a121);
  a66=(a66*a137);
  a121=(a121+a66);
  a121=(a121*a6);
  a121=(-a121);
  if (res[0]!=0) res[0][182]=a121;
  a121=(a35*a137);
  a121=(a121*a6);
  a121=(-a121);
  if (res[0]!=0) res[0][183]=a121;
  a120=(a120-a119);
  a120=(a120*a6);
  a120=(-a120);
  if (res[0]!=0) res[0][184]=a120;
  if (res[0]!=0) res[0][185]=a133;
  if (res[0]!=0) res[0][186]=a0;
  if (res[0]!=0) res[0][187]=a76;
  if (res[0]!=0) res[0][188]=a112;
  a4=(a4*a116);
  a64=(a64*a137);
  a4=(a4+a64);
  a4=(a4*a6);
  if (res[0]!=0) res[0][189]=a4;
  a137=(a17*a137);
  a137=(a137*a6);
  a137=(-a137);
  if (res[0]!=0) res[0][190]=a137;
  a116=(a116*a6);
  a116=(-a116);
  if (res[0]!=0) res[0][191]=a116;
  if (res[0]!=0) res[0][192]=a133;
  if (res[0]!=0) res[0][193]=a0;
  if (res[0]!=0) res[0][194]=a101;
  if (res[0]!=0) res[0][195]=a45;
  a18=(a18*a136);
  a18=(a18*a6);
  if (res[0]!=0) res[0][196]=a18;
  a114=(a114+a134);
  a87=(a87*a35);
  a114=(a114-a87);
  a119=(a119*a17);
  a114=(a114-a119);
  a114=(a114*a6);
  a114=(-a114);
  if (res[0]!=0) res[0][197]=a114;
  a114=(-a131);
  if (res[0]!=0) res[0][198]=a114;
  a114=(-a131);
  if (res[0]!=0) res[0][199]=a114;
  a114=(-a131);
  if (res[0]!=0) res[0][200]=a114;
  a131=(-a131);
  if (res[0]!=0) res[0][201]=a131;
  a131=100.;
  a114=casadi_sq(a6);
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][202]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][203]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][204]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][205]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][206]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][207]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][208]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][209]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][210]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][211]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][212]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][213]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][214]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][215]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][216]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][217]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][218]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][219]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][220]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][221]=a119;
  a119=(a1*a114);
  a119=(a131*a119);
  a119=(-a119);
  if (res[0]!=0) res[0][222]=a119;
  a119=(a131*a6);
  a119=(-a119);
  if (res[0]!=0) res[0][223]=a119;
  a1=(a1*a114);
  a1=(a131*a1);
  a1=(-a1);
  if (res[0]!=0) res[0][224]=a1;
  a131=(a131*a6);
  a131=(-a131);
  if (res[0]!=0) res[0][225]=a131;
  if (res[0]!=0) res[0][226]=a133;
  if (res[0]!=0) res[0][227]=a12;
  if (res[0]!=0) res[0][228]=a37;
  if (res[0]!=0) res[0][229]=a40;
  if (res[0]!=0) res[0][230]=a133;
  if (res[0]!=0) res[0][231]=a49;
  if (res[0]!=0) res[0][232]=a58;
  if (res[0]!=0) res[0][233]=a61;
  if (res[0]!=0) res[0][234]=a133;
  if (res[0]!=0) res[0][235]=a70;
  if (res[0]!=0) res[0][236]=a79;
  a89=(a89+a133);
  if (res[0]!=0) res[0][237]=a89;
  if (res[0]!=0) res[0][238]=a95;
  if (res[0]!=0) res[0][239]=a97;
  if (res[0]!=0) res[0][240]=a105;
  if (res[0]!=0) res[0][241]=a90;
  if (res[0]!=0) res[0][242]=a115;
  if (res[0]!=0) res[0][243]=a133;
  if (res[0]!=0) res[0][244]=a117;
  if (res[0]!=0) res[0][245]=a118;
  if (res[0]!=0) res[0][246]=a83;
  if (res[0]!=0) res[0][247]=a133;
  if (res[0]!=0) res[0][248]=a107;
  if (res[0]!=0) res[0][249]=a2;
  if (res[0]!=0) res[0][250]=a133;
  if (res[0]!=0) res[0][251]=a133;
  if (res[0]!=0) res[0][252]=a133;
  if (res[0]!=0) res[0][253]=a16;
  a16=9.3212278260869572e-02;
  if (res[0]!=0) res[0][254]=a16;
  if (res[0]!=0) res[0][255]=a84;
  a3=(a3+a102);
  if (res[0]!=0) res[0][256]=a3;
  if (res[0]!=0) res[0][257]=a94;
  if (res[0]!=0) res[0][258]=a98;
  if (res[0]!=0) res[0][259]=a7;
  if (res[0]!=0) res[0][260]=a36;
  a50=(a50+a104);
  if (res[0]!=0) res[0][261]=a50;
  a108=(a108+a111);
  if (res[0]!=0) res[0][262]=a108;
  if (res[0]!=0) res[0][263]=a88;
  if (res[0]!=0) res[0][264]=a86;
  if (res[0]!=0) res[0][265]=a96;
  if (res[0]!=0) res[0][266]=a54;
  a106=(a106+a103);
  if (res[0]!=0) res[0][267]=a106;
  a113=(a113+a93);
  if (res[0]!=0) res[0][268]=a113;
  if (res[0]!=0) res[0][269]=a82;
  if (res[0]!=0) res[0][270]=a34;
  if (res[0]!=0) res[0][271]=a42;
  if (res[0]!=0) res[0][272]=a133;
  if (res[0]!=0) res[0][273]=a31;
  if (res[0]!=0) res[0][274]=a29;
  if (res[0]!=0) res[0][275]=a63;
  if (res[0]!=0) res[0][276]=a133;
  if (res[0]!=0) res[0][277]=a75;
  if (res[0]!=0) res[0][278]=a81;
  if (res[0]!=0) res[0][279]=a133;
  if (res[0]!=0) res[0][280]=a56;
  if (res[0]!=0) res[0][281]=a15;
  if (res[0]!=0) res[0][282]=a41;
  if (res[0]!=0) res[0][283]=a133;
  if (res[0]!=0) res[0][284]=a28;
  if (res[0]!=0) res[0][285]=a26;
  if (res[0]!=0) res[0][286]=a62;
  if (res[0]!=0) res[0][287]=a133;
  if (res[0]!=0) res[0][288]=a72;
  if (res[0]!=0) res[0][289]=a80;
  if (res[0]!=0) res[0][290]=a133;
  if (res[0]!=0) res[0][291]=a52;
  if (res[0]!=0) res[0][292]=a11;
  if (res[0]!=0) res[0][293]=a39;
  if (res[0]!=0) res[0][294]=a133;
  if (res[0]!=0) res[0][295]=a24;
  if (res[0]!=0) res[0][296]=a22;
  if (res[0]!=0) res[0][297]=a60;
  if (res[0]!=0) res[0][298]=a133;
  if (res[0]!=0) res[0][299]=a68;
  if (res[0]!=0) res[0][300]=a78;
  if (res[0]!=0) res[0][301]=a133;
  if (res[0]!=0) res[0][302]=a48;
  if (res[0]!=0) res[0][303]=a8;
  if (res[0]!=0) res[0][304]=a38;
  if (res[0]!=0) res[0][305]=a133;
  if (res[0]!=0) res[0][306]=a21;
  if (res[0]!=0) res[0][307]=a19;
  if (res[0]!=0) res[0][308]=a59;
  if (res[0]!=0) res[0][309]=a133;
  if (res[0]!=0) res[0][310]=a65;
  if (res[0]!=0) res[0][311]=a77;
  if (res[0]!=0) res[0][312]=a133;
  if (res[0]!=0) res[0][313]=a133;
  if (res[0]!=0) res[0][314]=a133;
  if (res[0]!=0) res[0][315]=a133;
  if (res[0]!=0) res[0][316]=a133;
  if (res[0]!=0) res[0][317]=a133;
  if (res[0]!=0) res[0][318]=a133;
  if (res[0]!=0) res[0][319]=a133;
  if (res[0]!=0) res[0][320]=a133;
  if (res[0]!=0) res[0][321]=a133;
  if (res[0]!=0) res[0][322]=a133;
  if (res[0]!=0) res[0][323]=a133;
  if (res[0]!=0) res[0][324]=a133;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_complex_to_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_complex_to_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_complex_to_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_complex_to_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_complex_to_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_complex_to_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_complex_to_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_complex_to_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_jac_g_leg_complex_to_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_jac_g_leg_complex_to_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_jac_g_leg_complex_to_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_jac_g_leg_complex_to_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_jac_g_leg_complex_to_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "jac_g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_jac_g_leg_complex_to_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_jac_g_leg_complex_to_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_complex_to_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


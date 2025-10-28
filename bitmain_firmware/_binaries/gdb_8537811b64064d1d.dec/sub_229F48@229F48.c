int __fastcall sub_229F48(
        int a1,
        unsigned int a2,
        const char *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int *a11)
{
  _DWORD *v14; // r0
  int v15; // r6
  _DWORD *v16; // r0
  char *v17; // r4
  _DWORD *v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  char *v21; // r4
  _DWORD *v22; // r0
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r0
  _DWORD *v28; // r0
  char *v29; // r4
  _DWORD *v30; // r0
  int v31; // r0
  _DWORD *v32; // r0
  char *v33; // r4
  _DWORD *v34; // r0
  int v35; // r0
  _DWORD *v36; // r0
  char *v37; // r4
  _DWORD *v38; // r0
  int v39; // r0
  _DWORD *v40; // r0
  char *v41; // r4
  _DWORD *v42; // r0
  int v43; // r0
  _DWORD *v44; // r0
  char *v45; // r4
  _DWORD *v46; // r0
  int v47; // r0
  _DWORD *v48; // r0
  char *v49; // r4
  _DWORD *v50; // r0
  int v51; // r0
  _DWORD *v52; // r0

  v14 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v14, "-> %s->to_xfer_partial (...)\n", (const char *)dword_489C90);
  v15 = ((int (__fastcall *)(void *, unsigned int, const char *, int, int))off_489E10)(&unk_489C8C, a2, a3, a4, a5);
  v16 = (_DWORD *)sub_242FF0(v15);
  sub_2594D8(*v16, "<- %s->to_xfer_partial (", (const char *)dword_489C90);
  v17 = sub_98F14((int)&unk_489C8C);
  v18 = (_DWORD *)sub_242FF0(v17);
  v19 = sub_256878(v17, *v18);
  v20 = (_DWORD *)sub_242FF0(v19);
  sub_256878(", ", *v20);
  v21 = sub_988D4(a2);
  v22 = (_DWORD *)sub_242FF0(v21);
  v23 = sub_256878(v21, *v22);
  v24 = (_DWORD *)sub_242FF0(v23);
  v25 = sub_256878(", ", *v24);
  if ( !a3 )
    a3 = "(null)";
  v26 = (_DWORD *)sub_242FF0(v25);
  v27 = sub_256878(a3, *v26);
  v28 = (_DWORD *)sub_242FF0(v27);
  sub_256878(", ", *v28);
  v29 = sub_98F14(a4);
  v30 = (_DWORD *)sub_242FF0(v29);
  v31 = sub_256878(v29, *v30);
  v32 = (_DWORD *)sub_242FF0(v31);
  sub_256878(", ", *v32);
  v33 = sub_98F14(a5);
  v34 = (_DWORD *)sub_242FF0(v33);
  v35 = sub_256878(v33, *v34);
  v36 = (_DWORD *)sub_242FF0(v35);
  sub_256878(", ", *v36);
  v37 = sub_98B30(a7, a8);
  v38 = (_DWORD *)sub_242FF0(v37);
  v39 = sub_256878(v37, *v38);
  v40 = (_DWORD *)sub_242FF0(v39);
  sub_256878(", ", *v40);
  v41 = sub_98B30(a9, a10);
  v42 = (_DWORD *)sub_242FF0(v41);
  v43 = sub_256878(v41, *v42);
  v44 = (_DWORD *)sub_242FF0(v43);
  sub_256878(", ", *v44);
  v45 = sub_98B30(*a11, a11[1]);
  v46 = (_DWORD *)sub_242FF0(v45);
  v47 = sub_256878(v45, *v46);
  v48 = (_DWORD *)sub_242FF0(v47);
  sub_256878(") = ", *v48);
  v49 = sub_988D4(v15);
  v50 = (_DWORD *)sub_242FF0(v49);
  v51 = sub_256878(v49, *v50);
  v52 = (_DWORD *)sub_242FF0(v51);
  sub_256878(&word_356660, *v52);
  return v15;
}

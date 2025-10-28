void **__fastcall sub_19B5C0(void **a1, int a2, int a3)
{
  int v3; // r7
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r5
  void *v10; // r0
  void *v11; // r1
  void *v12; // r2
  bool v13; // zf
  void *v14; // r0
  int v16; // r8
  int v17; // r7
  void *v18; // r10
  int v19; // r0
  int v20; // r9
  int v21; // r1
  int v22; // r3
  char *v23; // r0
  void *v24; // r0
  void *v25; // r1
  void *v26; // r2
  void *v27; // r7
  int v28; // r0
  void *v29; // r0
  void *v30; // r1
  void *v31; // r2
  void *v32; // r0
  __int64 v33; // kr00_8
  int *v34; // r0
  int v35; // [sp+10h] [bp-50h] BYREF
  void *v36; // [sp+14h] [bp-4Ch] BYREF
  void *v37; // [sp+18h] [bp-48h]
  void *v38; // [sp+1Ch] [bp-44h]
  void *ptr; // [sp+20h] [bp-40h] BYREF
  void *v40; // [sp+24h] [bp-3Ch]
  void *v41; // [sp+28h] [bp-38h]
  void *v42; // [sp+2Ch] [bp-34h] BYREF
  void *v43; // [sp+30h] [bp-30h]
  void *v44; // [sp+34h] [bp-2Ch]
  int v45[7]; // [sp+38h] [bp-28h] BYREF
  char v46; // [sp+54h] [bp-Ch]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  switch ( sub_19CC98(a3) )
  {
    case 0:
      *(_DWORD *)(a2 + 64) = 1;
      v27 = sub_92E50();
      v28 = sub_19CD30(a3);
      sub_19A708((int)&v36, a2, *(const char **)(v28 + 4), *(int **)v28);
      v29 = *a1;
      v30 = v37;
      v31 = v38;
      v13 = *a1 == 0;
      *a1 = v36;
      v36 = 0;
      a1[1] = v30;
      a1[2] = v31;
      v37 = 0;
      v38 = 0;
      if ( !v13 )
      {
        sub_339E8C(v29);
        if ( v36 )
          sub_339E8C(v36);
      }
      sub_92E68((int)v27);
      return a1;
    case 1:
      v16 = ((int (__fastcall *)(int))loc_19CE10)(a3);
      v17 = ((int (__fastcall *)(int))loc_19CDC8)(a3);
      if ( v16 )
      {
        v45[0] = sub_32727C(v16);
        v18 = sub_92564(1659928, v45[0]);
        v19 = sub_199278(v45);
        v20 = *(_DWORD *)(a2 + 52);
        v17 = v19;
        if ( v20 )
        {
          ((void (__fastcall *)(int *, int))loc_19CF8C)(&v35, a3);
          v21 = *(_DWORD *)(v20 + 4);
          v22 = v35;
          v35 = 0;
          *(_DWORD *)(v20 + 4) = v22;
          if ( v21 )
          {
            ((void (__fastcall *)(int))loc_19D17C)(v20 + 4);
            if ( v35 )
              ((void (__fastcall *)(int *))loc_19D17C)(&v35);
          }
        }
        sub_92648(v18);
      }
      sub_21DED4(v45, v17);
      v45[5] = v17;
      v45[3] = sub_214860(v17);
      v46 = 1;
      ptr = 0;
      v40 = 0;
      v41 = 0;
      v23 = sub_98E44(v17);
      sub_19935C(a2 + 24, (int)&ptr, v45, v23, 1);
      v24 = *a1;
      v25 = v40;
      v26 = v41;
      v13 = *a1 == 0;
      *a1 = ptr;
      ptr = 0;
      a1[1] = v25;
      a1[2] = v26;
      v40 = 0;
      v41 = 0;
      if ( !v13 )
      {
        sub_339E8C(v24);
        v14 = ptr;
        if ( ptr )
          goto LABEL_13;
      }
      return a1;
    case 2:
      v7 = ((int (__fastcall *)(int))loc_19CF2C)(a3);
      v8 = (_DWORD *)(a2 + 24);
      v9 = a2 + 68;
      sub_198B80(
        v8,
        v9,
        *(const char **)v7,
        *(char **)(v7 + 4),
        *(_DWORD *)(v7 + 8),
        *(const char **)(v7 + 12),
        *(unsigned int **)(v7 + 16),
        *(unsigned int **)(v7 + 20));
      sub_199694(&v42, v8, v9);
      v10 = *a1;
      v11 = v43;
      v12 = v44;
      v13 = *a1 == 0;
      *a1 = v42;
      v42 = 0;
      a1[1] = v11;
      a1[2] = v12;
      v43 = 0;
      v44 = 0;
      if ( v13 )
        return a1;
      sub_339E8C(v10);
      v14 = v42;
      if ( !v42 )
        return a1;
LABEL_13:
      sub_339E8C(v14);
      return a1;
    case 3:
      sub_94728(
        (int)"linespec.c",
        3257,
        "%s: %s",
        "std::vector<symtab_and_line> event_location_to_sals(linespec_parser*, const event_location*)",
        "attempt to decode probe location");
      v32 = *a1;
      if ( *a1 )
        sub_339E8C(v32);
      sub_339024(v32);
    default:
      v33 = sub_94728(
              (int)"linespec.c",
              3261,
              "%s: %s",
              "std::vector<symtab_and_line> event_location_to_sals(linespec_parser*, const event_location*)",
              "unhandled event location type");
      sub_92E68(v3);
      if ( HIDWORD(v33) == 1 )
      {
        v34 = (int *)sub_339EA0(v33);
        sub_92F44(*v34, v34[1], v34[2]);
      }
      sub_339EA0(v33);
      sub_92E88();
  }
}

int __fastcall sub_161A60(int a1, int (__fastcall *a2)(int, int), int a3)
{
  _DWORD *v4; // r6
  unsigned int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r4
  unsigned int v8; // r3
  _DWORD *v9; // r3
  int v10; // r2
  int v11; // r9
  int v12; // r8
  int v13; // r11
  int v14; // r0
  int result; // r0
  int v16; // r0
  int v17; // r4
  int v18; // r4
  unsigned int v19; // r5
  int v20; // r2
  int v21; // r4
  int v22; // r0
  __int64 v23; // r0
  int v24; // r0
  unsigned int v25; // r0
  int v26; // r4
  unsigned int v27; // r6
  int v28; // r5
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // r2
  __int64 v33; // r0
  int v35; // [sp+1Ch] [bp-10h] BYREF
  _DWORD v36[3]; // [sp+20h] [bp-Ch] BYREF

  v4 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v4 )
  {
LABEL_14:
    v16 = sub_22EAE8();
    if ( !v16 )
      goto LABEL_15;
    goto LABEL_36;
  }
  while ( 2 )
  {
    v5 = v4[43];
    while ( 1 )
    {
      v6 = v4[42];
      if ( v6 < v5 )
      {
        v7 = v6 + 12;
        while ( 1 )
        {
          v9 = *(_DWORD **)(v7 - 12);
          v5 = v7;
          if ( v9 )
          {
            if ( !v4[45] && (v9[5] & 3) != 0 )
            {
              v10 = *(_DWORD *)(v7 - 8);
              v11 = v9[9];
              v12 = v9[7];
              v13 = *(_DWORD *)(v10 + 144);
              v14 = sub_163004(*(_DWORD *)(v10 + 36), *(_DWORD *)(v7 - 12));
              result = a2(v12 + *(_DWORD *)(v13 + 4 * v14), v11);
              if ( result )
                return result;
            }
          }
          v8 = v4[43];
          v7 += 12;
          if ( v8 <= v5 )
            goto LABEL_12;
        }
      }
      v8 = v5;
      v5 = v4[42];
LABEL_12:
      if ( v5 == v8 )
        break;
      if ( v4[43] != v5 )
        goto LABEL_14;
    }
    v4 = (_DWORD *)*v4;
    if ( v4 )
      continue;
    break;
  }
  v16 = sub_22EAE8();
  if ( v16 )
  {
LABEL_36:
    v16 = sub_22EB34(v16);
    if ( v16 )
    {
      v16 = sub_15F734(v16);
      v26 = v16;
      if ( v16 )
      {
        v27 = sub_15D8A0(v16);
        v28 = sub_15ECDC(v26);
        v29 = sub_160418(v26);
        if ( ((int (__fastcall *)(int, int, unsigned int))loc_169034)(v28, v29, v27) )
          v27 = sub_160418(v26);
        while ( 1 )
        {
          v30 = ((int (__fastcall *)(int))loc_15FAB0)(v26);
          if ( !v30 )
            break;
          v26 = v30;
        }
        v31 = sub_15D8A0(v26);
        v32 = v31;
        if ( v31 > v27 )
          v31 = v27;
        else
          v32 = v27;
        v16 = ((int (__fastcall *)(unsigned int, unsigned int, int, int, _DWORD, int, int))a2)(
                v31,
                v32 - v31,
                1,
                1,
                0,
                1,
                a3);
      }
    }
  }
LABEL_15:
  v17 = *(_DWORD *)(dword_487D2C + 8);
  if ( !sub_22EBE4(v16) )
    return 0;
  v18 = *(_DWORD *)(v17 + 100);
  if ( v18 )
  {
    v19 = 0;
    do
    {
      if ( (*(_DWORD *)(v18 + 20) & 0x20) != 0 || !strcmp(".bss", *(const char **)v18) )
      {
        v20 = *(_DWORD *)(v18 + 36);
        if ( v19 < *(_DWORD *)(v18 + 28) + v20 )
          v19 = *(_DWORD *)(v18 + 28) + v20;
      }
      v18 = *(_DWORD *)(v18 + 12);
    }
    while ( v18 );
  }
  else
  {
    v19 = 0;
  }
  sub_1B1444((int)v36, "sbrk");
  if ( v36[0] )
  {
    v21 = sub_2611EC("sbrk", &v35);
    if ( v21 )
      goto LABEL_26;
    return 0;
  }
  sub_1B1444((int)v36, "_sbrk");
  if ( !v36[0] )
    return 0;
  v21 = sub_2611EC("_sbrk", &v35);
  if ( !v21 )
    return 0;
LABEL_26:
  v22 = sub_1B7278(v35);
  v23 = sub_1780DC(v22);
  v36[0] = sub_26DB1C(*(_DWORD *)(v23 + 12), HIDWORD(v23), 0, 0);
  if ( v36[0] )
  {
    v24 = sub_17E714(v21, 0, 1, v36);
    if ( v24 )
    {
      v25 = sub_26EB44(v24);
      if ( v25 - 1 <= 0xFFFFFFFD && v19 < v25 )
      {
        ((void (__fastcall *)(unsigned int, unsigned int, int, int, _DWORD, int, int))a2)(
          v19,
          v25 - v19,
          1,
          1,
          0,
          1,
          a3);
        return 0;
      }
    }
    return 0;
  }
  v33 = sub_94728((int)"gcore.c", 302, "%s: Assertion `%s' failed.", "bfd_vma call_target_sbrk(int)", "target_sbrk_arg");
  return sub_161DE0(v33, HIDWORD(v33));
}

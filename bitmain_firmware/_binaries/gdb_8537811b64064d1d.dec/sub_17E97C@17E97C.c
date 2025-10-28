int __fastcall sub_17E97C(int a1, const char *a2, int a3)
{
  int v6; // r6
  size_t v7; // r0
  int v8; // r1
  int v9; // r3
  __int64 v10; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r10
  int v15; // r0
  int v16; // r9
  __int64 v17; // r0
  __int64 v18; // r0
  __int64 v19; // r0
  _BYTE src[52]; // [sp+1Ch] [bp-4Ch] BYREF
  int v21; // [sp+50h] [bp-18h]

  v6 = sub_26BC98(a3);
  sub_25A6E4(a2, a1);
  v7 = strlen(a2);
  sub_25A7C8(15 - v7, a1);
  if ( !sub_26E684(a3) || sub_26ED40(a3) )
  {
    v9 = **(char **)(v6 + 24);
    if ( v9 == 9 || v9 == 25 )
    {
      sub_26E740(a3, v8);
      v12 = sub_170068(v6);
      ((void (__fastcall *)(int))loc_165BE0)(v12);
      sub_266618(src);
    }
    else
    {
      sub_266650(src, 120);
    }
    v21 = 1;
    v10 = sub_26C008(a3);
    sub_266A10(v6, 0, v10, SHIDWORD(v10), 0, a1, 0, a3, src, (int)off_46D5A4[0]);
  }
  else
  {
    v13 = **(char **)(v6 + 24);
    if ( v13 == 9 || v13 == 25 )
    {
      v14 = sub_26E740(a3, v8);
      v15 = sub_170068(v6);
      v16 = ((int (__fastcall *)(int))loc_165BE0)(v15);
      sub_266618(src);
      v21 = 1;
      v17 = sub_26C008(a3);
      sub_266A10(v6, (int)off_46D5A4[0], v17, SHIDWORD(v17), 0, a1, 0, a3, src, (int)off_46D5A4[0]);
      sub_25A440(a1, "\t(raw ");
      sub_267B94(a1, v14, *(_DWORD *)(v6 + 20), v16, 1);
      sub_25A440(a1, ")");
    }
    else
    {
      sub_266650(src, 120);
      v21 = 1;
      v18 = sub_26C008(a3);
      sub_266A10(v6, (int)src, v18, SHIDWORD(v18), 0, a1, 0, a3, src, (int)off_46D5A4[0]);
      if ( (*(_BYTE *)(*(_DWORD *)(v6 + 24) + 2) & 1) == 0 )
      {
        sub_266618(src);
        v21 = 1;
        sub_25A440(a1, "\t");
        v19 = sub_26C008(a3);
        sub_266A10(v6, (int)src, v19, SHIDWORD(v19), 0, a1, 0, a3, src, (int)off_46D5A4[0]);
      }
    }
  }
  return sub_25A440(a1, (const char *)&word_356660);
}

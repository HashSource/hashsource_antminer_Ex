int __fastcall sub_21CE24(const char *a1, size_t a2, _DWORD *a3, int a4)
{
  _DWORD *v8; // r11
  int v9; // r9
  char *v10; // r10
  const char *v11; // r11
  const char *v12; // r0
  _BYTE *v13; // r0
  int v14; // r5
  int v16; // r4
  char *v17; // r0
  _DWORD *v18; // r0

  if ( (unsigned int)dword_48970C > 1 )
  {
    v8 = sub_21CBEC((int)a3);
    v9 = *(_DWORD *)sub_242FF0(v8);
    v10 = sub_98F14((int)a3);
    v11 = (const char *)sub_1B87F4((int)v8);
    v12 = (const char *)((int (__fastcall *)(int))loc_21A5CC)(a4);
    sub_2594D8(v9, "lookup_symbol_in_block (%s, %s (objfile %s), %s)", a1, v10, v11, v12);
  }
  v13 = sub_C299C(a3, a1, a2, a4);
  v14 = (int)v13;
  if ( v13 )
  {
    if ( (unsigned int)dword_48970C > 1 )
    {
      v16 = *(_DWORD *)sub_242FF0(v13);
      v17 = sub_98F14(v14);
      sub_2594D8(v16, " = %s\n", v17);
      if ( (*(_BYTE *)(v14 + 33) & 1) == 0 )
        return v14;
    }
    else if ( (v13[33] & 1) == 0 )
    {
      return v14;
    }
    JUMPOUT(0x21C208);
  }
  if ( (unsigned int)dword_48970C <= 1 )
    return v14;
  v18 = (_DWORD *)sub_242FF0(0);
  sub_2594D8(*v18, " = NULL\n");
  return 0;
}

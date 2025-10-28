int __fastcall sub_1861BC(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // lr
  int v7; // r12
  int result; // r0
  int v9; // r4
  const char *v10; // r5
  const char *v11; // r0
  int v15; // [sp+24h] [bp-Ch]
  int v16; // [sp+28h] [bp-8h]
  int v17; // [sp+2Ch] [bp-4h]

  v5 = ((int (__fastcall *)(_DWORD))loc_16BD58)(a1[6]);
  v6 = a1[9];
  v7 = a1[10];
  v15 = dword_4878EC;
  v16 = dword_4878F0;
  v17 = dword_4878F4;
  dword_4878EC = a2;
  dword_4878F0 = a3;
  dword_4878F4 = a4;
  sub_FAB08(v6, v7, v5);
  result = v15;
  dword_4878EC = v15;
  dword_4878F0 = v16;
  dword_4878F4 = v17;
  if ( dword_487978 )
  {
    v9 = *(_DWORD *)sub_242FF0(v15);
    v10 = (const char *)sub_230984(a2, a3, a4);
    v11 = (const char *)sub_25ACB4(a1[6], a1[9]);
    return sub_2594D8(v9, "displaced: restored %s %s\n", v10, v11);
  }
  return result;
}

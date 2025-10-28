int __fastcall sub_295BD0(int a1, int a2)
{
  int v2; // r10
  int v4; // r5
  int i; // r4
  int v7; // r1
  int v8; // r4

  v2 = dword_4900D8;
  if ( !dword_4900D8 )
  {
    sub_2945F0();
    return 1;
  }
  if ( a1 <= 0 )
  {
    v4 = 0;
    sub_292720();
  }
  else
  {
    v4 = 0;
    for ( i = 0; i != a1; ++i )
    {
      sub_295374(1, a2);
      v4 += sub_28D27C(*(unsigned __int8 *)(dword_48AAD4 + dword_4900D8), dword_4900D8);
    }
    sub_292720();
    if ( a1 > 1 )
    {
      v7 = dword_4900D8;
      goto LABEL_7;
    }
  }
  v7 = dword_4900D8;
  if ( !dword_48AB0C )
  {
    sub_294F84(v2, dword_4900D8);
    goto LABEL_8;
  }
LABEL_7:
  sub_291D98(v2, v7);
LABEL_8:
  v8 = dword_4900D8;
  if ( dword_4900D8 < dword_4900DC )
  {
    if ( v4 > 0 )
      sub_294B80(v4, 0x20u);
    dword_4900D8 = v8;
  }
  sub_292770();
  return 0;
}

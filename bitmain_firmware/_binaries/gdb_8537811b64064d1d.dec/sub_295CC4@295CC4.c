int __fastcall sub_295CC4(int a1, int a2)
{
  int v3; // r7
  int v5; // r8
  int v7; // r0
  int v8; // r1

  if ( a1 >= 0 )
  {
    v3 = dword_4900D8;
    if ( dword_4900D8 == dword_4900DC )
    {
      sub_2945F0();
      return -1;
    }
    if ( a1 > 1 || dword_48AB0C )
    {
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
        sub_2952CC(a1);
      else
        sub_295430(a1, a2);
      v5 = 0;
      sub_291D98(v3, dword_4900D8);
      dword_4900D8 = v3;
      return v5;
    }
    if ( _ctype_get_mb_cur_max() <= 1 )
    {
      v7 = dword_4900D8;
    }
    else
    {
      v7 = dword_4900D8;
      if ( !dword_48BB60 )
      {
        v8 = sub_29B4F8(dword_48AAD4);
        v7 = dword_4900D8;
        goto LABEL_14;
      }
    }
    v8 = v7 + 1;
LABEL_14:
    sub_294F84(v7, v8);
    return 0;
  }
  return sub_295EFC(-a1, a2);
}

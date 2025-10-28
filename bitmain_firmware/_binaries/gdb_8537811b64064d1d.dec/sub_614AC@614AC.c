int __fastcall sub_614AC(int result)
{
  _DWORD *v1; // r4
  int v2; // r11
  const char **v3; // r7
  int i; // r0
  int v5; // r5
  int v6; // r0
  int v7; // [sp+4h] [bp-8h]

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    v3 = (const char **)result;
    for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
    {
      result = sub_60614(i);
      v5 = result;
      if ( result )
      {
        v7 = dword_46DC04;
        sub_22F070(result);
        v6 = *(_DWORD *)(v5 + 32);
        if ( v3 )
          sub_2594D8(v6, "tsv-deleted,name=\"%s\"\n", *v3);
        else
          sub_2594D8(v6, "tsv-deleted\n");
        result = sub_256834(*(_DWORD *)(v5 + 32));
        if ( v7 == 1 )
        {
          result = sub_22F070(result);
        }
        else if ( v7 )
        {
          if ( v7 == 2 )
            result = sub_22F01C(result);
        }
        else
        {
          result = sub_22EFA4(result);
        }
      }
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        break;
      dword_487668 = (int)v1;
    }
  }
  dword_487668 = v2;
  return result;
}

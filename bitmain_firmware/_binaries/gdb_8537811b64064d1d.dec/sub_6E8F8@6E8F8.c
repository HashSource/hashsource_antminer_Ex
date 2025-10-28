int __fastcall sub_6E8F8(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r6

  v2 = a1[14];
  if ( sub_98FA0(&dword_4878EC, &dword_475848) )
    sub_94708("No inferior running");
  result = sub_6E8C0((int)a1);
  if ( !result )
  {
    v4 = (_DWORD *)a1[18];
    v5 = (_DWORD *)a1[19];
    if ( v4 != v5 )
    {
      result = ((int (__fastcall *)(int))loc_16D69C)(v2);
      if ( result )
        goto LABEL_7;
      while ( v5 != ++v4 )
      {
        result = ((int (__fastcall *)(int))loc_16D69C)(v2);
        if ( result )
LABEL_7:
          result = ((int (__fastcall *)(int, _DWORD))loc_16D6E8)(v2, *v4);
      }
    }
  }
  return result;
}

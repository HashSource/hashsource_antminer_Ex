int __fastcall sub_26E760(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r3
  int result; // r0
  _DWORD *v4; // r3

  v1 = (_DWORD *)a1;
  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    goto LABEL_7;
  while ( 1 )
  {
    v2 = (_DWORD *)v1[25];
    result = v1[23];
    if ( v2 && *v2 )
    {
      if ( *v1 != 2 )
        sub_26BD60();
      sub_94708("register has not been saved in frame");
    }
    v4 = (_DWORD *)v1[24];
    if ( !v4 || !*v4 )
      break;
    a1 = sub_92F8C(9, "value is not available");
LABEL_7:
    ((void (__fastcall *)(int))loc_26E034)(a1);
  }
  return result;
}

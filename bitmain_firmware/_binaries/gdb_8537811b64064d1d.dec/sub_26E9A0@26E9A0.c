int __fastcall sub_26E9A0(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r3

  result = sub_26E97C((int)a1);
  v3 = (_DWORD *)a1[25];
  if ( v3 && *v3 )
    goto LABEL_6;
  v4 = (_DWORD *)a1[24];
  if ( v4 && *v4 )
  {
    sub_92F8C(9, "value is not available");
LABEL_6:
    if ( *a1 != 2 )
      sub_26BD60();
    sub_94708("register has not been saved in frame");
  }
  return result;
}

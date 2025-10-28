int __fastcall sub_15A0A0(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)sub_324058(*a1, a2, 1);
  if ( *v3 )
    return 1;
  *v3 = a2;
  return 0;
}

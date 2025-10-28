void __fastcall sub_CB1F0(int a1, _DWORD *a2)
{
  void *v3; // r0
  void *v4; // r0

  if ( a2 )
  {
    v3 = (void *)a2[19];
    if ( v3 )
      sub_339E8C(v3);
    v4 = (void *)a2[11];
    if ( v4 )
      sub_339E8C(v4);
    sub_349290(a2);
  }
}

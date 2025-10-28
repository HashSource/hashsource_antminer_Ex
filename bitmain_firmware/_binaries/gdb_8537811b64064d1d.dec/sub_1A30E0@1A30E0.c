void __fastcall sub_1A30E0(void **a1)
{
  _DWORD *v1; // r3

  v1 = *a1;
  if ( !*((_DWORD *)*a1 + 1) )
  {
    sub_1A3014(a1[1]);
    v1 = *a1;
  }
  if ( !*v1 )
    sub_1A3014(a1);
}

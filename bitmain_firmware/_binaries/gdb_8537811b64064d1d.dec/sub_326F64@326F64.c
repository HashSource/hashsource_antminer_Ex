int __fastcall sub_326F64(_DWORD **a1, int a2)
{
  if ( !*a1 )
    return 0;
  sub_326A4C((int)a1, a2);
  if ( !*a1 || ((int (__fastcall *)(_DWORD, int))a1[1])(**a1, a2) )
    return 0;
  else
    return (int)*a1;
}

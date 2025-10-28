int __fastcall sub_289A78(unsigned __int8 *a1, int (*a2)(), _DWORD *a3)
{
  unsigned __int8 *v6; // r0
  int v7; // r12

  if ( !a1 )
    return 0;
  v6 = sub_2899B4(a1, a3, 0);
  v7 = v6 == (unsigned __int8 *)sub_295BC8;
  if ( !v6 )
    v7 = 1;
  if ( v6 == (unsigned __int8 *)sub_28207C )
    v7 |= 1u;
  if ( v7 )
    return sub_289320(0, (char *)a1, a2, (int)a3);
  else
    return 1;
}

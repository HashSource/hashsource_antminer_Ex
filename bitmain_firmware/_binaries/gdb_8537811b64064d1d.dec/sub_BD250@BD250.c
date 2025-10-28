int __fastcall sub_BD250(int result, int a2, int a3)
{
  int v3; // r2
  int v4; // r4

  v3 = *(_DWORD *)(*(_DWORD *)(a3 + 20) + 20);
  if ( v3 != 1 )
  {
    v4 = result;
    sub_C0B84(result, a2, v3, 0);
    return sub_C09E0(v4, a2);
  }
  return result;
}

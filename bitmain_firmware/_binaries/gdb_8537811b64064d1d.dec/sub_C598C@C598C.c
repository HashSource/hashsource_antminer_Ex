int __fastcall sub_C598C(int a1, int a2)
{
  int v4; // r6

  v4 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 20) )
    sub_2594D8(a2, "catch ", "tcatch ", "catch ");
  else
    sub_2594D8(a2, "tcatch ", "tcatch ", "catch ");
  if ( v4 == 1 )
  {
    sub_2594D8(a2, "rethrow");
    return sub_D1CB4(a1, a2);
  }
  else if ( v4 )
  {
    if ( v4 == 2 )
      sub_2594D8(a2, "catch");
    return sub_D1CB4(a1, a2);
  }
  else
  {
    sub_2594D8(a2, "throw");
    return sub_D1CB4(a1, a2);
  }
}

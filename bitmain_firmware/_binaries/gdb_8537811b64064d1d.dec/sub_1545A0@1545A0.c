void __fastcall sub_1545A0(const char *a1)
{
  int v1; // r4
  unsigned __int8 *v2; // r0

  v1 = dword_487668;
  v2 = (unsigned __int8 *)sub_1542E8((int *)(dword_487668 + 8), a1, 1, (int)"prompt");
  if ( v2 == (unsigned __int8 *)-1 )
  {
    sub_259880("quit\n");
    sub_2435D8("quit", 1);
  }
  else if ( v2 )
  {
    *(_DWORD *)(v1 + 68) = 1;
    sub_154244(v2);
    if ( *(_DWORD *)(v1 + 68) != 2 )
      sub_153E08(0);
  }
  else
  {
    sub_153E08("");
  }
}

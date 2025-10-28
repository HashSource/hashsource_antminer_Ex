int __fastcall sub_C2928(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_C20AC(a1, a3);
  if ( a3[2] != 2 )
    JUMPOUT(0xC2270);
  return sub_10B554(a1[4], a2, a3 + 3);
}

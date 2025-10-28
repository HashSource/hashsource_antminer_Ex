int __fastcall sub_10D0D4(_DWORD *a1, _DWORD *a2)
{
  int result; // r0

  result = sub_15D0EC(*a1, a1[1], a1[2], a1[3], a1[4], *a2, a2[1], a2[2], a2[3], a2[4]);
  if ( result )
    return sub_98FA0(a1 + 5, a2 + 5);
  return result;
}

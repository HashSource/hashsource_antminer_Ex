int __fastcall sub_FAD80(int a1)
{
  int result; // r0

  sub_B8974(a1);
  result = ((int (*)(void))loc_16E014)();
  if ( result )
    JUMPOUT(0x16E060);
  return result;
}

char *__fastcall sub_1C6DF0(int a1)
{
  int v2; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  v2 = sub_15F810(0);
  if ( sub_15E14C(v2, &v4) && v4 == a1 )
    return "=> ";
  else
    return "   ";
}

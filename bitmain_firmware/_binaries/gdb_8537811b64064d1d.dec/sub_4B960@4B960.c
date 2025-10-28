int __fastcall sub_4B960(int a1)
{
  int result; // r0
  int v2; // [sp+4h] [bp-8h] BYREF

  result = sub_4B77C(a1, 0, &v2);
  if ( result < 0 )
    return 1;
  if ( result )
    return (unsigned int)(v2 - 3) <= 1;
  return result;
}

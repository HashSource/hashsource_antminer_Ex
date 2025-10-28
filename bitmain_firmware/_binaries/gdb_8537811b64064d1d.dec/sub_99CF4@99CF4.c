int __fastcall sub_99CF4(int a1)
{
  int result; // r0
  unsigned int v2; // r2
  const char *v3; // r1
  int v4; // [sp+4h] [bp-8h] BYREF

  result = sub_99820(a1, &v4);
  if ( !v4 )
  {
    if ( v2 <= 0x98 )
    {
      v3 = *(const char **)&aConstCharGdbSi[12 * v2 + 56];
      if ( !v3 )
        v3 = "?";
    }
    else
    {
      v3 = "?";
    }
    sub_946D8("Signal %s does not exist on this system.", v3);
    return 0;
  }
  return result;
}

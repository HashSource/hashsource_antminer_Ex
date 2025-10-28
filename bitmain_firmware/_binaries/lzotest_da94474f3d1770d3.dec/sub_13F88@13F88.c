unsigned int *__fastcall sub_13F88(unsigned int *result, unsigned int a2, char a3)
{
  unsigned int v3; // r12
  int v4; // lr
  unsigned int v5; // r3
  _BYTE *v6; // r1
  _BYTE *v7; // lr

  if ( result[1] < a2 )
    _assert_fail(
      "len <= mb->len",
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/lzo-2.10/lzotest/lzotest.c",
      0x267u,
      "memchecker_init");
  v3 = *result;
  v4 = *result - 16;
  while ( 1 )
  {
    v5 = result[4];
    if ( v5 >= v3 )
      break;
    *(_BYTE *)--v3 = a3++;
    if ( v4 == v3 )
    {
      v5 = result[4];
      break;
    }
  }
  v6 = (_BYTE *)(*result + a2);
  v7 = v6 + 16;
  while ( (unsigned int)v6 < v5 + result[5] )
  {
    *v6++ = a3++;
    if ( v7 == v6 )
      break;
    v5 = result[4];
  }
  return result;
}

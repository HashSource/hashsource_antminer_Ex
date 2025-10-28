int __fastcall sub_14024(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r12
  int v5; // t1
  int v6; // r3
  unsigned __int8 *v7; // r1
  int v8; // r12
  unsigned int v9; // r4
  int v10; // t1

  if ( a1[1] < a2 )
    _assert_fail(
      "len <= mb->len",
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/lzo-2.10/lzotest/lzotest.c",
      0x281u,
      "memchecker_check");
  v3 = a1[4];
  v4 = *a1;
  while ( v3 < v4 )
  {
    v5 = *(unsigned __int8 *)--v4;
    v6 = (unsigned __int8)(a3 + 1);
    if ( v5 != a3 )
      return -1;
    if ( v4 == *a1 - 16 )
      goto LABEL_7;
    a3 = (unsigned __int8)(a3 + 1);
  }
  v6 = a3;
LABEL_7:
  v7 = (unsigned __int8 *)(*a1 + a2);
  v8 = (unsigned __int8)(v6 + 16);
  v9 = v3 + a1[5];
  while ( v9 > (unsigned int)v7 )
  {
    v10 = *v7++;
    if ( v10 != v6 )
      return -1;
    if ( v8 == (unsigned __int8)(v6 + 1) )
      break;
    v6 = (unsigned __int8)(v6 + 1);
  }
  return 0;
}

int __fastcall dump_work(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r5
  int v5; // t1
  _BYTE v7[4096]; // [sp+18h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v2);
  v3 = a1 + 15;
  v4 = a1 + 253;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "dump_work",
    9,
    71,
    60,
    v7);
  do
  {
    v5 = *(unsigned __int8 *)++v3;
    printf("%02x ", v5);
  }
  while ( v3 != v4 );
  return putchar(10);
}

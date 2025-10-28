int __fastcall dump_work_ae(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r5
  int v5; // t1
  _BYTE v7[4096]; // [sp+18h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v2);
  v3 = a1 + 39;
  v4 = a1 + 119;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ae/backend_ae.c",
    152,
    "dump_work_ae",
    12,
    83,
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

int __fastcall open_miner_by_work_num(int a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-2448h] BYREF
  _BYTE v4[140]; // [sp+101Ch] [bp-1448h] BYREF
  _QWORD v5[630]; // [sp+10A8h] [bp-13BCh] BYREF
  void *s; // [sp+2458h] [bp-Ch]
  unsigned int i; // [sp+245Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "open_miner_by_work_num");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "open_miner_by_work_num",
    22,
    663,
    20,
    v3);
  memcpy(v5, a0400000066e099, sizeof(v5));
  s = calloc(1u, 0xD8u);
  for ( i = 0; i <= 0x11; ++i )
  {
    str2hex((int)v4, (int)&v5[35 * i], 280);
    memset(s, 0, 0xD8u);
    memcpy((char *)s + 40, v4, 0x8Cu);
    *((_BYTE *)s + i + 8) = 2 * i;
    *(_DWORD *)(a1 + 532) = 1;
    *((_DWORD *)s + 45) = 22;
    memset((char *)s + 184, 255, 0x20u);
    push_work_base(a1, (int)s);
    usleep(0x30D40u);
  }
  free(s);
  return 0;
}

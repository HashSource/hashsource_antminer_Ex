int __fastcall softreset_all_chip_kas(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  int i; // [sp+1054h] [bp-10h]

  V_LOCK();
  sub_1622D8((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "softreset chain");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "softreset_all_chip_kas",
    22,
    629,
    40,
    v3);
  sub_1632D8(a1);
  for ( i = 0; i <= 9; ++i )
  {
    usleep((__useconds_t)&stru_186A0);
    send_fake_work_kas(a1);
  }
  sub_16CCD0(a1, 10, 0);
  sub_1637C8(a1, 0x7Fu);
  return 0;
}

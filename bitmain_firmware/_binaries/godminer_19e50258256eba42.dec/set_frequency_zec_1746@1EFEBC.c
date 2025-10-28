int __fastcall set_frequency_zec_1746(int a1)
{
  float v1; // s0
  _BYTE v3[20]; // [sp+20h] [bp-1014h] BYREF
  int v4; // [sp+1020h] [bp-14h]
  int v5; // [sp+1024h] [bp-10h]
  int v6; // [sp+1028h] [bp-Ch]
  unsigned int i; // [sp+102Ch] [bp-8h]

  v4 = 0;
  v6 = dword_5AA10C[0];
  v5 = dword_5AA110;
  for ( i = 0; i <= 0x76 && v1 >= (float)(unsigned int)dword_5AA10C[2 * i]; ++i )
  {
    v6 = dword_5AA10C[2 * i];
    v5 = dword_5AA10C[2 * i + 1];
  }
  sub_1EB3CC(a1, 12, v5);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "target_freq: %.2f actual_freq: %d, reg_value: %08x", v1, v6, v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "set_frequency_zec_1746",
    22,
    637,
    40,
    v3);
  return v4;
}

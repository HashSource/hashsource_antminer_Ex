int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  _BYTE v6[12]; // [sp+18h] [bp-100Ch] BYREF
  float v7; // [sp+1018h] [bp-Ch]
  int v8; // [sp+101Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "adjust_working_freq_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "adjust_working_freq_ltc",
    23,
    910,
    40,
    v6);
  v8 = 18;
  v7 = (float)(*(_DWORD *)(a1 + 504) + a2);
  if ( v7 >= *(float *)(a1 + 1020) )
  {
    v7 = *(float *)(a1 + 1020);
    v8 = 0;
LABEL_5:
    chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 504) = (int)v7;
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "adjust_working_freq_ltc() out");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "adjust_working_freq_ltc",
      23,
      925,
      40,
      v6);
    return v8;
  }
  if ( v7 >= 900.0 )
    goto LABEL_5;
  return v8;
}

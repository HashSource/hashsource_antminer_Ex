bool __fastcall check_value_valid_with_stdd(int a1, int a2, int a3)
{
  double v3; // d0
  _BYTE v9[36]; // [sp+38h] [bp-1024h] BYREF
  double v10; // [sp+1038h] [bp-24h]
  double v11; // [sp+1040h] [bp-1Ch]
  double v12; // [sp+1048h] [bp-14h]
  double v13; // [sp+1050h] [bp-Ch]

  calc_mean(a1, a2);
  v13 = v3;
  calc_stdd(a1, a2);
  v12 = v3;
  v11 = v3 - v3;
  v10 = v3 + v3;
  V_LOCK();
  logfmt_raw(
    v9,
    0x1000u,
    0,
    "mean:%.4f, stdd:%.4f, min_value:%.4f, max_value:%.4f, to_check:%.4f",
    v3,
    v3,
    v3 - v3,
    v3 + v3,
    (double)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/util.c",
    134,
    "check_value_valid_with_stdd",
    27,
    448,
    20,
    v9);
  return v11 <= (double)a3 && v10 >= (double)a3 || v12 < 2.0;
}

int __fastcall pic1704_get_an_voltage2(char a1, int a2)
{
  float v2; // s0
  float v3; // s1
  int result; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  double v9; // d9
  int v10; // r0
  unsigned int v11; // [sp+2Ch] [bp-180Ch] BYREF
  unsigned int v12; // [sp+30h] [bp-1808h] BYREF
  unsigned int v13; // [sp+34h] [bp-1804h] BYREF
  char s[2040]; // [sp+38h] [bp-1800h] BYREF
  _BYTE v15[4096]; // [sp+838h] [bp-1000h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0;
  result = pic1704_get_all_voltage(a1, &v11, &v12, &v13);
  if ( (_BYTE)result )
  {
    strcpy(s, "Received an voltage response.");
    V_LOCK(*(_DWORD *)"age response.");
    v6 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      168,
      "pic1704_get_an_voltage2",
      23,
      444,
      20,
      v15);
    v7 = snprintf(
           s,
           0x800u,
           "an0 = %f, an2 %f, an6 %f.",
           (double)v11 * 3.3 * 0.0009765625,
           (double)v12 * 3.3 * 0.0009765625,
           (double)v13 * 3.3 * 0.0009765625);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      168,
      "pic1704_get_an_voltage2",
      23,
      445,
      20,
      v15);
    if ( a2 && ((v9 = (double)v13 * 3.3 * 0.0009765625, v2 > v9) || v3 < v9) )
    {
      strcpy(s, "Ref an vol too high or too low.");
      V_LOCK(*(_DWORD *)"igh or too low.");
      v10 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v10);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
               168,
               "pic1704_get_an_voltage2",
               23,
               451,
               20,
               v15);
    }
    else
    {
      return sub_A6558(v12);
    }
  }
  return result;
}

int __fastcall print_dram_bypass_test_result(_DWORD *a1)
{
  const char *v1; // r3
  _BYTE v4[12]; // [sp+18h] [bp-100Ch] BYREF
  int i; // [sp+1018h] [bp-Ch]
  int v6; // [sp+101Ch] [bp-8h]

  v6 = 0;
  for ( i = 0; i < *a1; ++i )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "%s", &a1[32 * i + 1]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
      175,
      "print_dram_bypass_test_result",
      29,
      83,
      20,
      v4);
    if ( strstr((const char *)&a1[32 * i + 1], "Failed") )
      ++v6;
  }
  V_LOCK();
  if ( (double)(int)a1[2049] <= 64.8 )
    v1 = "Failed";
  else
    v1 = "Pass";
  logfmt_raw(v4, 0x1000u, 0, "<dram bypass slt pattern> %s", v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
    175,
    "print_dram_bypass_test_result",
    29,
    88,
    20,
    v4);
  if ( old_pattern )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "<dram bypass nonce rate> %.4f", (float)((float)((float)(int)a1[2049] / 371.0) * 100.0));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
      175,
      "print_dram_bypass_test_result",
      29,
      92,
      20,
      v4);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "<dram bypass nonce rate> %.4f", (float)((float)((float)(int)a1[2049] / 72.0) * 100.0));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
      175,
      "print_dram_bypass_test_result",
      29,
      96,
      20,
      v4);
  }
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "dram bypass slt test end");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
    175,
    "print_dram_bypass_test_result",
    29,
    100,
    20,
    v4);
  a1[2049] = 0;
  return 0;
}

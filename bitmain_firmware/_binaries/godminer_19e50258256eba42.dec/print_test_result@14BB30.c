int __fastcall print_test_result(_DWORD *a1)
{
  const char *v1; // r3
  const char *v2; // r3
  _BYTE v5[12]; // [sp+18h] [bp-100Ch] BYREF
  int v6; // [sp+1018h] [bp-Ch]
  int i; // [sp+101Ch] [bp-8h]

  v6 = 0;
  for ( i = 0; i < *a1; ++i )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s", &a1[32 * i + 1]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
      175,
      "print_test_result",
      17,
      54,
      60,
      v5);
    if ( strstr((const char *)&a1[32 * i + 1], "Failed") )
      ++v6;
  }
  V_LOCK();
  if ( (double)(int)a1[2049] <= 64.8 )
    v1 = "Failed";
  else
    v1 = "Pass";
  logfmt_raw(v5, 0x1000u, 0, "<slt pattern> %s", v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
    175,
    "print_test_result",
    17,
    59,
    60,
    v5);
  if ( old_pattern )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "<nonce rate> %.4f", (float)((float)((float)(int)a1[2049] / 516.0) * 100.0));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
      175,
      "print_test_result",
      17,
      62,
      60,
      v5);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "<nonce rate> %.4f", (float)((float)((float)(int)a1[2049] / 432.0) * 100.0));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
      175,
      "print_test_result",
      17,
      64,
      60,
      v5);
  }
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "slt test end");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
    175,
    "print_test_result",
    17,
    66,
    60,
    v5);
  if ( (double)(int)a1[2049] <= 64.8 )
    v2 = "Failed";
  else
    v2 = "Pass";
  printf("<slt pattern> %s\n", v2);
  if ( old_pattern )
    printf("<nonce rate> %.4f\n", (float)((float)((float)(int)a1[2049] / 516.0) * 100.0));
  else
    printf("<nonce rate> %.4f\n", (float)((float)((float)(int)a1[2049] / 432.0) * 100.0));
  puts("slt test end");
  a1[2049] = 0;
  return 0;
}

char *__fastcall set_test_result(int *a1, const char *a2, signed int a3)
{
  char *result; // r0
  int v5; // [sp+20h] [bp-1004h] BYREF

  if ( a3 > 127 || *a1 > 63 )
  {
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, "slt_result is full!");
    V_UNLOCK();
    return (char *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/"
                     "godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282_slt.c",
                     175,
                     "set_test_result",
                     15,
                     45,
                     100,
                     &v5);
  }
  else
  {
    result = strncpy((char *)&a1[32 * *a1 + 1], a2, a3);
    ++*a1;
  }
  return result;
}

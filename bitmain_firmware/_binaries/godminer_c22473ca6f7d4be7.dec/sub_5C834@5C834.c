char *__fastcall sub_5C834(char *src, signed int n)
{
  char *result; // r0
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( n <= 63 && dword_16B054[0] <= 63 )
  {
    result = strncpy((char *)&dword_16B054[16 * dword_16B054[0] + 1], src, n);
    ++dword_16B054[0];
  }
  else
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "slt_result is full!");
    V_UNLOCK();
    return (char *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/g"
                     "odminer-origin_master/backend/backend_eth/backend_eth.c",
                     154,
                     "set_test_result",
                     15,
                     113,
                     100,
                     v3);
  }
  return result;
}

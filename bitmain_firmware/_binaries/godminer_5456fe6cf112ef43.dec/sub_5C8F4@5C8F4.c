char *__fastcall sub_5C8F4(char *src, signed int n)
{
  int v2; // r0
  char *result; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( n <= 63 && dword_16B05C[0] <= 63 )
  {
    result = strncpy((char *)&dword_16B05C[16 * dword_16B05C[0] + 1], src, n);
    ++dword_16B05C[0];
  }
  else
  {
    V_LOCK(src);
    v2 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v2);
    return (char *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/g"
                     "odminer-origin_master/backend/backend_eth/backend_eth.c",
                     154,
                     "set_test_result",
                     15,
                     113,
                     100,
                     v4);
  }
  return result;
}

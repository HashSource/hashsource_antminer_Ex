int *__fastcall check_and_print_uart_debug_log(int a1, int a2, unsigned __int8 *a3, int a4, char a5)
{
  int *result; // r0
  unsigned __int8 *v6; // r3
  int v7; // r0
  _BYTE v12[28]; // [sp+38h] [bp-145Ch] BYREF
  _BYTE v13[28]; // [sp+438h] [bp-105Ch] BYREF
  int v14; // [sp+488h] [bp-100Ch] BYREF
  _DWORD v15[7]; // [sp+1438h] [bp-5Ch] BYREF
  int v16; // [sp+1454h] [bp-40h]
  _DWORD v17[7]; // [sp+1458h] [bp-3Ch] BYREF
  int v18; // [sp+1474h] [bp-20h]
  int i; // [sp+147Ch] [bp-18h]
  unsigned __int8 *v20; // [sp+1480h] [bp-14h]
  int v21; // [sp+1484h] [bp-10h]

  result = &v14;
  if ( a2 )
  {
    result = (int *)sub_C15B0(a1);
    if ( result )
    {
      v21 = 0;
      v20 = a3;
      for ( i = 0; i < a2; ++i )
      {
        v6 = v20++;
        v7 = snprintf(&v12[v21], 1024 - v21, "%02x ", *v6);
        v21 += v7;
      }
      V_LOCK();
      if ( a5 )
      {
        sub_C13E0((int)v15, a4);
        logfmt_raw(v13, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, "Tx: %s", v12);
        V_UNLOCK();
        return (int *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/uart_debug_logger.c",
                        155,
                        "check_and_print_uart_debug_log",
                        30,
                        83,
                        40,
                        v13);
      }
      else
      {
        sub_C13E0((int)v17, a4);
        logfmt_raw(v13, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, "Rx: %s", v12);
        V_UNLOCK();
        return (int *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/uart_debug_logger.c",
                        155,
                        "check_and_print_uart_debug_log",
                        30,
                        85,
                        40,
                        v13);
      }
    }
  }
  return result;
}

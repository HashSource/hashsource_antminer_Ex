_DWORD *__fastcall sub_2E054(char *s2)
{
  _DWORD *result; // r0
  int v3; // r0
  int v4; // r0
  _BYTE v5[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( (unsigned int)dword_165088 > 0x13 )
  {
    V_LOCK(s2);
    v4 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v4);
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build"
                       "/godminer-origin_godminer-new/pool.c",
                       133,
                       "reject_reason_history_update",
                       28,
                       40,
                       20,
                       v5);
  }
  else
  {
    if ( !dword_165088 )
    {
      V_LOCK(s2);
      v3 = logfmt_raw((int)v5, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/pool.c",
        133,
        "reject_reason_history_update",
        28,
        45,
        40,
        v5);
      reject_reason_map = 0;
      dword_1787CC = 0;
      dword_1787D0 = 0;
      dword_1787D4 = 0;
      dword_1787D8 = 0;
    }
    result = (_DWORD *)map_get_((int)&reject_reason_map, s2);
    dword_1787D4 = (int)result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      dword_1787D8 = 1;
      ++dword_165088;
      return (_DWORD *)map_set_((int)&reject_reason_map, s2);
    }
  }
  return result;
}

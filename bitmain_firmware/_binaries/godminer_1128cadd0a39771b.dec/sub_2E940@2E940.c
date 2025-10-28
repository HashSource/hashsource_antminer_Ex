_DWORD *__fastcall sub_2E940(char *s2)
{
  _DWORD *result; // r0
  int v3; // r0
  int v4; // r0
  _BYTE v5[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( (unsigned int)dword_166410 > 0x13 )
  {
    V_LOCK(s2);
    v4 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v4);
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build"
                       "/godminer-origin_master/pool.c",
                       127,
                       "reject_reason_history_update",
                       28,
                       39,
                       20,
                       v5);
  }
  else
  {
    if ( !dword_166410 )
    {
      V_LOCK(s2);
      v3 = logfmt_raw((int)v5, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "reject_reason_history_update",
        28,
        44,
        60,
        v5);
      reject_reason_map = 0;
      dword_16E094 = 0;
      dword_16E098 = 0;
      dword_16E09C = 0;
      dword_16E0A0 = 0;
    }
    result = (_DWORD *)map_get_((int)&reject_reason_map, s2);
    dword_16E09C = (int)result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      dword_16E0A0 = 1;
      ++dword_166410;
      return (_DWORD *)map_set_((int)&reject_reason_map, s2);
    }
  }
  return result;
}

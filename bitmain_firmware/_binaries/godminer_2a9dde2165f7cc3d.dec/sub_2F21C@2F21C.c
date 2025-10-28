_DWORD *__fastcall sub_2F21C(char *s2)
{
  _DWORD *result; // r0
  int v3; // r0
  int v4; // r0
  _BYTE v5[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( (unsigned int)dword_173350 > 0x13 )
  {
    V_LOCK(s2);
    v4 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v4);
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/b"
                       "uild/godminer-origin_godminer-new/pool.c",
                       137,
                       "reject_reason_history_update",
                       28,
                       41,
                       20,
                       v5);
  }
  else
  {
    if ( !dword_173350 )
    {
      V_LOCK(s2);
      v3 = logfmt_raw((int)v5, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/pool.c",
        137,
        "reject_reason_history_update",
        28,
        46,
        40,
        v5);
      reject_reason_map = 0;
      dword_18EC44 = 0;
      dword_18EC48 = 0;
      dword_18EC4C = 0;
      dword_18EC50 = 0;
    }
    result = (_DWORD *)map_get_((int)&reject_reason_map, s2);
    dword_18EC4C = (int)result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      dword_18EC50 = 1;
      ++dword_173350;
      return (_DWORD *)map_set_((int)&reject_reason_map, s2);
    }
  }
  return result;
}

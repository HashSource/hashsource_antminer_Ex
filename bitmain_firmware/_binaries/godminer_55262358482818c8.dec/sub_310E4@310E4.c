_DWORD *__fastcall sub_310E4(char *s2)
{
  _DWORD *result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( dword_194B28[0] > 0x13u )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "only support %d reject reasons", dword_194B28[0]);
    V_UNLOCK();
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/b"
                       "uild/godminer-origin_godminer-new/pool.c",
                       137,
                       "reject_reason_history_update",
                       28,
                       45,
                       20,
                       v3);
  }
  else
  {
    if ( !dword_194B28[0] )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "reject reason init %d", dword_194B28[0]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/pool.c",
        137,
        "reject_reason_history_update",
        28,
        50,
        40,
        v3);
      reject_reason_map = 0;
      dword_1B49EC = 0;
      dword_1B49F0 = 0;
      dword_1B49F4 = 0;
      dword_1B49F8 = 0;
    }
    result = (_DWORD *)map_get_(&reject_reason_map, s2);
    dword_1B49F4 = (int)result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      dword_1B49F8 = 1;
      ++dword_194B28[0];
      return (_DWORD *)map_set_((void **)&reject_reason_map, s2, &dword_1B49F8, 4u);
    }
  }
  return result;
}

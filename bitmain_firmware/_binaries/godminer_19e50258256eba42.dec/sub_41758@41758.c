int __fastcall sub_41758(unsigned __int8 *a1)
{
  int result; // r0
  _BYTE v3[12]; // [sp+18h] [bp-100Ch] BYREF
  _DWORD *v4; // [sp+1018h] [bp-Ch]
  int *v5; // [sp+101Ch] [bp-8h]

  v5 = (int *)&reject_reason_map;
  if ( (unsigned int)dword_5AC56C <= 0x13 )
  {
    if ( !dword_5AC56C )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "reject reason init %d", dword_5AC56C);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "reject_reason_history_update",
        28,
        49,
        40,
        v3);
      memset(&reject_reason_map, 0, 0x14u);
    }
    result = map_get_(v5, a1);
    v5[3] = result;
    v4 = (_DWORD *)v5[3];
    if ( v4 )
    {
      ++*v4;
    }
    else
    {
      ++dword_5AC56C;
      v5[4] = 1;
      return map_set_(v5, a1, v5 + 4, 4u);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "only support %d reject reasons", dword_5AC56C);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/pool.c",
             134,
             "reject_reason_history_update",
             28,
             44,
             20,
             v3);
  }
  return result;
}

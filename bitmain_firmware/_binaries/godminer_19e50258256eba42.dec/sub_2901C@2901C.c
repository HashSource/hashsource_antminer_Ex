const char *sub_2901C()
{
  const char *result; // r0
  _BYTE v1[20]; // [sp+10h] [bp-1014h] BYREF
  _DWORD v2[3]; // [sp+1010h] [bp-14h]
  unsigned int i; // [sp+101Ch] [bp-8h]

  result = "/nvdata/pt_level";
  v2[0] = "/nvdata/pt_level";
  v2[1] = "/nvdata/level";
  v2[2] = "/nvdata/pt_level_new/nvdata/pt4_level_new";
  for ( i = 0; i <= 2; ++i )
  {
    if ( remove((const char *)v2[i]) )
    {
      perror("Error deleting file");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "Error deleting %s", v2[i]);
      V_UNLOCK();
      result = (const char *)zlog(
                               g_zc,
                               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/api_new.c",
                               137,
                               "delete_pt_path",
                               14,
                               162,
                               40,
                               v1);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "%s deleted successfully", v2[i]);
      V_UNLOCK();
      result = (const char *)zlog(
                               g_zc,
                               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/api_new.c",
                               137,
                               "delete_pt_path",
                               14,
                               159,
                               40,
                               v1);
    }
  }
  return result;
}

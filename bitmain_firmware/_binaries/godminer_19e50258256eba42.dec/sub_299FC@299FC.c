size_t sub_299FC()
{
  size_t v0; // r3
  _BYTE v2[12]; // [sp+10h] [bp-100Ch] BYREF
  unsigned __int8 ptr; // [sp+1013h] [bp-9h] BYREF
  FILE *stream; // [sp+1014h] [bp-8h]

  ptr = 0;
  stream = fopen("/nvdata/level_new", "rb");
  if ( stream )
  {
    v0 = fread(&ptr, 1u, 1u, stream);
    if ( v0 == 1 )
    {
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "level_new: %u", ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "read_pt3_new_result_eth_2282",
        28,
        279,
        40,
        v2);
      fclose(stream);
      return ptr;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "level_new read opening file failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "read_pt3_new_result_eth_2282",
      28,
      284,
      100,
      v2);
    return 255;
  }
  return v0;
}

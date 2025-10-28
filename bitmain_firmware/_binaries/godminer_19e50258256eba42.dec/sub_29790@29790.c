FILE *__fastcall sub_29790(char a1)
{
  FILE *v1; // r3
  _BYTE v3[12]; // [sp+18h] [bp-100Ch] BYREF
  unsigned __int8 v4; // [sp+101Ah] [bp-Ah] BYREF
  char ptr; // [sp+101Bh] [bp-9h] BYREF
  FILE *s; // [sp+101Ch] [bp-8h]

  ptr = 0;
  if ( a1 == 5 )
    ptr = 5;
  switch ( a1 )
  {
    case 4:
      ptr = 4;
      break;
    case 3:
      ptr = 3;
      break;
    case 2:
      ptr = 2;
      break;
    case 1:
      ptr = 1;
      break;
  }
  sub_2901C();
  s = fopen("/nvdata/level_new", "wb");
  if ( s )
  {
    fwrite(&ptr, 1u, 1u, s);
    fclose(s);
    s = fopen("/nvdata/level_new", "rb");
    v1 = s;
    if ( s )
    {
      v1 = (FILE *)fread(&v4, 1u, 1u, s);
      if ( v1 == (FILE *)1 )
      {
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, "level_new: %u", v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "write_pt3_new_result_eth_2282",
          29,
          261,
          40,
          v3);
        fclose(s);
        pt_test_done = 1;
        return 0;
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "level_new write opening file failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "write_pt3_new_result_eth_2282",
      29,
      268,
      100,
      v3);
    return (FILE *)-1;
  }
  return v1;
}

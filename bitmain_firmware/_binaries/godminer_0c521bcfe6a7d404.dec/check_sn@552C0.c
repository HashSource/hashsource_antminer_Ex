int __fastcall check_sn(char *a1)
{
  FILE *v1; // r0
  FILE *v2; // r6
  char *v3; // r0
  size_t v4; // r0
  int v5; // r3
  int v6; // r0
  int v8; // r0
  int v9; // r12
  int v10; // r0
  int v11; // r0
  char ptr[16]; // [sp+14h] [bp-1018h] BYREF
  __int16 v13; // [sp+24h] [bp-1008h]
  _BYTE v14[4100]; // [sp+28h] [bp-1004h] BYREF

  if ( !a1 )
    a1 = "/config/sn";
  v13 = 0;
  memset(ptr, 0, sizeof(ptr));
  g_miner_sn_file_path = (int)a1;
  v1 = (FILE *)fopen64(a1, "r");
  v2 = v1;
  if ( v1 )
  {
    if ( fread(ptr, 0x11u, 1u, v1) )
    {
      v3 = strstr(ptr, "\r\n");
      if ( v3 )
        strncpy(g_miner_sn, ptr, v3 - ptr);
      else
        strcpy(g_miner_sn, ptr);
      v4 = strlen(g_miner_sn) - 1;
      v5 = *(unsigned __int8 *)(v4 + 1524520);
      if ( v5 == 10 )
      {
        *(_BYTE *)(v4 + 1524520) = 0;
        v4 = strlen(g_miner_sn) - 1;
        v5 = *(unsigned __int8 *)(v4 + 1524520);
      }
      if ( v5 == 13 )
        *(_BYTE *)(v4 + 1524520) = 0;
      V_LOCK(v4);
      v6 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/check_sn.c",
        152,
        "check_sn",
        8,
        51,
        60,
        v14);
      fclose(v2);
      return 0;
    }
    else
    {
      if ( ptr[0] )
      {
        V_LOCK(0);
        strlen(ptr);
        v10 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v10);
        v9 = 55;
      }
      else
      {
        V_LOCK(0);
        v8 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v8);
        v9 = 57;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/check_sn.c",
        152,
        "check_sn",
        8,
        v9,
        100,
        v14);
      return 1;
    }
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/check_sn.c",
      152,
      "check_sn",
      8,
      23,
      100,
      v14);
    return 2;
  }
}

int read_version_file()
{
  FILE *v0; // r6
  void *v1; // r0
  signed int v2; // r0
  char *v3; // r0
  char *v4; // r7
  char *v5; // r0
  size_t v6; // r2
  size_t v7; // r0
  int v8; // r3
  size_t v9; // r0
  int v10; // r3
  int *v11; // r5
  int v12; // r0
  int v14; // r0
  int v15; // r0
  char v16[256]; // [sp+10h] [bp-1104h] BYREF
  _BYTE v17[4100]; // [sp+110h] [bp-1004h] BYREF

  v0 = (FILE *)fopen64(opt_version_path, "rb");
  v1 = memset(v16, 0, sizeof(v16));
  if ( v0 )
  {
    v2 = fread(v16, 1u, 0x100u, v0);
    if ( v2 <= 0 )
    {
      V_LOCK(v2);
      v11 = &g_zc;
      v15 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v15);
      v9 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "read_version_file",
             17,
             712,
             100,
             v17);
    }
    else
    {
      v3 = strchr(v16, 10);
      if ( v3 )
      {
        memcpy(g_miner_compiletime, v16, v3 - v16);
        v4 = (char *)stpcpy(v16);
        v5 = strchr(v16, 10);
        if ( v5 )
          v4 = g_miner_type;
        else
          v6 = v4 - v16;
        if ( v5 )
          v6 = v5 - v16;
        else
          v4 = g_miner_type;
        if ( !v5 )
          ++v6;
        memcpy(v4, v16, v6);
      }
      else
      {
        strcpy(g_miner_compiletime, v16);
      }
      v7 = strlen(g_miner_compiletime) - 1;
      v8 = *((unsigned __int8 *)&dword_165000[56] + v7);
      if ( v8 == 10 )
      {
        *((_BYTE *)&dword_165000[56] + v7) = 0;
        v7 = strlen(g_miner_compiletime) - 1;
        v8 = *((unsigned __int8 *)&dword_165000[56] + v7);
      }
      if ( v8 == 13 )
        *((_BYTE *)&dword_165000[56] + v7) = 0;
      v9 = strlen(g_miner_type) - 1;
      v10 = *((unsigned __int8 *)&dword_165000[120] + v9);
      if ( v10 == 10 )
      {
        *((_BYTE *)&dword_165000[120] + v9) = 0;
        v9 = strlen(g_miner_type) - 1;
        v10 = *((unsigned __int8 *)&dword_165000[120] + v9);
      }
      v11 = &g_zc;
      if ( v10 == 13 )
        *((_BYTE *)&dword_165000[120] + v9) = 0;
    }
  }
  else
  {
    V_LOCK(v1);
    v11 = &g_zc;
    v14 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v14);
    v9 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "read_version_file",
           17,
           707,
           100,
           v17);
  }
  V_LOCK(v9);
  v12 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v12);
  return zlog(
           *v11,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "read_version_file",
           17,
           747,
           60,
           v17);
}

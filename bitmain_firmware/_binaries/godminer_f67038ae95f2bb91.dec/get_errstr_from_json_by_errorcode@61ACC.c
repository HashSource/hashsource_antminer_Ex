int __fastcall get_errstr_from_json_by_errorcode(const char *a1, char *a2, size_t a3)
{
  int result; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  unsigned int v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r6
  _DWORD *v12; // r0
  const char *v13; // r11
  bool v14; // cc
  unsigned int v15; // r1
  _DWORD *v16; // r0
  const char *v17; // r4
  _DWORD *v18; // r0
  const char *v19; // r0
  char v20[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_1960D8 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    v7 = (_DWORD *)json_object_get((_DWORD *)dword_1960DC, "errorcode");
    v8 = v7;
    if ( !v7 || *v7 != 1 )
    {
      V_LOCK();
      logfmt_raw(
        v20,
        0x1000u,
        0,
        "%s, %d bad errorcode format",
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        209);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        172,
        "get_errstr_from_json_by_errorcode",
        33,
        209,
        100,
        v20);
    }
    v9 = 0;
    do
    {
      v14 = (unsigned int)json_array_size(v8) > v9;
      v15 = v9++;
      if ( !v14 )
      {
        V_LOCK();
        logfmt_raw(v20, 0x1000u, 0, "error code %s does not exist in the file", a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          172,
          "get_errstr_from_json_by_errorcode",
          33,
          237,
          100,
          v20);
        return 0;
      }
      v10 = json_array_get(v8, v15);
      v11 = v10;
      if ( !v10 || *v10 )
      {
        V_LOCK();
        logfmt_raw(
          v20,
          0x1000u,
          0,
          "%s, %d bad object in errorcode",
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          218);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          172,
          "get_errstr_from_json_by_errorcode",
          33,
          218,
          100,
          v20);
        return 0;
      }
      v12 = (_DWORD *)json_object_get(v10, "code");
      v13 = (const char *)json_string_value(v12);
    }
    while ( strcmp(a1, v13) );
    v16 = (_DWORD *)json_object_get(v11, "reason");
    v17 = (const char *)json_string_value(v16);
    v18 = (_DWORD *)json_object_get(v11, "suggestion");
    v19 = (const char *)json_string_value(v18);
    snprintf(a2, a3, "%s; %s; %s", v13, v17, v19);
    return 1;
  }
  return result;
}

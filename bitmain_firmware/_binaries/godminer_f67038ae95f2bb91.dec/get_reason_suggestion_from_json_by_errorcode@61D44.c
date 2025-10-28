int __fastcall get_reason_suggestion_from_json_by_errorcode(const char *a1, char *a2, char *a3, size_t a4)
{
  int result; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  unsigned int v11; // r4
  _DWORD *v12; // r0
  _DWORD *v13; // r6
  _DWORD *v14; // r0
  const char *v15; // r0
  bool v16; // cc
  unsigned int v17; // r1
  _DWORD *v18; // r0
  const char *v19; // r0
  _DWORD *v20; // r0
  const char *v21; // r0
  char v22[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_1960D8 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    v9 = (_DWORD *)json_object_get((_DWORD *)dword_1960DC, "errorcode");
    v10 = v9;
    if ( !v9 || *v9 != 1 )
    {
      V_LOCK();
      logfmt_raw(
        v22,
        0x1000u,
        0,
        "%s, %d bad errorcode format",
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        256);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        172,
        "get_reason_suggestion_from_json_by_errorcode",
        44,
        256,
        100,
        v22);
    }
    v11 = 0;
    do
    {
      v16 = (unsigned int)json_array_size(v10) > v11;
      v17 = v11++;
      if ( !v16 )
      {
        V_LOCK();
        logfmt_raw(v22, 0x1000u, 0, "error code %s does not exist in the file", a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          172,
          "get_reason_suggestion_from_json_by_errorcode",
          44,
          286,
          100,
          v22);
        return 0;
      }
      v12 = json_array_get(v10, v17);
      v13 = v12;
      if ( !v12 || *v12 )
      {
        V_LOCK();
        logfmt_raw(
          v22,
          0x1000u,
          0,
          "%s, %d bad object in errorcode",
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          265);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          172,
          "get_reason_suggestion_from_json_by_errorcode",
          44,
          265,
          100,
          v22);
        return 0;
      }
      v14 = (_DWORD *)json_object_get(v12, "code");
      v15 = (const char *)json_string_value(v14);
    }
    while ( strcmp(a1, v15) );
    v18 = (_DWORD *)json_object_get(v13, "reason");
    v19 = (const char *)json_string_value(v18);
    snprintf(a2, a4, v19);
    v20 = (_DWORD *)json_object_get(v13, "suggestion");
    v21 = (const char *)json_string_value(v20);
    snprintf(a3, a4, v21);
    return 1;
  }
  return result;
}

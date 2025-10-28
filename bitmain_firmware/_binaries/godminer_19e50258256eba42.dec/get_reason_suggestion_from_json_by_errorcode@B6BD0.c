int __fastcall get_reason_suggestion_from_json_by_errorcode(const char *a1, char *a2, char *a3, size_t a4)
{
  size_t v5; // r0
  _BYTE v11[44]; // [sp+20h] [bp-102Ch] BYREF
  char *v12; // [sp+1020h] [bp-2Ch]
  const json_t *v13; // [sp+1024h] [bp-28h]
  char *format; // [sp+1028h] [bp-24h]
  const json_t *v15; // [sp+102Ch] [bp-20h]
  char *s2; // [sp+1030h] [bp-1Ch]
  const json_t *v17; // [sp+1034h] [bp-18h]
  char v18; // [sp+103Bh] [bp-11h]
  size_t i; // [sp+103Ch] [bp-10h]
  const json_t *v20; // [sp+1040h] [bp-Ch]
  const json_t *v21; // [sp+1044h] [bp-8h]

  v21 = 0;
  v20 = 0;
  if ( byte_5AD6D4 != 1 && (unsigned __int8)miner_6060info_errorcode_init() != 1 )
    return 0;
  v21 = json_object_get((const json_t *)dword_5AD6B8, "errorcode");
  if ( !v21 || *(_DWORD *)v21 != 1 )
  {
    V_LOCK();
    logfmt_raw(
      v11,
      0x1000u,
      0,
      "%s, %d bad errorcode format",
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      256);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      169,
      "get_reason_suggestion_from_json_by_errorcode",
      44,
      256,
      100,
      v11);
  }
  v18 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = json_array_size(v21);
    if ( v5 <= i )
      break;
    v20 = json_array_get(v21, i);
    if ( !v20 || *(_DWORD *)v20 )
    {
      V_LOCK();
      logfmt_raw(
        v11,
        0x1000u,
        0,
        "%s, %d bad object in errorcode",
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        265);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        169,
        "get_reason_suggestion_from_json_by_errorcode",
        44,
        265,
        100,
        v11);
      return 0;
    }
    v17 = json_object_get(v20, "code");
    s2 = (char *)json_string_value(v17);
    if ( !strcmp(a1, s2) )
    {
      v15 = json_object_get(v20, "reason");
      format = (char *)json_string_value(v15);
      snprintf(a2, a4, format);
      v13 = json_object_get(v20, "suggestion");
      v12 = (char *)json_string_value(v13);
      snprintf(a3, a4, v12);
      v18 = 1;
      break;
    }
  }
  if ( v18 == 1 )
    return 1;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "error code %s does not exist in the file", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/miner_6060info.c",
    169,
    "get_reason_suggestion_from_json_by_errorcode",
    44,
    286,
    100,
    v11);
  return 0;
}

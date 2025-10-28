int __fastcall get_command_type(_DWORD *a1)
{
  _DWORD *v1; // r0
  const char *v2; // r0
  const char *v3; // r4
  int result; // r0
  int v5; // r0
  _BYTE v6[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "command");
  v2 = (const char *)json_string_value(v1);
  v3 = v2;
  if ( v2 )
  {
    result = strcmp(v2, "CAPABILITIES");
    if ( result )
    {
      if ( !strcmp(v3, "MINING_AUTH_FAILURE") )
      {
        return 1;
      }
      else if ( !strcmp(v3, "MINING_AUTH_SUCCESS") )
      {
        return 2;
      }
      else if ( !strcmp(v3, "MINING_SUBSCRIBE_FAILURE") )
      {
        return 3;
      }
      else if ( !strcmp(v3, "MINING_SUBSCRIBE_SUCCESS") )
      {
        return 4;
      }
      else if ( !strcmp(v3, "MINING_SUBMIT_FAILURE") )
      {
        return 5;
      }
      else if ( !strcmp(v3, "MINING_SUBMIT_SUCCESS") )
      {
        return 6;
      }
      else if ( !strcmp(v3, "MINING_JOB") )
      {
        return 7;
      }
      else if ( !strcmp(v3, "MINING_MEMPOOL_UPDATE") )
      {
        return 8;
      }
      else
      {
        return 9;
      }
    }
  }
  else
  {
    V_LOCK(0);
    v5 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "get_command_type",
      16,
      48,
      100,
      v6);
    return 10;
  }
  return result;
}

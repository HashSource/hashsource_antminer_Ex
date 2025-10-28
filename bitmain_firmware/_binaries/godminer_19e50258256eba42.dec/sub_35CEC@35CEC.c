int __fastcall sub_35CEC(const char *a1, int a2, char *a3, char *a4, _DWORD *a5)
{
  const char *v5; // r0
  const char *v6; // r0
  _BYTE v11[12]; // [sp+20h] [bp-110Ch] BYREF
  _BYTE v12[252]; // [sp+1020h] [bp-10Ch] BYREF
  const json_t *v13; // [sp+111Ch] [bp-10h]
  const json_t *v14; // [sp+1120h] [bp-Ch]
  int v15; // [sp+1124h] [bp-8h]

  v15 = 0;
  v14 = 0;
  v13 = 0;
  v14 = json_loads((int)a1, 0, (json_error_t *)v12);
  if ( v14 && !*(_DWORD *)v14 )
  {
    v13 = json_object_get(v14, "command");
    if ( v13 && *(_DWORD *)v13 == 2 )
    {
      v5 = json_string_value(v13);
      snprintf(a3, 0x10u, "%s", v5);
      v13 = json_object_get(v14, "new_api");
      if ( v13 && *(_DWORD *)v13 == 5 )
      {
        *a5 = 0;
      }
      else
      {
        v13 = json_object_get(v14, "parameter");
        if ( v13 && *(_DWORD *)v13 == 2 )
        {
          v6 = json_string_value(v13);
          snprintf(a4, 0x20u, "%s", v6);
        }
        *a5 = 1;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "%s error: format error about command", "parse_recv_buf");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "parse_recv_buf",
        14,
        2885,
        100,
        v11);
      v15 = -2147483641;
    }
    sub_28C60((int)v14);
  }
  else
  {
    *a5 = 2;
    snprintf(a3, 0x10u, "%s", a1);
  }
  return v15;
}

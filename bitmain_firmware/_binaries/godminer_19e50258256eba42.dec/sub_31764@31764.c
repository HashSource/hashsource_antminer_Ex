int __fastcall sub_31764(json_t *a1, int a2)
{
  int v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  _BYTE v9[40]; // [sp+24h] [bp-1028h] BYREF
  _DWORD v10[2]; // [sp+1024h] [bp-28h] BYREF
  char *v11; // [sp+102Ch] [bp-20h]
  int *v12; // [sp+1030h] [bp-1Ch]
  int v13; // [sp+1034h] [bp-18h]
  json_t *i; // [sp+1038h] [bp-14h]
  json_t *v15; // [sp+103Ch] [bp-10h]
  int v16; // [sp+1040h] [bp-Ch]
  int v17; // [sp+1044h] [bp-8h]

  v17 = 0;
  v15 = 0;
  i = 0;
  v13 = a2;
  v12 = (int *)&reject_reason_map;
  v16 = 0;
  map_iter_(v10);
  if ( v13 && a1 )
  {
    sub_2DE54(a1, 1, 71, *(const char **)(v13 + 8));
    v15 = (json_t *)json_array();
    for ( i = (json_t *)json_object(); ; json_object_set_new(i, v11, v4) )
    {
      v11 = (char *)map_next_(v12, v10);
      if ( !v11 )
        break;
      ++v16;
      v3 = map_get_(v12, (unsigned __int8 *)v11);
      v12[3] = v3;
      v4 = (json_t *)json_integer(*(_DWORD *)v12[3], *(int *)v12[3] >> 31);
    }
    v5 = (json_t *)json_integer(v16, v16 >> 31);
    json_object_set_new(i, "total_reason", v5);
    json_array_append_new(v15, i);
    json_object_set_new(a1, "REJECT_REASON", v15);
    v6 = (json_t *)json_integer(1, 0);
    json_object_set_new(a1, "id", v6);
    return v17;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "%s: input bad api param", "get_reject_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_reject_summary_old",
      22,
      2103,
      100,
      v9);
    return -2147483646;
  }
}

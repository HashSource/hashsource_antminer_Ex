int __fastcall sub_31BF8(json_t *a1, int a2)
{
  _DWORD *current_pool; // r0
  json_t *v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int (**v8)(); // r0
  int v9; // r0
  json_t *v10; // r0
  json_t *v11; // r0
  _BYTE v14[28]; // [sp+20h] [bp-205Ch] BYREF
  char v15[28]; // [sp+1020h] [bp-105Ch] BYREF
  char v16[60]; // [sp+1040h] [bp-103Ch] BYREF
  int v17; // [sp+2040h] [bp-3Ch] BYREF
  int v18; // [sp+2044h] [bp-38h]
  int v19; // [sp+2048h] [bp-34h]
  _DWORD *all_created_runtime; // [sp+204Ch] [bp-30h]
  int v21; // [sp+2050h] [bp-2Ch]
  json_t *v22; // [sp+2054h] [bp-28h]
  json_t *v23; // [sp+2058h] [bp-24h]
  int v24; // [sp+205Ch] [bp-20h]
  int v25; // [sp+2060h] [bp-1Ch]
  int i; // [sp+2064h] [bp-18h]
  int j; // [sp+2068h] [bp-14h]
  int k; // [sp+206Ch] [bp-10h]

  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = a2;
  v17 = 0;
  all_created_runtime = get_all_created_runtime(&v17);
  v25 = 0;
  if ( v21 && a1 )
  {
    sub_2DE54(a1, 1, 73, *(const char **)(v21 + 8));
    v23 = (json_t *)json_array();
    v22 = (json_t *)json_object();
    current_pool = (_DWORD *)get_current_pool();
    v4 = (json_t *)json_integer(*current_pool, (int)*current_pool >> 31);
    json_object_set_new(v22, "current_pool", v4);
    for ( i = 0; i < v17; ++i )
    {
      v25 = snprintf(
              v16,
              0x1000u,
              "device %d wc %llu nc %llu detail:",
              *(_DWORD *)(all_created_runtime[i] + 264),
              *(_QWORD *)(all_created_runtime[i] + 480),
              *(_QWORD *)(all_created_runtime[i] + 488));
      v19 = *(_DWORD *)(all_created_runtime[i] + 372);
      for ( j = 0; j < v19; ++j )
      {
        v18 = *(_DWORD *)(all_created_runtime[i] + 496) + 48 * j;
        v5 = snprintf(&v16[v25], 4096 - v25, "%d:", j + 1);
        v25 += v5;
        for ( k = 0; k <= 5; ++k )
        {
          v6 = snprintf(&v16[v25], 4096 - v25, " %llu", *(_QWORD *)(v18 + 8 * k));
          v25 += v6;
        }
        v7 = snprintf(&v16[v25], 4096 - v25, " /");
        v25 += v7;
      }
      v8 = dev_ctrl();
      v9 = ((int (__fastcall *)(_DWORD))v8[15])(*(_DWORD *)(all_created_runtime[i] + 264));
      sprintf(v15, "chain%d", v9);
      v10 = (json_t *)json_string(v16);
      json_object_set_new(v22, v15, v10);
    }
    json_array_append_new(v23, v22);
    json_object_set_new(a1, "NONCENUM_REASON", v23);
    v11 = (json_t *)json_integer(1, 0);
    json_object_set_new(a1, "id", v11);
    return v24;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s: input bad api param", "get_noncenum_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_noncenum_old",
      16,
      2166,
      100,
      v14);
    return -2147483646;
  }
}

int __fastcall sub_33400(json_t *a1, int a2, char *a3)
{
  json_t *v4; // r0
  size_t v5; // r4
  int v6; // r5
  uint32_t v7; // r0
  json_t *v8; // r0
  int (**v9)(); // r0
  int v10; // r0
  int v12; // [sp+4h] [bp-10A0h]
  _BYTE v14[60]; // [sp+28h] [bp-107Ch] BYREF
  char v15[32]; // [sp+102Ch] [bp-78h] BYREF
  int v16; // [sp+104Ch] [bp-58h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-54h] BYREF
  int v18; // [sp+1060h] [bp-44h] BYREF
  char *nptr; // [sp+1064h] [bp-40h] BYREF
  char *v20; // [sp+1068h] [bp-3Ch]
  void *ptr; // [sp+106Ch] [bp-38h]
  size_t size; // [sp+1070h] [bp-34h]
  int v23; // [sp+1074h] [bp-30h]
  unsigned __int8 v24; // [sp+107Ah] [bp-2Ah]
  unsigned __int8 v25; // [sp+107Bh] [bp-29h]
  _DWORD *all_created_runtime; // [sp+107Ch] [bp-28h]
  char *v27; // [sp+1080h] [bp-24h]
  int v28; // [sp+1084h] [bp-20h]
  int i; // [sp+1088h] [bp-1Ch]
  int v30; // [sp+108Ch] [bp-18h]
  json_t *v31; // [sp+1090h] [bp-14h]
  int v32; // [sp+1094h] [bp-10h]

  v30 = 0;
  v31 = 0;
  v32 = 0;
  v18 = 0;
  v28 = a2;
  v27 = a3;
  all_created_runtime = get_all_created_runtime(&v18);
  if ( v18 > 0 )
  {
    if ( v28 && a1 )
    {
      sub_2DE54(a1, 1, 76, *(const char **)(v28 + 8));
      if ( v27 && *v27 )
      {
        nptr = v27;
        v25 = strtol(v27, &nptr, 10);
        ++nptr;
        v24 = strtol(nptr, &nptr, 10);
        memset(s, 0, sizeof(s));
        HIBYTE(s[4]) = v24 * *(_DWORD *)(all_created_runtime[v25] + 392);
        LOBYTE(s[4]) = 0;
        ++nptr;
        s[5] = strtoul(nptr, &nptr, 16);
        LOBYTE(s[6]) = -1;
        v31 = (json_t *)json_array();
        v23 = *(_DWORD *)(all_created_runtime[v25] + 376) * *(_DWORD *)(all_created_runtime[v25] + 372);
        size = 64;
        ptr = malloc(12 * v23);
        v20 = (char *)malloc(size);
        V_LOCK();
        logfmt_raw(
          v14,
          0x1000u,
          0,
          "chip_offset: %d, chip_id: %d, chip_addr: %x, reg_addr: %x, core_no: %d",
          v25,
          v24,
          HIBYTE(s[4]),
          s[5],
          v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "get_target_corereg_old",
          22,
          2523,
          40,
          v14);
        (*(void (__fastcall **)(_DWORD, _WORD *, int, void *, int *, int, int, _DWORD))(all_created_runtime[v25] + 336))(
          all_created_runtime[v25],
          s,
          v23,
          ptr,
          &v16,
          v12,
          2000,
          0);
        v32 = snprintf(
                v20,
                size,
                "=========================================chain %d detect %d cores",
                *(_DWORD *)(all_created_runtime[v25] + 272),
                v16);
        v4 = (json_t *)json_string(v20);
        json_array_append_new(v31, v4);
        for ( i = 0; i < v16; ++i )
        {
          v5 = size;
          v6 = *((unsigned __int8 *)ptr + 12 * i + 8);
          v7 = swab32(*((_DWORD *)ptr + 3 * i));
          v32 = snprintf(v20, v5, "core %02x data %08x", v6, v7);
          v8 = (json_t *)json_string(v20);
          json_array_append_new(v31, v8);
        }
        v9 = dev_ctrl();
        v10 = ((int (__fastcall *)(_DWORD))v9[15])(*(_DWORD *)(all_created_runtime[v25] + 264));
        sprintf(v15, "chain%d", v10);
        json_object_set_new(a1, v15, v31);
        free(v20);
        free(ptr);
        return v30;
      }
      else
      {
        return -2147483646;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s: input bad api param", "get_target_corereg_old");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "get_target_corereg_old",
        22,
        2499,
        100,
        v14);
      return -2147483646;
    }
  }
  else
  {
    sub_2DE54(a1, 0, 10, "No ASCs");
    return -2147483647;
  }
}

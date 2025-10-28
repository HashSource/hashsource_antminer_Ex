int __fastcall sub_329BC(json_t *a1, int a2, char *a3)
{
  json_t *v4; // r0
  size_t v5; // r4
  int v6; // r6
  int v7; // r5
  uint32_t v8; // r0
  json_t *v9; // r0
  int (**v10)(); // r0
  int v11; // r0
  _BYTE v14[68]; // [sp+28h] [bp-1084h] BYREF
  char v15[32]; // [sp+1028h] [bp-84h] BYREF
  int v16; // [sp+1048h] [bp-64h] BYREF
  _WORD s[8]; // [sp+104Ch] [bp-60h] BYREF
  int v18; // [sp+105Ch] [bp-50h] BYREF
  char *nptr; // [sp+1060h] [bp-4Ch] BYREF
  unsigned __int8 v20; // [sp+1066h] [bp-46h]
  unsigned __int8 v21; // [sp+1067h] [bp-45h]
  int v22; // [sp+1068h] [bp-44h]
  char *v23; // [sp+106Ch] [bp-40h]
  void *ptr; // [sp+1070h] [bp-3Ch]
  size_t size; // [sp+1074h] [bp-38h]
  int v26; // [sp+1078h] [bp-34h]
  unsigned __int8 v27; // [sp+107Eh] [bp-2Eh]
  unsigned __int8 v28; // [sp+107Fh] [bp-2Dh]
  _DWORD *all_created_runtime; // [sp+1080h] [bp-2Ch]
  int i; // [sp+1084h] [bp-28h]
  int v31; // [sp+1088h] [bp-24h]
  json_t *v32; // [sp+108Ch] [bp-20h]
  int v33; // [sp+1090h] [bp-1Ch]
  char *v34; // [sp+1094h] [bp-18h]

  v31 = 0;
  v32 = 0;
  v33 = a2;
  v34 = a3;
  all_created_runtime = get_all_created_runtime(&v18);
  if ( v18 > 0 )
  {
    if ( v33 && a1 )
    {
      sub_2DE54(a1, 1, 74, *(const char **)(v33 + 8));
      if ( v34 && *v34 )
      {
        nptr = v34;
        v28 = strtol(v34, &nptr, 10);
        ++nptr;
        v27 = strtoul(nptr, &nptr, 16);
        memset(s, 0, sizeof(s));
        s[5] = v27;
        LOBYTE(s[4]) = 1;
        v32 = (json_t *)json_array();
        v26 = *(_DWORD *)(all_created_runtime[v28] + 372);
        size = 64;
        ptr = malloc(12 * v26);
        v23 = (char *)malloc(size);
        (*(void (__fastcall **)(_DWORD, _WORD *, int, void *, int *))(all_created_runtime[v28] + 316))(
          all_created_runtime[v28],
          s,
          v26,
          ptr,
          &v16);
        v22 = snprintf(v23, size, "chain %d detect %d chips", *(_DWORD *)(all_created_runtime[v28] + 272), v16);
        v4 = (json_t *)json_string(v23);
        json_array_append_new(v32, v4);
        ++nptr;
        for ( i = strtol(nptr, &nptr, 10); i; --i )
        {
          ++nptr;
          v21 = strtol(nptr, &nptr, 10);
          v20 = v21 * *(_DWORD *)(all_created_runtime[v28] + 392);
          V_LOCK();
          logfmt_raw(
            v14,
            0x1000u,
            0,
            "%s: set chain_id %d chain %d chip_id %d chip_addr %x reg_addr %x",
            "get_target_chipreg_old",
            v28,
            *(_DWORD *)(all_created_runtime[v28] + 272),
            v21,
            v20,
            v27);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "get_target_chipreg_old",
            22,
            2397,
            40,
            v14);
          v5 = size;
          v6 = *((unsigned __int8 *)ptr + 12 * v21 + 4);
          v7 = *((unsigned __int16 *)ptr + 6 * v21 + 3);
          v8 = swab32(*((_DWORD *)ptr + 3 * v21));
          v22 = snprintf(v23, v5, "chip %02x reg %02x data %08x", v6, v7, v8);
          v9 = (json_t *)json_string(v23);
          json_array_append_new(v32, v9);
        }
        v10 = dev_ctrl();
        v11 = ((int (__fastcall *)(_DWORD))v10[15])(*(_DWORD *)(all_created_runtime[v28] + 264));
        sprintf(v15, "chain%d", v11);
        json_object_set_new(a1, v15, v32);
        free(v23);
        free(ptr);
        return v31;
      }
      else
      {
        return -2147483646;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s: input bad api param", "get_target_chipreg_old");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "get_target_chipreg_old",
        22,
        2366,
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

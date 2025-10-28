int __fastcall sub_32F5C(json_t *a1, int a2, char *a3)
{
  json_t *v4; // r0
  size_t v5; // r4
  int v6; // r6
  int v7; // r5
  uint32_t v8; // r0
  json_t *v9; // r0
  int (**v10)(); // r0
  int v11; // r0
  int v13; // [sp+4h] [bp-10A0h]
  _BYTE v15[64]; // [sp+24h] [bp-1080h] BYREF
  unsigned __int8 v16; // [sp+1027h] [bp-7Dh] BYREF
  char v17[32]; // [sp+1028h] [bp-7Ch] BYREF
  int v18; // [sp+1048h] [bp-5Ch] BYREF
  _WORD v19[8]; // [sp+104Ch] [bp-58h] BYREF
  int v20; // [sp+105Ch] [bp-48h] BYREF
  char *v21; // [sp+1060h] [bp-44h]
  void *ptr; // [sp+1064h] [bp-40h]
  size_t size; // [sp+1068h] [bp-3Ch]
  int v24; // [sp+106Ch] [bp-38h]
  _DWORD *all_created_runtime; // [sp+1070h] [bp-34h]
  char *s; // [sp+1074h] [bp-30h]
  int v27; // [sp+1078h] [bp-2Ch]
  int v28; // [sp+107Ch] [bp-28h]
  json_t *v29; // [sp+1080h] [bp-24h]
  int v30; // [sp+1084h] [bp-20h]
  int i; // [sp+1088h] [bp-1Ch]
  int j; // [sp+108Ch] [bp-18h]

  v30 = 0;
  v29 = 0;
  v28 = 0;
  v20 = 0;
  v27 = a2;
  s = a3;
  all_created_runtime = get_all_created_runtime(&v20);
  if ( v20 > 0 )
  {
    if ( v27 && a1 )
    {
      sub_2DE54(a1, 1, 75, *(const char **)(v27 + 8));
      if ( s && *s && strlen(s) == 2 && hex2bin(&v16, s, 1) )
      {
        memset(v19, 0, sizeof(v19));
        LOBYTE(v19[4]) = 1;
        v19[5] = v16;
        for ( i = 0; i < v20; ++i )
        {
          v29 = (json_t *)json_array();
          v24 = *(_DWORD *)(all_created_runtime[i] + 372);
          size = 64;
          ptr = malloc(12 * v24);
          v21 = (char *)malloc(size);
          (*(void (__fastcall **)(_DWORD, _WORD *, int, void *, int *, int, int, _DWORD))(all_created_runtime[i] + 316))(
            all_created_runtime[i],
            v19,
            v24,
            ptr,
            &v18,
            v13,
            2000,
            0);
          v28 = snprintf(
                  v21,
                  size,
                  "=========================================chain %d detect %d chips",
                  *(_DWORD *)(all_created_runtime[i] + 272),
                  v18);
          v4 = (json_t *)json_string(v21);
          json_array_append_new(v29, v4);
          for ( j = 0; j < v18; ++j )
          {
            v5 = size;
            v6 = *((unsigned __int8 *)ptr + 12 * j + 4);
            v7 = *((unsigned __int16 *)ptr + 6 * j + 3);
            v8 = swab32(*((_DWORD *)ptr + 3 * j));
            v28 = snprintf(v21, v5, "chip %02x reg %02x data %08x", v6, v7, v8);
            v9 = (json_t *)json_string(v21);
            json_array_append_new(v29, v9);
          }
          v10 = dev_ctrl();
          v11 = ((int (__fastcall *)(_DWORD))v10[15])(*(_DWORD *)(all_created_runtime[i] + 264));
          sprintf(v17, "chain%d", v11);
          json_object_set_new(a1, v17, v29);
          free(v21);
          free(ptr);
        }
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
      logfmt_raw(v15, 0x1000u, 0, "%s: input bad api param", "get_chipreg_old");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "get_chipreg_old",
        15,
        2433,
        100,
        v15);
      return -2147483646;
    }
  }
  else
  {
    sub_2DE54(a1, 0, 10, "No ASCs");
    return -2147483647;
  }
}

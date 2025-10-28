int __fastcall sub_33974(json_t *a1, int a2, char *a3)
{
  json_t *v4; // r0
  size_t v5; // r4
  int v6; // r7
  int v7; // r5
  int v8; // r6
  uint32_t v9; // r0
  json_t *v10; // r0
  int (**v11)(); // r0
  int v12; // r0
  int v14; // [sp+4h] [bp-10A0h]
  _BYTE v16[68]; // [sp+20h] [bp-1084h] BYREF
  _BYTE v17[4]; // [sp+1020h] [bp-84h] BYREF
  char v18[32]; // [sp+1024h] [bp-80h] BYREF
  int v19; // [sp+1044h] [bp-60h] BYREF
  _WORD v20[8]; // [sp+1048h] [bp-5Ch] BYREF
  int v21; // [sp+1058h] [bp-4Ch] BYREF
  char *v22; // [sp+105Ch] [bp-48h]
  void *ptr; // [sp+1060h] [bp-44h]
  size_t size; // [sp+1064h] [bp-40h]
  int v25; // [sp+1068h] [bp-3Ch]
  signed int v26; // [sp+106Ch] [bp-38h]
  _DWORD *all_created_runtime; // [sp+1070h] [bp-34h]
  char *s; // [sp+1074h] [bp-30h]
  int v29; // [sp+1078h] [bp-2Ch]
  int v30; // [sp+107Ch] [bp-28h]
  json_t *v31; // [sp+1080h] [bp-24h]
  int v32; // [sp+1084h] [bp-20h]
  int i; // [sp+1088h] [bp-1Ch]
  int j; // [sp+108Ch] [bp-18h]

  v32 = 0;
  v31 = 0;
  v30 = 0;
  v21 = 0;
  v29 = a2;
  s = a3;
  all_created_runtime = get_all_created_runtime(&v21);
  if ( v21 > 0 )
  {
    if ( v29 && a1 )
    {
      sub_2DE54(a1, 1, 77, *(const char **)(v29 + 8));
      v26 = strlen(s);
      if ( s && *s && (v26 == 2 || v26 == 4) && hex2bin(v17, s, v26 / 2) )
      {
        memset(v20, 0, sizeof(v20));
        v20[4] = 1;
        v20[5] = v17[0];
        LOBYTE(v20[6]) = -1;
        if ( v26 == 4 )
          v20[5] = (v20[5] << 8) | v17[1];
        for ( i = 0; i < v21; ++i )
        {
          v31 = (json_t *)json_array();
          v25 = *(_DWORD *)(all_created_runtime[i] + 376) * *(_DWORD *)(all_created_runtime[i] + 372);
          size = 64;
          ptr = malloc(12 * v25);
          v22 = (char *)malloc(size);
          (*(void (__fastcall **)(_DWORD, _WORD *, int, void *, int *, int, int, _DWORD))(all_created_runtime[i] + 336))(
            all_created_runtime[i],
            v20,
            v25,
            ptr,
            &v19,
            v14,
            2000,
            0);
          v30 = snprintf(
                  v22,
                  size,
                  "=========================================chain %d detect %d cores",
                  *(_DWORD *)(all_created_runtime[i] + 272),
                  v19);
          v4 = (json_t *)json_string(v22);
          json_array_append_new(v31, v4);
          for ( j = 0; j < v19; ++j )
          {
            v5 = size;
            v6 = *((unsigned __int8 *)ptr + 12 * j + 4);
            v7 = *((unsigned __int8 *)ptr + 12 * j + 8);
            v8 = *((unsigned __int16 *)ptr + 6 * j + 3);
            v9 = swab32(*((_DWORD *)ptr + 3 * j));
            v30 = snprintf(v22, v5, "chip %02x core %02x reg %04x data %08x", v6, v7, v8, v9);
            v10 = (json_t *)json_string(v22);
            json_array_append_new(v31, v10);
          }
          v11 = dev_ctrl();
          v12 = ((int (__fastcall *)(_DWORD))v11[15])(*(_DWORD *)(all_created_runtime[i] + 264));
          sprintf(v18, "chain%d", v12);
          json_object_set_new(a1, v18, v31);
          free(v22);
          free(ptr);
        }
        return v32;
      }
      else
      {
        return -2147483646;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "%s: input bad api param", "get_corereg_old");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "get_corereg_old",
        15,
        2564,
        100,
        v16);
      return -2147483646;
    }
  }
  else
  {
    sub_2DE54(a1, 0, 10, "No ASCs");
    return -2147483647;
  }
}

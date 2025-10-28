int __fastcall sub_208A7C(_BYTE *a1, int a2)
{
  float v3; // s15
  char v7[2048]; // [sp+1Ch] [bp-1860h] BYREF
  _BYTE v8[32]; // [sp+81Ch] [bp-1060h] BYREF
  _BYTE dest[18]; // [sp+181Ch] [bp-60h] BYREF
  unsigned __int16 v10; // [sp+182Eh] [bp-4Eh] BYREF
  unsigned __int16 v11; // [sp+1830h] [bp-4Ch] BYREF
  unsigned __int16 v12; // [sp+1832h] [bp-4Ah] BYREF
  _BYTE v13[7]; // [sp+1834h] [bp-48h] BYREF
  unsigned __int8 v14; // [sp+183Bh] [bp-41h]
  unsigned __int8 v15; // [sp+183Dh] [bp-3Fh]
  unsigned __int8 v16; // [sp+183Eh] [bp-3Eh]
  unsigned __int8 v17; // [sp+183Fh] [bp-3Dh]
  unsigned __int8 v18; // [sp+1840h] [bp-3Ch]
  unsigned __int8 v19; // [sp+1841h] [bp-3Bh]
  unsigned __int8 v20; // [sp+1842h] [bp-3Ah]
  unsigned __int8 v21; // [sp+1843h] [bp-39h]
  unsigned __int8 v22; // [sp+1844h] [bp-38h]
  unsigned __int8 v23; // [sp+1845h] [bp-37h]
  unsigned __int8 v24; // [sp+1846h] [bp-36h]
  unsigned __int8 v25; // [sp+1847h] [bp-35h]
  unsigned __int8 v26; // [sp+1848h] [bp-34h]
  unsigned __int8 v27; // [sp+1849h] [bp-33h]
  unsigned __int8 v28; // [sp+184Ah] [bp-32h]
  unsigned __int8 v29; // [sp+184Bh] [bp-31h]
  unsigned __int8 v30; // [sp+184Ch] [bp-30h]
  unsigned __int8 v31; // [sp+184Dh] [bp-2Fh]
  unsigned __int8 v32; // [sp+184Eh] [bp-2Eh]
  unsigned __int8 v33; // [sp+1850h] [bp-2Ch]
  unsigned __int8 v34; // [sp+1851h] [bp-2Bh]
  unsigned __int8 v35; // [sp+1852h] [bp-2Ah]
  unsigned __int8 v36; // [sp+1853h] [bp-29h]
  unsigned __int8 v37; // [sp+1855h] [bp-27h]
  unsigned __int8 n; // [sp+1859h] [bp-23h]
  unsigned __int8 n_1; // [sp+185Ah] [bp-22h]
  unsigned __int8 n_2; // [sp+185Bh] [bp-21h]
  unsigned __int8 v41; // [sp+185Dh] [bp-1Fh]
  unsigned __int8 v42; // [sp+1860h] [bp-1Ch]
  unsigned __int8 v43; // [sp+1867h] [bp-15h]
  unsigned __int8 v44; // [sp+1868h] [bp-14h]
  unsigned __int8 v45; // [sp+1869h] [bp-13h]
  unsigned __int8 v46; // [sp+186Ah] [bp-12h]
  unsigned __int8 v47; // [sp+186Fh] [bp-Dh]
  unsigned __int8 v48; // [sp+1871h] [bp-Bh]
  unsigned __int8 v49; // [sp+1872h] [bp-Ah]
  size_t v50; // [sp+1873h] [bp-9h]
  unsigned __int8 v51; // [sp+1877h] [bp-5h]

  v51 = 1;
  *(_BYTE *)a2 = *(_BYTE *)a2 & 0xF | (16 * ((*a1 >> 4) & 0xF));
  *(_BYTE *)a2 = *(_BYTE *)a2 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  *(_BYTE *)(a2 + 2) = a1[2];
  if ( (unsigned __int8)init_eeprom_fmt_info(v13, *(_BYTE *)(a2 + 2)) != 1 )
  {
    v51 = 0;
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 3) = calloc(n + 1, 1u);
    if ( !*(_DWORD *)(a2 + 3) )
    {
      strcpy(v7, "Decode SN OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        586,
        100,
        v8);
      v51 = 0;
    }
    memcpy(*(void **)(a2 + 3), &a1[v13[3]], n);
    *(_DWORD *)(a2 + 7) = calloc(n_1 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 7) )
    {
      strcpy(v7, "Decode Chip Die OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        595,
        100,
        v8);
      v51 = 0;
    }
    memcpy(*(void **)(a2 + 7), &a1[v13[4]], n_1);
    *(_DWORD *)(a2 + 11) = calloc(n_2 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 11) )
    {
      strcpy(v7, "Decode Chip Marking OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        604,
        100,
        v8);
      v51 = 0;
    }
    memcpy(*(void **)(a2 + 11), &a1[v13[5]], n_2);
    *(_BYTE *)(a2 + 15) = a1[v13[6]];
    if ( *(_BYTE *)(a2 + 2) == 1 || *(_BYTE *)(a2 + 2) == 2 )
    {
      memset(dest, 0, 16);
      *(_DWORD *)(a2 + 16) = calloc(v41 + 6, 1u);
      if ( !*(_DWORD *)(a2 + 16) )
      {
        strcpy(v7, "Decode Chip FT Program Version OOM");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          170,
          "eeprom_buf_to_layout",
          20,
          619,
          100,
          v8);
        v51 = 0;
      }
      memcpy(dest, &a1[v14], v41);
      snprintf(*(char **)(a2 + 16), v41 + 6, "F%dV%02dB%dC%d", dest[0], dest[1], dest[2], dest[3]);
    }
    else
    {
      *(_DWORD *)(a2 + 16) = calloc(v41 + 1, 1u);
      if ( !*(_DWORD *)(a2 + 16) )
      {
        strcpy(v7, "Decode Chip FT Program Version OOM");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          170,
          "eeprom_buf_to_layout",
          20,
          630,
          100,
          v8);
        v51 = 0;
      }
      memcpy(*(void **)(a2 + 16), &a1[v14], v41);
    }
    *(_BYTE *)(a2 + 24) = *(_BYTE *)(a2 + 24) & 0x80 | a1[v15] & 0x7F;
    *(_BYTE *)(a2 + 24) = *(_BYTE *)(a2 + 24) & 0x7F | (a1[v15] >> 7 << 7);
    *(_DWORD *)(a2 + 25) = calloc(v42 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 25) )
    {
      strcpy(v7, "Decode Chip FT Program Version OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        644,
        100,
        v8);
      v51 = 0;
    }
    memcpy(*(void **)(a2 + 25), &a1[v16], v42);
    *(_BYTE *)(a2 + 29) = *(_BYTE *)(a2 + 29) & 0x80 | a1[v17] & 0x7F;
    *(_BYTE *)(a2 + 29) = *(_BYTE *)(a2 + 29) & 0x7F | (a1[v17] >> 7 << 7);
    *(_BYTE *)(a2 + 30) = a1[v18];
    *(_BYTE *)(a2 + 31) = a1[v19];
    *(_BYTE *)(a2 + 32) = a1[v20];
    *(_BYTE *)(a2 + 33) = a1[v21];
    *(_BYTE *)(a2 + 34) = a1[v22];
    *(_DWORD *)(a2 + 35) = calloc(v43 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 35) )
    {
      strcpy(v7, "Decode Chip Technology OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        668,
        100,
        v8);
      v51 = 0;
    }
    memcpy(*(void **)(a2 + 35), &a1[v23], v43);
    memcpy(&v12, &a1[v24], v44);
    *(_WORD *)(a2 + 39) = (v12 << 8) | HIBYTE(v12);
    memcpy(&v11, &a1[v25], v45);
    *(_WORD *)(a2 + 41) = (v11 << 8) | HIBYTE(v11);
    memcpy(&v10, &a1[v26], v46);
    v3 = (double)((unsigned __int16)(v10 << 8) | (unsigned int)HIBYTE(v10)) / 100.0;
    *(float *)(a2 + 43) = v3;
    *(_BYTE *)(a2 + 47) = a1[v27];
    *(_BYTE *)(a2 + 48) = a1[v28];
    *(_BYTE *)(a2 + 49) = a1[v29];
    *(_BYTE *)(a2 + 50) = a1[v30];
    *(_DWORD *)(a2 + 51) = calloc(v47 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 51) )
    {
      strcpy(v7, "Decode miner_type OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_buf_to_layout",
        20,
        704,
        100,
        v8);
      v51 = 0;
    }
    memcpy(*(void **)(a2 + 51), &a1[v31], v47);
    *(_BYTE *)(a2 + 55) = a1[v32];
    *(_BYTE *)(a2 + 60) = a1[v33];
    if ( *(_BYTE *)(a2 + 2) == 4 )
    {
      memcpy((void *)(a2 + 61), &a1[v34], v48);
      memcpy((void *)(a2 + 63), &a1[v35], v49);
      memcpy((void *)(a2 + 191), &a1[v36], (unsigned __int8)v50);
      *(_BYTE *)(a2 + 196) = a1[v37];
    }
    return v51;
  }
}

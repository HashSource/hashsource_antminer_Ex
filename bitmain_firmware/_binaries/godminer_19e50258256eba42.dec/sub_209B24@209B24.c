int __fastcall sub_209B24(_BYTE *a1, int a2)
{
  _BYTE *v3; // r4
  char v7[40]; // [sp+1Ch] [bp-1868h] BYREF
  _BYTE v8[40]; // [sp+81Ch] [bp-1068h] BYREF
  _BYTE src[18]; // [sp+181Ch] [bp-68h] BYREF
  __int16 v10; // [sp+182Eh] [bp-56h] BYREF
  __int16 v11; // [sp+1830h] [bp-54h] BYREF
  __int16 v12; // [sp+1832h] [bp-52h] BYREF
  _BYTE v13[7]; // [sp+1834h] [bp-50h] BYREF
  unsigned __int8 v14; // [sp+183Bh] [bp-49h]
  unsigned __int8 v15; // [sp+183Dh] [bp-47h]
  unsigned __int8 v16; // [sp+183Eh] [bp-46h]
  unsigned __int8 v17; // [sp+183Fh] [bp-45h]
  unsigned __int8 v18; // [sp+1840h] [bp-44h]
  unsigned __int8 v19; // [sp+1841h] [bp-43h]
  unsigned __int8 v20; // [sp+1842h] [bp-42h]
  unsigned __int8 v21; // [sp+1843h] [bp-41h]
  unsigned __int8 v22; // [sp+1844h] [bp-40h]
  unsigned __int8 v23; // [sp+1845h] [bp-3Fh]
  unsigned __int8 v24; // [sp+1846h] [bp-3Eh]
  unsigned __int8 v25; // [sp+1847h] [bp-3Dh]
  unsigned __int8 v26; // [sp+1848h] [bp-3Ch]
  unsigned __int8 v27; // [sp+1849h] [bp-3Bh]
  unsigned __int8 v28; // [sp+184Ah] [bp-3Ah]
  unsigned __int8 v29; // [sp+184Bh] [bp-39h]
  unsigned __int8 v30; // [sp+184Ch] [bp-38h]
  unsigned __int8 v31; // [sp+184Dh] [bp-37h]
  unsigned __int8 v32; // [sp+184Eh] [bp-36h]
  unsigned __int8 v33; // [sp+1850h] [bp-34h]
  unsigned __int8 n; // [sp+1859h] [bp-2Bh]
  unsigned __int8 n_1; // [sp+185Ah] [bp-2Ah]
  unsigned __int8 n_2; // [sp+185Bh] [bp-29h]
  unsigned __int8 v37; // [sp+185Dh] [bp-27h]
  unsigned __int8 v38; // [sp+1860h] [bp-24h]
  unsigned __int8 v39; // [sp+1867h] [bp-1Dh]
  unsigned __int8 v40; // [sp+1868h] [bp-1Ch]
  unsigned __int8 v41; // [sp+1869h] [bp-1Bh]
  unsigned __int8 v42; // [sp+186Ah] [bp-1Ah]
  size_t v43; // [sp+186Fh] [bp-15h]
  unsigned __int8 v44; // [sp+1877h] [bp-Dh]

  v44 = 1;
  *a1 = (16 * (*(_BYTE *)a2 >> 4)) | *(_BYTE *)a2 & 0xF;
  a1[1] = *(_BYTE *)(a2 + 1);
  a1[2] = *(_BYTE *)(a2 + 2);
  if ( (unsigned __int8)init_eeprom_fmt_info(v13, *(_BYTE *)(a2 + 2)) != 1 )
  {
    v44 = 0;
    return 0;
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 3) )
    {
      strcpy(v7, "encode serial_number OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        756,
        100,
        v8);
      v44 = 0;
    }
    memcpy(&a1[v13[3]], *(const void **)(a2 + 3), n);
    if ( !*(_DWORD *)(a2 + 7) )
    {
      strcpy(v7, "encode chip_die OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        763,
        100,
        v8);
      v44 = 0;
    }
    memcpy(&a1[v13[4]], *(const void **)(a2 + 7), n_1);
    if ( !*(_DWORD *)(a2 + 11) )
    {
      strcpy(v7, "encode chip_marking OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        770,
        100,
        v8);
      v44 = 0;
    }
    memcpy(&a1[v13[5]], *(const void **)(a2 + 11), n_2);
    a1[v13[6]] = *(_BYTE *)(a2 + 15);
    if ( !*(_DWORD *)(a2 + 16) )
    {
      strcpy(v7, "encode Chip FT Program Version OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        780,
        100,
        v8);
      v44 = 0;
    }
    if ( *(_BYTE *)(a2 + 2) == 1 || *(_BYTE *)(a2 + 2) == 2 )
    {
      memset(src, 0, 16);
      _isoc99_sscanf(*(_DWORD *)(a2 + 16), "F%dV%02dB%dC%d", src, &src[1], &src[2], &src[3]);
      memcpy(&a1[v14], src, v37);
    }
    else
    {
      memcpy(&a1[v14], *(const void **)(a2 + 16), v37);
    }
    a1[v15] = (*(_BYTE *)(a2 + 24) >> 7 << 7) | *(_BYTE *)(a2 + 24) & 0x7F;
    if ( !*(_DWORD *)(a2 + 25) )
    {
      strcpy(v7, "Decode asic_sensor_addr OOM");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_layout_to_buf",
        20,
        800,
        100,
        v8);
      v44 = 0;
    }
    memcpy(&a1[v16], *(const void **)(a2 + 25), v38);
    a1[v17] = (*(_BYTE *)(a2 + 29) >> 7 << 7) | *(_BYTE *)(a2 + 29) & 0x7F;
    a1[v18] = *(_BYTE *)(a2 + 30);
    a1[v19] = *(_BYTE *)(a2 + 31);
    a1[v20] = *(_BYTE *)(a2 + 32);
    a1[v21] = *(_BYTE *)(a2 + 33);
    a1[v22] = *(_BYTE *)(a2 + 34);
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
        "eeprom_layout_to_buf",
        20,
        822,
        100,
        v8);
      v44 = 0;
    }
    memcpy(&a1[v23], *(const void **)(a2 + 35), v39);
    v12 = (*(_WORD *)(a2 + 39) << 8) | HIBYTE(*(_WORD *)(a2 + 39));
    memcpy(&a1[v24], &v12, v40);
    v11 = (*(_WORD *)(a2 + 41) << 8) | HIBYTE(*(_WORD *)(a2 + 41));
    memcpy(&a1[v25], &v11, v41);
    v10 = (unsigned int)(float)(*(float *)(a2 + 43) * 100.0);
    memcpy(&a1[v26], &v10, v42);
    a1[v27] = *(_BYTE *)(a2 + 47);
    a1[v28] = *(_BYTE *)(a2 + 48);
    a1[v29] = *(_BYTE *)(a2 + 49);
    a1[v30] = *(_BYTE *)(a2 + 50);
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
        "eeprom_layout_to_buf",
        20,
        854,
        100,
        v8);
      v44 = 0;
    }
    memcpy(&a1[v31], *(const void **)(a2 + 51), (unsigned __int8)v43);
    a1[v32] = *(_BYTE *)(a2 + 55);
    v3 = &a1[v33];
    *v3 = BM_CRC5(a1, 8 * (*(unsigned __int8 *)(a2 + 1) - 1));
    return v44;
  }
}

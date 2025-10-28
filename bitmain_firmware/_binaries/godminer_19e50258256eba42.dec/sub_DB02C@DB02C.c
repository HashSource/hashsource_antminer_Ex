int __fastcall sub_DB02C(int a1, unsigned int a2)
{
  int v3; // [sp+4h] [bp-1618h]
  _BYTE v6[64]; // [sp+5Ch] [bp-15C0h] BYREF
  _BYTE v7[1024]; // [sp+105Ch] [bp-5C0h] BYREF
  _BYTE s[256]; // [sp+145Ch] [bp-1C0h] BYREF
  int v9; // [sp+155Ch] [bp-C0h] BYREF
  _WORD v10[8]; // [sp+1560h] [bp-BCh] BYREF
  _DWORD v11[7]; // [sp+1570h] [bp-ACh] BYREF
  int v12; // [sp+158Ch] [bp-90h]
  _DWORD v13[7]; // [sp+1590h] [bp-8Ch] BYREF
  int v14; // [sp+15ACh] [bp-70h]
  _DWORD v15[7]; // [sp+15B0h] [bp-6Ch] BYREF
  int v16; // [sp+15CCh] [bp-50h]
  const char *v17[8]; // [sp+15D0h] [bp-4Ch] BYREF
  unsigned int v18; // [sp+15F0h] [bp-2Ch]
  int i; // [sp+15F4h] [bp-28h]
  int v20; // [sp+15F8h] [bp-24h]
  char *v21; // [sp+15FCh] [bp-20h]
  unsigned int j; // [sp+1600h] [bp-1Ch]
  int v23; // [sp+1604h] [bp-18h]
  int v24; // [sp+1608h] [bp-14h]
  void *ptr; // [sp+160Ch] [bp-10h]

  v9 = 0;
  v24 = 0;
  v23 = 0;
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "%s chip_no %d", "ChipSetting_get_addr_DASH_1766", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_addr_DASH_1766",
    30,
    107,
    20,
    v6);
  memset(v10, 0, sizeof(v10));
  LOBYTE(v10[4]) = 1;
  v10[5] = 0;
  ptr = malloc(12 * a2);
  memset(ptr, 0, 12 * a2);
  (*(void (__fastcall **)(int, _WORD *, unsigned int, void *, int *, int, int, _DWORD))(a1 + 316))(
    a1,
    v10,
    a2,
    ptr,
    &v9,
    v3,
    3000,
    0);
  V_LOCK();
  sub_DA978((int)v11, *(int *)(a1 + 272));
  logfmt_raw(
    v6,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "%s detect %d chips",
    "ChipSetting_get_addr_DASH_1766",
    v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_addr_DASH_1766",
    30,
    117,
    60,
    v6);
  for ( i = 0; i < v9; ++i )
  {
    v23 = (unsigned __int16)(*((_WORD *)ptr + 6 * i) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)ptr + 3 * i));
    V_LOCK();
    logfmt_raw(
      v6,
      0x1000u,
      0,
      "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
      v23,
      *(_DWORD *)(a1 + 364),
      i,
      *((unsigned __int16 *)ptr + 6 * i + 3),
      *((unsigned __int8 *)ptr + 12 * i + 4));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_addr_DASH_1766",
      30,
      121,
      20,
      v6);
    if ( v23 == *(_DWORD *)(a1 + 364) )
    {
      v18 = (unsigned int)*((unsigned __int8 *)ptr + 12 * i + 4) / *(_DWORD *)(a1 + 468);
      ++s[v18];
      ++v24;
      V_LOCK();
      sub_DA978((int)v13, *(int *)(a1 + 272));
      logfmt_raw(
        v6,
        0x1000u,
        0,
        v14,
        v13[0],
        v13[1],
        v13[2],
        v13[3],
        v13[4],
        v13[5],
        v13[6],
        v14,
        "chip_id:%d, %03d",
        v18,
        *((unsigned __int8 *)ptr + 12 * i + 4));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_addr_DASH_1766",
        30,
        127,
        20,
        v6);
    }
  }
  v20 = 0;
  memset(v7, 0, sizeof(v7));
  v7[0] = 10;
  v21 = v7;
  for ( j = 0; a2 > j; ++j )
  {
    if ( !s[j] )
    {
      sprintf(v21, "%03d ", j);
      v21 += 4;
      ++v20;
    }
  }
  if ( v24 < *(_DWORD *)(a1 + 372) )
  {
    V_LOCK();
    sub_DA978((int)v15, *(int *)(a1 + 272));
    sub_DA940(v17, "asic num error");
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v16,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v16,
      v17[0],
      v17[1],
      v17[2],
      v17[3],
      v17[4],
      v17[5],
      v17[6],
      v17[7],
      "detected asic num less than design(%d<%d)",
      v24,
      *(_DWORD *)(a1 + 372));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_addr_DASH_1766",
      30,
      152,
      100,
      v6);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "bad asic: %s", v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_addr_DASH_1766",
      30,
      153,
      40,
      v6);
  }
  free(ptr);
  *(_DWORD *)(a1 + 464) = v24;
  return v9;
}

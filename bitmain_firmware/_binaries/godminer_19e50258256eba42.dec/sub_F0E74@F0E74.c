int __fastcall sub_F0E74(int a1)
{
  int v2; // [sp+4h] [bp-10A8h]
  _BYTE v4[48]; // [sp+3Ch] [bp-1070h] BYREF
  int v5; // [sp+103Ch] [bp-70h] BYREF
  _WORD s[8]; // [sp+1040h] [bp-6Ch] BYREF
  _DWORD v7[7]; // [sp+1050h] [bp-5Ch] BYREF
  int v8; // [sp+106Ch] [bp-40h]
  _DWORD v9[7]; // [sp+1070h] [bp-3Ch] BYREF
  int v10; // [sp+108Ch] [bp-20h]
  void *ptr; // [sp+1094h] [bp-18h]
  int j; // [sp+1098h] [bp-14h]
  int i; // [sp+109Ch] [bp-10h]

  V_LOCK();
  sub_EC020((int)v7, *(int *)(a1 + 272));
  logfmt_raw(
    v4,
    0x1000u,
    0,
    v8,
    v7[0],
    v7[1],
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v7[6],
    v8,
    "get start nonce offset %s chip_no %d",
    *(_DWORD *)(a1 + 372));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_start_nonce_offset_DCR_1727",
    39,
    883,
    20,
    v4);
  memset(s, 0, sizeof(s));
  LOBYTE(s[4]) = 1;
  ptr = malloc(12 * *(_DWORD *)(a1 + 372));
  for ( i = 0; i <= 1; ++i )
  {
    s[5] = 8 * (i + 2);
    memset(ptr, 0, 12 * *(_DWORD *)(a1 + 372));
    (*(void (__fastcall **)(int, _WORD *, _DWORD, void *, int *, int, int, _DWORD))(a1 + 316))(
      a1,
      s,
      *(_DWORD *)(a1 + 372),
      ptr,
      &v5,
      v2,
      2000,
      0);
    for ( j = 0; j < v5; ++j )
    {
      V_LOCK();
      sub_EC020((int)v9, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v10,
        v9[0],
        v9[1],
        v9[2],
        v9[3],
        v9[4],
        v9[5],
        v9[6],
        v10,
        "start_nonce_offset asic %d, reg %02x SNO %08x",
        *((unsigned __int8 *)ptr + 12 * j + 4),
        *((unsigned __int16 *)ptr + 6 * j + 3),
        *((_DWORD *)ptr + 3 * j));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_start_nonce_offset_DCR_1727",
        39,
        896,
        40,
        v4);
    }
  }
  free(ptr);
  return v5;
}

int __fastcall sub_1EB97C(int a1, __int16 a2, unsigned __int16 a3, __int16 a4, void *dest)
{
  int v5; // r5
  int v6; // r6
  int v7; // r7
  unsigned int v8; // r0
  int v10; // [sp+4h] [bp-10B8h]
  char v13; // [sp+42h] [bp-107Ah]
  _BYTE v15[48]; // [sp+4Ch] [bp-1070h] BYREF
  int v16; // [sp+104Ch] [bp-70h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-6Ch] BYREF
  _DWORD v18[7]; // [sp+1060h] [bp-5Ch] BYREF
  int v19; // [sp+107Ch] [bp-40h]
  _DWORD v20[7]; // [sp+1080h] [bp-3Ch] BYREF
  int v21; // [sp+109Ch] [bp-20h]
  void *src; // [sp+10A0h] [bp-1Ch]
  int i; // [sp+10A4h] [bp-18h]

  v13 = a2;
  v16 = 0;
  if ( a2 == 255 )
    a3 = -(__int16)*(_DWORD *)(a1 + 464);
  V_LOCK();
  sub_1E0BC0((int)v18, *(int *)(a1 + 272));
  logfmt_raw(
    v15,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    "%s core_num %d",
    "ChipSetting_get_num_core_status_eth_2282_ZEC_1746",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_num_core_status_eth_2282_ZEC_1746",
    49,
    1912,
    20,
    v15);
  memset(s, 0, sizeof(s));
  s[4] = 1;
  src = malloc(12 * a3);
  s[5] = a4;
  LOBYTE(s[6]) = v13;
  HIBYTE(s[6]) = a3 - 1;
  memset(src, 0, 12 * a3);
  (*(void (__fastcall **)(int, _WORD *, _DWORD, void *, int *, int, int, _DWORD))(a1 + 336))(
    a1,
    s,
    a3,
    src,
    &v16,
    v10,
    2000,
    0);
  for ( i = 0; i < v16; ++i )
  {
    V_LOCK();
    sub_1E0BC0((int)v20, *(int *)(a1 + 272));
    v5 = *((unsigned __int8 *)src + 12 * i + 4);
    v6 = *((unsigned __int8 *)src + 12 * i + 8);
    v7 = *((unsigned __int16 *)src + 6 * i + 3);
    v8 = sub_1E0FA4(*((_DWORD *)src + 3 * i));
    logfmt_raw(
      v15,
      0x1000u,
      0,
      v21,
      v20[0],
      v20[1],
      v20[2],
      v20[3],
      v20[4],
      v20[5],
      v20[6],
      v21,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      v5,
      v6,
      v7,
      v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_num_core_status_eth_2282_ZEC_1746",
      49,
      1925,
      40,
      v15);
  }
  if ( dest )
    memcpy(dest, src, 12 * a3);
  free(src);
  return v16;
}

int __fastcall sub_E7174(int a1, char a2, __int16 a3, __int16 a4, void *dest)
{
  _BYTE v10[16]; // [sp+4Ch] [bp-1050h] BYREF
  int v11; // [sp+104Ch] [bp-50h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-4Ch] BYREF
  _DWORD v13[7]; // [sp+1060h] [bp-3Ch] BYREF
  int v14; // [sp+107Ch] [bp-20h]
  void *src; // [sp+1084h] [bp-18h]
  int i; // [sp+1088h] [bp-14h]
  int v17; // [sp+108Ch] [bp-10h]

  v11 = 0;
  v17 = 1;
  if ( a3 == 255 )
    v17 = 12;
  memset(s, 0, sizeof(s));
  LOBYTE(s[4]) = 0;
  HIBYTE(s[4]) = a2;
  src = malloc(12 * v17);
  s[5] = a4;
  if ( a3 == 255 )
  {
    HIBYTE(s[6]) = v17 - 1;
    LOBYTE(s[6]) = 0;
  }
  else
  {
    LOBYTE(s[6]) = a3;
  }
  memset(src, 0, 12 * v17);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *))(a1 + 336))(a1, s, v17, src, &v11);
  V_LOCK();
  logfmt_raw(
    v10,
    0x1000u,
    0,
    "%s core_no %d response_num %d",
    "ChipSetting_get_single_chip_core_status_DASH_1766",
    v17,
    v11);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_single_chip_core_status_DASH_1766",
    49,
    2123,
    20,
    v10);
  for ( i = 0; i < v11; ++i )
  {
    V_LOCK();
    sub_DA978((int)v13, *(int *)(a1 + 272));
    logfmt_raw(
      v10,
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
      "[Core State] asic %02x core %02x reg %04x state %08x",
      *((unsigned __int8 *)src + 12 * i + 4),
      *((unsigned __int8 *)src + 12 * i + 8),
      *((unsigned __int16 *)src + 6 * i + 3),
      *((_DWORD *)src + 3 * i));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_single_chip_core_status_DASH_1766",
      49,
      2126,
      20,
      v10);
  }
  if ( dest )
    memcpy(dest, src, 12 * v17);
  free(src);
  return v11;
}

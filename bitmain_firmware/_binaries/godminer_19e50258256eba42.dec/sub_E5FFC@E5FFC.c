int __fastcall sub_E5FFC(int a1, char a2, __int16 a3, void *a4)
{
  int v4; // r5
  int v5; // r6
  int v6; // r7
  unsigned int v7; // r0
  int v9; // [sp+4h] [bp-10C0h]
  _BYTE v14[56]; // [sp+4Ch] [bp-1078h] BYREF
  int v15; // [sp+104Ch] [bp-78h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-74h] BYREF
  _DWORD v17[7]; // [sp+1060h] [bp-64h] BYREF
  int v18; // [sp+107Ch] [bp-48h]
  _DWORD v19[7]; // [sp+1080h] [bp-44h] BYREF
  int v20; // [sp+109Ch] [bp-28h]
  void *src; // [sp+10A4h] [bp-20h]
  int i; // [sp+10A8h] [bp-1Ch]
  int v23; // [sp+10ACh] [bp-18h]

  v15 = 0;
  v23 = 12 * *(_DWORD *)(a1 + 464);
  V_LOCK();
  sub_DA978((int)v17, *(int *)(a1 + 272));
  logfmt_raw(
    v14,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "%s core_no %d",
    "ChipSetting_get_cache_done_status_rvn_DASH_1766",
    v23);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_cache_done_status_rvn_DASH_1766",
    47,
    2003,
    40,
    v14);
  memset(s, 0, sizeof(s));
  s[4] = 0;
  src = malloc(12 * v23);
  s[5] = a3;
  LOBYTE(s[6]) = a2;
  memset(src, 0, 12 * v23);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 336))(
    a1,
    s,
    v23,
    src,
    &v15,
    v9,
    2000,
    0);
  for ( i = 0; i < v15; ++i )
  {
    V_LOCK();
    sub_DA978((int)v19, *(int *)(a1 + 272));
    v4 = *((unsigned __int8 *)src + 12 * i + 4);
    v5 = *((unsigned __int8 *)src + 12 * i + 8);
    v6 = sub_DAD84(*((_WORD *)src + 6 * i + 3));
    v7 = sub_DAD5C(*((_DWORD *)src + 3 * i));
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v20,
      v19[0],
      v19[1],
      v19[2],
      v19[3],
      v19[4],
      v19[5],
      v19[6],
      v20,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      v4,
      v5,
      v6,
      v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_cache_done_status_rvn_DASH_1766",
      47,
      2015,
      40,
      v14);
  }
  if ( a4 )
    memcpy(a4, src, 12 * v23);
  free(src);
  return v15;
}

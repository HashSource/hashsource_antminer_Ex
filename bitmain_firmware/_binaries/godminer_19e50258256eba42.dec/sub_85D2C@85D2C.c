int __fastcall sub_85D2C(int a1, __int16 a2, __int16 a3, void *a4)
{
  int v5; // [sp+4h] [bp-10B8h]
  char v8; // [sp+42h] [bp-107Ah]
  _BYTE v10[48]; // [sp+4Ch] [bp-1070h] BYREF
  int v11; // [sp+104Ch] [bp-70h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-6Ch] BYREF
  _DWORD v13[7]; // [sp+1060h] [bp-5Ch] BYREF
  int v14; // [sp+107Ch] [bp-40h]
  _DWORD v15[7]; // [sp+1080h] [bp-3Ch] BYREF
  int v16; // [sp+109Ch] [bp-20h]
  void *src; // [sp+10A4h] [bp-18h]
  int i; // [sp+10A8h] [bp-14h]
  int v19; // [sp+10ACh] [bp-10h]

  v8 = a2;
  v11 = 0;
  v19 = *(_DWORD *)(a1 + 464);
  if ( a2 == 255 )
    v19 = 45 * *(_DWORD *)(a1 + 464);
  V_LOCK();
  sub_7AAF4((int)v13, *(int *)(a1 + 272));
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
    "%s core_num %d",
    "ChipSetting_get_core_status_KAS_2380",
    v19);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_core_status_KAS_2380",
    36,
    1976,
    20,
    v10);
  memset(s, 0, sizeof(s));
  s[4] = 1;
  src = malloc(12 * v19);
  s[5] = a3;
  LOBYTE(s[6]) = v8;
  memset(src, 0, 12 * v19);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 336))(
    a1,
    s,
    v19,
    src,
    &v11,
    v5,
    2000,
    0);
  for ( i = 0; i < v11; ++i )
  {
    V_LOCK();
    sub_7AAF4((int)v15, *(int *)(a1 + 272));
    logfmt_raw(
      v10,
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
      "ChipSetting_get_core_status_KAS_2380",
      36,
      1988,
      20,
      v10);
  }
  if ( a4 )
    memcpy(a4, src, 12 * v19);
  free(src);
  return v11;
}

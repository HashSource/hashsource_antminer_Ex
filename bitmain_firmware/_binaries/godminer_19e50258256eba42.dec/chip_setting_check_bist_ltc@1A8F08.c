int __fastcall chip_setting_check_bist_ltc(int a1, unsigned __int8 a2, int a3, int a4, _BOOL4 *a5)
{
  int v5; // r3
  char v6; // r3
  int v7; // r3
  int v9; // [sp+4h] [bp-10A0h]
  _BYTE v14[32]; // [sp+44h] [bp-1060h] BYREF
  int v15; // [sp+1044h] [bp-60h] BYREF
  _WORD v16[8]; // [sp+1048h] [bp-5Ch] BYREF
  _DWORD v17[7]; // [sp+1058h] [bp-4Ch] BYREF
  int v18; // [sp+1074h] [bp-30h]
  unsigned int v19; // [sp+107Ch] [bp-28h]
  void *s; // [sp+1080h] [bp-24h]
  int v21; // [sp+1084h] [bp-20h]
  _BOOL4 v22; // [sp+1088h] [bp-1Ch]
  int v23; // [sp+108Ch] [bp-18h]
  int i; // [sp+1090h] [bp-14h]
  int j; // [sp+1094h] [bp-10h]

  v15 = 0;
  if ( a2 )
    v5 = *(_DWORD *)(a1 + 372);
  else
    v5 = 1;
  v21 = v5;
  v23 = 0;
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "check bist result, chip_all %d chip_no %d core %d ", a2, a3, a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_check_bist_ltc",
    27,
    188,
    20,
    v14);
  s = malloc(12 * v21);
  memset(s, 0, 12 * v21);
  memset(a5, 0, 4 * v21);
  memset(v16, 0, sizeof(v16));
  LOBYTE(v16[4]) = a2;
  if ( a2 )
    v6 = 0;
  else
    v6 = *(_BYTE *)(*(_DWORD *)(a1 + 528) + a3);
  HIBYTE(v16[4]) = v6;
  HIBYTE(v16[7]) = a4;
  LOBYTE(v16[7]) = 0;
  HIBYTE(v16[6]) = *(_DWORD *)(a1 + 376);
  LOBYTE(v16[6]) = a4;
  v16[5] = 6;
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 336))(
    a1,
    v16,
    v21,
    s,
    &v15,
    v9,
    2000,
    0);
  for ( i = 0; i < v15; ++i )
  {
    v19 = (unsigned int)*((unsigned __int8 *)s + 12 * i + 4) / *(_DWORD *)(a1 + 468);
    v22 = *((_WORD *)s + 6 * i + 3) == 6 && (*((_DWORD *)s + 3 * i) & 0x1000000) != 0;
    if ( a2 )
      a5[v19] = v22;
    else
      *a5 = v22;
  }
  if ( v21 > v15 )
  {
    V_LOCK();
    sub_1A81C0((int)v17, *(int *)(a1 + 272));
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
      "detected core %d get check bist results less than expect num(%d < %d)",
      a4,
      v15,
      v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
      176,
      "chip_setting_check_bist_ltc",
      27,
      223,
      80,
      v14);
    for ( j = 0; j < v21; ++j )
    {
      if ( !a5[j] )
      {
        v23 = -1;
        V_LOCK();
        if ( a2 )
          v7 = j;
        else
          v7 = a3;
        logfmt_raw(v14, 0x1000u, 0, "chip %d core %d check bist failed", v7, a4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          176,
          "chip_setting_check_bist_ltc",
          27,
          228,
          80,
          v14);
      }
    }
  }
  free(s);
  return v23;
}

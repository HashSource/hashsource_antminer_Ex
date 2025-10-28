bool __fastcall sub_154714(int a1, int a2, int *a3)
{
  const char *v3; // r3
  int v5; // [sp+4h] [bp-1108h]
  _BYTE v8[68]; // [sp+48h] [bp-10C4h] BYREF
  int v9; // [sp+1048h] [bp-C4h] BYREF
  int v10; // [sp+104Ch] [bp-C0h] BYREF
  _DWORD s[4]; // [sp+1050h] [bp-BCh] BYREF
  _DWORD v12[7]; // [sp+1060h] [bp-ACh] BYREF
  int v13; // [sp+107Ch] [bp-90h]
  _DWORD v14[7]; // [sp+1080h] [bp-8Ch] BYREF
  int v15; // [sp+109Ch] [bp-70h]
  _DWORD v16[7]; // [sp+10A0h] [bp-6Ch] BYREF
  int v17; // [sp+10BCh] [bp-50h]
  _DWORD v18[7]; // [sp+10C0h] [bp-4Ch] BYREF
  int v19; // [sp+10DCh] [bp-30h]
  void *v20; // [sp+10E0h] [bp-2Ch]
  int v21; // [sp+10E4h] [bp-28h]
  void *ptr; // [sp+10E8h] [bp-24h]
  int i; // [sp+10ECh] [bp-20h]
  int j; // [sp+10F0h] [bp-1Ch]
  int v25; // [sp+10F4h] [bp-18h]
  char v26; // [sp+10FBh] [bp-11h]
  int v27; // [sp+10FCh] [bp-10h]

  v10 = 0;
  v25 = 0;
  v27 = 0;
  v26 = 0;
  if ( a2 == -1 || a2 > *(_DWORD *)(a1 + 372) )
    v26 = 0;
  else
    v26 = *(_BYTE *)(*(_DWORD *)(a1 + 528) + a2);
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = v26;
  HIWORD(s[2]) = 60;
  ptr = malloc(0xCu);
  memset(ptr, 0, 0xCu);
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *))(a1 + 316))(a1, s, 1, ptr, &v10);
  for ( i = 0; i < v10; ++i )
  {
    if ( *((_WORD *)ptr + 6 * i + 3) == 60 )
    {
      v9 = 0;
      sub_151F60(&v9, *(_DWORD *)ptr);
      v25 += v9;
      V_LOCK();
      sub_151C00((int)v12, *(int *)(a1 + 272));
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v13,
        v12[0],
        v12[1],
        v12[2],
        v12[3],
        v12[4],
        v12[5],
        v12[6],
        v13,
        "[Top Nonce Cnt] asic %02x, reg %02x cnt %08x",
        *((unsigned __int8 *)ptr + 12 * i + 4),
        *((unsigned __int16 *)ptr + 6 * i + 3),
        v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_nonce_counter_HNS_2130",
        34,
        484,
        20,
        v8);
    }
  }
  free(ptr);
  *a3 = v25;
  memset(s, 0, sizeof(s));
  s[2] = 655360;
  s[0] = 1;
  LOBYTE(s[3]) = -1;
  v21 = *(_DWORD *)(a1 + 376);
  v20 = malloc(12 * v21);
  memset(v20, 0, 12 * v21);
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 336))(
    a1,
    s,
    v21,
    v20,
    &v10,
    v5,
    2000,
    0);
  for ( j = 0; j < v10; ++j )
  {
    if ( *((_WORD *)v20 + 6 * j + 3) == 10 )
    {
      v27 += *((_DWORD *)v20 + 3 * j);
      V_LOCK();
      sub_151C00((int)v14, *(int *)(a1 + 272));
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v15,
        v14[0],
        v14[1],
        v14[2],
        v14[3],
        v14[4],
        v14[5],
        v14[6],
        v15,
        "%s chip %02x, core %02x, reg %02x, core_nonce_cnt %08x",
        "ChipSetting_nonce_counter_HNS_2130",
        *((unsigned __int8 *)v20 + 12 * j + 4),
        *((unsigned __int8 *)v20 + 12 * j + 8),
        *((unsigned __int16 *)v20 + 6 * j + 3),
        *((_DWORD *)v20 + 3 * j));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_nonce_counter_HNS_2130",
        34,
        507,
        20,
        v8);
    }
    else
    {
      V_LOCK();
      sub_151C00((int)v16, *(int *)(a1 + 272));
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v17,
        v16[0],
        v16[1],
        v16[2],
        v16[3],
        v16[4],
        v16[5],
        v16[6],
        v17,
        "%s chip %02x, expected reg %02x, but %02x, core_nonce_cnt %08x",
        "ChipSetting_nonce_counter_HNS_2130",
        *((unsigned __int8 *)v20 + 12 * j + 4),
        5,
        *((unsigned __int16 *)v20 + 6 * j + 3),
        *((_DWORD *)v20 + 3 * j));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_nonce_counter_HNS_2130",
        34,
        510,
        100,
        v8);
    }
  }
  free(v20);
  V_LOCK();
  sub_151C00((int)v18, *(int *)(a1 + 272));
  if ( v25 == v27 )
    v3 = "Pass";
  else
    v3 = "Failed";
  logfmt_raw(
    v8,
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
    "check nonce counter, top_nonce_cnt %d, core_nocne_cnt %d (%s)",
    v25,
    v27,
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_nonce_counter_HNS_2130",
    34,
    516,
    40,
    v8);
  return v25 != v27;
}

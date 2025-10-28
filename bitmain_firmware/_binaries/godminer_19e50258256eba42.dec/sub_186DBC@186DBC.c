int __fastcall sub_186DBC(int a1, int a2)
{
  _BYTE v5[52]; // [sp+38h] [bp-1074h] BYREF
  int v6; // [sp+1038h] [bp-74h] BYREF
  int v7; // [sp+103Ch] [bp-70h] BYREF
  _DWORD s[4]; // [sp+1040h] [bp-6Ch] BYREF
  _DWORD v9[7]; // [sp+1050h] [bp-5Ch] BYREF
  int v10; // [sp+106Ch] [bp-40h]
  _DWORD v11[7]; // [sp+1070h] [bp-3Ch] BYREF
  int v12; // [sp+108Ch] [bp-20h]
  int v13; // [sp+1094h] [bp-18h]
  void *ptr; // [sp+1098h] [bp-14h]
  int i; // [sp+109Ch] [bp-10h]

  v7 = 0;
  memset(s, 0, sizeof(s));
  s[2] = 1835009;
  ptr = malloc(12 * *(_DWORD *)(a1 + 372));
  memset(ptr, 0, 12 * *(_DWORD *)(a1 + 372));
  (*(void (__fastcall **)(int, _DWORD *, _DWORD, void *, int *))(a1 + 316))(a1, s, *(_DWORD *)(a1 + 372), ptr, &v7);
  for ( i = 0; i < v7; ++i )
  {
    if ( *((_WORD *)ptr + 6 * i + 3) == 28 )
    {
      V_LOCK();
      sub_184FA8((int)v9, *(int *)(a1 + 272));
      logfmt_raw(
        v5,
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
        "[MISC CTRL] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)ptr + 12 * i + 4),
        *((unsigned __int16 *)ptr + 6 * i + 3),
        *((_DWORD *)ptr + 3 * i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_pll_sel_KS5_2382",
        28,
        352,
        20,
        v5);
    }
  }
  v6 = 0;
  sub_185308(&v6, *(_DWORD *)ptr);
  free(ptr);
  s[2] = 1835009;
  s[0] = v6 & 0xFFFFFFFB | (4 * (_BYTE)a2) & 4;
  V_LOCK();
  sub_184FA8((int)v11, *(int *)(a1 + 272));
  logfmt_raw(
    v5,
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
    "set pll sel %u %08x",
    a2,
    s[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_pll_sel_KS5_2382",
    28,
    364,
    40,
    v5);
  v13 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  return v13;
}

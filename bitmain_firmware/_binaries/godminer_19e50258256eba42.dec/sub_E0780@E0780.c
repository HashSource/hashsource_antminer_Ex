int __fastcall sub_E0780(int a1)
{
  int v3; // [sp+4h] [bp-10F8h]
  _BYTE v5[60]; // [sp+40h] [bp-10BCh] BYREF
  int v6; // [sp+1040h] [bp-BCh] BYREF
  int v7; // [sp+1044h] [bp-B8h] BYREF
  _DWORD s[4]; // [sp+1048h] [bp-B4h] BYREF
  _DWORD v9[7]; // [sp+1058h] [bp-A4h] BYREF
  int v10; // [sp+1074h] [bp-88h]
  _DWORD v11[7]; // [sp+1078h] [bp-84h] BYREF
  int v12; // [sp+1094h] [bp-68h]
  _DWORD v13[7]; // [sp+1098h] [bp-64h] BYREF
  int v14; // [sp+10B4h] [bp-48h]
  _DWORD v15[7]; // [sp+10B8h] [bp-44h] BYREF
  int v16; // [sp+10D4h] [bp-28h]
  void *ptr; // [sp+10DCh] [bp-20h]
  int v18; // [sp+10E0h] [bp-1Ch]
  int v19; // [sp+10E4h] [bp-18h]
  int v20; // [sp+10E8h] [bp-14h]
  int i; // [sp+10ECh] [bp-10h]

  V_LOCK();
  sub_DA978((int)v9, *(int *)(a1 + 272));
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
    "get hash clock count chip_no %d",
    *(_DWORD *)(a1 + 372));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_hash_clock_count_DASH_1766",
    38,
    1006,
    20,
    v5);
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 1;
  HIWORD(s[2]) = 6;
  s[0] = 1;
  LOBYTE(s[3]) = -1;
  v19 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  if ( v19 >= 0 )
  {
    usleep(0x4E20u);
    s[2] = 458753;
    LOBYTE(s[3]) = 0;
    v20 = 0;
    v18 = *(_DWORD *)(a1 + 376) * *(_DWORD *)(a1 + 372);
    ptr = malloc(12 * v18);
    memset(ptr, 0, 12 * v18);
    (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 336))(
      a1,
      s,
      v18,
      ptr,
      &v7,
      v3,
      2000,
      0);
    for ( i = 0; i < v7; ++i )
    {
      v6 = 0;
      sub_DACD8(&v6, *((_DWORD *)ptr + 3 * i));
      if ( *((_WORD *)ptr + 6 * i + 3) == 7 )
      {
        ++v20;
        V_LOCK();
        sub_DA978((int)v13, *(int *)(a1 + 272));
        logfmt_raw(
          v5,
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
          "[Hash clk cnt] chip %02x, core %02x, reg %02x, clk_cnt %08x",
          *((unsigned __int8 *)ptr + 12 * i + 4),
          *((unsigned __int8 *)ptr + 12 * i + 8),
          *((unsigned __int16 *)ptr + 6 * i + 3),
          v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_hash_clock_count_DASH_1766",
          38,
          1034,
          40,
          v5);
      }
      else
      {
        V_LOCK();
        sub_DA978((int)v15, *(int *)(a1 + 272));
        logfmt_raw(
          v5,
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
          "[Hash clk cnt] chip %02x, expected reg %02x, but %02x, clk_cnt %08x",
          *((unsigned __int8 *)ptr + 12 * i + 4),
          7,
          *((unsigned __int16 *)ptr + 6 * i + 3),
          v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_hash_clock_count_DASH_1766",
          38,
          1037,
          100,
          v5);
      }
    }
    free(ptr);
    return v20;
  }
  else
  {
    V_LOCK();
    sub_DA978((int)v11, *(int *)(a1 + 272));
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
      "%s failed, set reg:%02x",
      "ChipSetting_hash_clock_count_DASH_1766",
      HIWORD(s[2]));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_hash_clock_count_DASH_1766",
      38,
      1015,
      100,
      v5);
    return -1;
  }
}

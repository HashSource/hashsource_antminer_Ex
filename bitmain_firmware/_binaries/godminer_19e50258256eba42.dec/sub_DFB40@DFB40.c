int __fastcall sub_DFB40(int a1, int a2)
{
  int v4; // [sp+4h] [bp-10F8h]
  _BYTE v7[60]; // [sp+40h] [bp-10BCh] BYREF
  int v8; // [sp+1040h] [bp-BCh] BYREF
  int v9; // [sp+1044h] [bp-B8h] BYREF
  _DWORD s[4]; // [sp+1048h] [bp-B4h] BYREF
  _DWORD v11[7]; // [sp+1058h] [bp-A4h] BYREF
  int v12; // [sp+1074h] [bp-88h]
  _DWORD v13[7]; // [sp+1078h] [bp-84h] BYREF
  int v14; // [sp+1094h] [bp-68h]
  _DWORD v15[7]; // [sp+1098h] [bp-64h] BYREF
  int v16; // [sp+10B4h] [bp-48h]
  _DWORD v17[7]; // [sp+10B8h] [bp-44h] BYREF
  int v18; // [sp+10D4h] [bp-28h]
  void *ptr; // [sp+10DCh] [bp-20h]
  int v20; // [sp+10E0h] [bp-1Ch]
  int v21; // [sp+10E4h] [bp-18h]
  int v22; // [sp+10E8h] [bp-14h]
  int i; // [sp+10ECh] [bp-10h]

  V_LOCK();
  sub_DA978((int)v11, *(int *)(a1 + 272));
  logfmt_raw(
    v7,
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
    "set clock delay chip_no %d, value %08x",
    *(_DWORD *)(a1 + 372),
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_clock_delay_DASH_1766",
    33,
    911,
    40,
    v7);
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 1;
  HIWORD(s[2]) = 0;
  LOBYTE(s[3]) = -1;
  s[0] = a2;
  v21 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  if ( v21 >= 0 )
  {
    usleep((__useconds_t)&stru_186A0);
    LOBYTE(s[3]) = 0;
    v22 = 0;
    v20 = *(_DWORD *)(a1 + 376) * *(_DWORD *)(a1 + 372);
    ptr = malloc(12 * v20);
    memset(ptr, 0, 12 * v20);
    (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 336))(
      a1,
      s,
      v20,
      ptr,
      &v9,
      v4,
      2000,
      0);
    for ( i = 0; i < v9; ++i )
    {
      v8 = 0;
      sub_DACD8(&v8, *((_DWORD *)ptr + 3 * i));
      if ( *((_WORD *)ptr + 6 * i + 3) )
      {
        V_LOCK();
        sub_DA978((int)v17, *(int *)(a1 + 272));
        logfmt_raw(
          v7,
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
          "[DP] chip %02x, expected reg %02x, but %02x, data %08x",
          *((unsigned __int8 *)ptr + 12 * i + 4),
          0,
          *((unsigned __int16 *)ptr + 6 * i + 3),
          v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_clock_delay_DASH_1766",
          33,
          939,
          100,
          v7);
      }
      else
      {
        ++v22;
        V_LOCK();
        sub_DA978((int)v15, *(int *)(a1 + 272));
        logfmt_raw(
          v7,
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
          "[DP] chip %02x, core %02x, reg %02x, clk_delay %08x",
          *((unsigned __int8 *)ptr + 12 * i + 4),
          *((unsigned __int8 *)ptr + 12 * i + 8),
          *((unsigned __int16 *)ptr + 6 * i + 3),
          v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_clock_delay_DASH_1766",
          33,
          936,
          20,
          v7);
      }
    }
    free(ptr);
    return v22;
  }
  else
  {
    V_LOCK();
    sub_DA978((int)v13, *(int *)(a1 + 272));
    logfmt_raw(
      v7,
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
      "%s failed, set reg:%02x",
      "ChipSetting_clock_delay_DASH_1766",
      HIWORD(s[2]));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_clock_delay_DASH_1766",
      33,
      920,
      100,
      v7);
    return -1;
  }
}

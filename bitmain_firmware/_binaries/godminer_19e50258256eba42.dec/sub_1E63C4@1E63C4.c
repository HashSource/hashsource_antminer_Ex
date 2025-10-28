int __fastcall sub_1E63C4(int a1)
{
  int v3; // [sp+4h] [bp-10D8h]
  _BYTE v5[28]; // [sp+40h] [bp-109Ch] BYREF
  int v6; // [sp+1040h] [bp-9Ch] BYREF
  int v7; // [sp+1044h] [bp-98h] BYREF
  _DWORD s[4]; // [sp+1048h] [bp-94h] BYREF
  _DWORD v9[7]; // [sp+1058h] [bp-84h] BYREF
  int v10; // [sp+1074h] [bp-68h]
  _DWORD v11[7]; // [sp+1078h] [bp-64h] BYREF
  int v12; // [sp+1094h] [bp-48h]
  _DWORD v13[7]; // [sp+1098h] [bp-44h] BYREF
  int v14; // [sp+10B4h] [bp-28h]
  int v15; // [sp+10B8h] [bp-24h]
  int v16; // [sp+10BCh] [bp-20h]
  void *ptr; // [sp+10C0h] [bp-1Ch]
  int j; // [sp+10C4h] [bp-18h]
  int i; // [sp+10C8h] [bp-14h]
  int v20; // [sp+10CCh] [bp-10h]

  V_LOCK();
  sub_1E0BC0((int)v9, *(int *)(a1 + 272));
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
    "get pmdata chip_no %d",
    *(_DWORD *)(a1 + 372));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_pmdata_ZEC_1746",
    27,
    954,
    20,
    v5);
  memset(s, 0, sizeof(s));
  v20 = 0;
  for ( i = 0; i <= 6; ++i )
  {
    if ( i != 3 )
    {
      LOBYTE(s[2]) = 1;
      HIWORD(s[2]) = 60;
      LOBYTE(s[3]) = -1;
      s[0] = (16 * i) | 1;
      v16 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
      if ( v16 < 0 )
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "%s failed, set reg:%02x", "ChipSetting_pmdata_ZEC_1746", HIWORD(s[2]));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_pmdata_ZEC_1746",
          27,
          967,
          100,
          v5);
        return -1;
      }
      usleep(0x4E20u);
      s[2] = 16711681;
      LOBYTE(s[3]) = 0;
      v15 = *(_DWORD *)(a1 + 376) * *(_DWORD *)(a1 + 372);
      ptr = malloc(12 * v15);
      memset(ptr, 0, 12 * v15);
      (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 336))(
        a1,
        s,
        v15,
        ptr,
        &v7,
        v3,
        2000,
        0);
      for ( j = 0; j < v7; ++j )
      {
        v6 = 0;
        sub_1E0F20(&v6, *((_DWORD *)ptr + 3 * j));
        if ( *((_WORD *)ptr + 6 * j + 3) == 255 )
        {
          ++v20;
          V_LOCK();
          sub_1E0BC0((int)v11, *(int *)(a1 + 272));
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
            "[PM data] chip %02x, reg %02x mode %d PMDATA %08x",
            *((unsigned __int8 *)ptr + 12 * j + 4),
            *((unsigned __int16 *)ptr + 6 * j + 3),
            i,
            v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_pmdata_ZEC_1746",
            27,
            986,
            40,
            v5);
        }
        else
        {
          V_LOCK();
          sub_1E0BC0((int)v13, *(int *)(a1 + 272));
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
            "[PM data] chip %02x, expected reg %02x, but %02x mode %d PMDATA %08x",
            *((unsigned __int8 *)ptr + 12 * j + 4),
            255,
            *((unsigned __int16 *)ptr + 6 * j + 3),
            i,
            v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_pmdata_ZEC_1746",
            27,
            989,
            100,
            v5);
        }
      }
    }
  }
  free(ptr);
  return v20;
}

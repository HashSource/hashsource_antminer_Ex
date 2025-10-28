int __fastcall bitmain_power_read(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int v4; // r3
  char v9[2048]; // [sp+1Ch] [bp-1850h] BYREF
  _BYTE v10[16]; // [sp+81Ch] [bp-1050h] BYREF
  unsigned __int8 s[52]; // [sp+181Ch] [bp-50h] BYREF
  int v12; // [sp+1850h] [bp-1Ch] BYREF
  unsigned __int8 v13; // [sp+1854h] [bp-18h]
  unsigned __int8 v14; // [sp+1855h] [bp-17h]
  _BYTE v15[6]; // [sp+1856h] [bp-16h]
  char v16; // [sp+185Dh] [bp-Fh]
  char v17; // [sp+185Eh] [bp-Eh]
  unsigned __int8 i; // [sp+185Fh] [bp-Dh]
  int v19; // [sp+1860h] [bp-Ch]
  unsigned __int16 v20; // [sp+1866h] [bp-6h]

  *(_WORD *)&v15[4] = 0;
  v16 = 6;
  v17 = 6;
  v12 = 101100117;
  memset(s, 0, 0x32u);
  v19 = 5;
  v20 = a1 + 12 + a3;
  v13 = a1;
  v14 = a3;
  *(_DWORD *)v15 = v20;
  i = 8;
  if ( dword_C25FBC || (*(_DWORD *)&v15[2] = bitmain_power_open(), *(int *)&v15[2] >= 0) )
  {
    if ( sub_20DD5C(dword_C25FB8, (unsigned __int8 *)&v12, 8u, s, a3 + 7) )
    {
      strcpy(v9, "set DA conversion N failed");
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "bitmain_power_read",
        18,
        907,
        100,
        v10);
      return -2147482880;
    }
    else
    {
      for ( i = 0; i < a3 + 7; ++i )
      {
        snprintf(v9, 0x800u, "read_back_data[%d]: %02X", i, s[i]);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
          173,
          "bitmain_power_read",
          18,
          915,
          100,
          v10);
      }
      for ( i = 0; i < (unsigned int)a3; ++i )
      {
        v4 = v19++;
        *(_BYTE *)(a2 + i) = s[v4];
        snprintf(v9, 0x800u, "buf[%d]: %02X", i, *(unsigned __int8 *)(a2 + i));
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
          173,
          "bitmain_power_read",
          18,
          920,
          100,
          v10);
      }
      return *(_DWORD *)&v15[2];
    }
  }
  else
  {
    snprintf(v9, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_read");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_power_read",
      18,
      897,
      100,
      v10);
    return *(_DWORD *)&v15[2];
  }
}

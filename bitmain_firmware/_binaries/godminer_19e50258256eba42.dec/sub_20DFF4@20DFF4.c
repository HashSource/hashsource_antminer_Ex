int __fastcall sub_20DFF4(int a1)
{
  char v3[36]; // [sp+18h] [bp-1824h] BYREF
  _BYTE v4[36]; // [sp+818h] [bp-1024h] BYREF
  int v5; // [sp+1818h] [bp-24h] BYREF
  __int16 v6; // [sp+181Ch] [bp-20h]
  int v7; // [sp+1820h] [bp-1Ch] BYREF
  int v8; // [sp+1824h] [bp-18h]
  int v9; // [sp+1828h] [bp-14h]
  __int16 v10; // [sp+182Ch] [bp-10h]
  char v11; // [sp+182Fh] [bp-Dh]
  int v12; // [sp+1830h] [bp-Ch]
  char v13; // [sp+1836h] [bp-6h]
  char v14; // [sp+1837h] [bp-5h]

  v12 = -2147482880;
  v13 = 4;
  v14 = 1;
  v7 = 0;
  v8 = 0;
  v5 = 17082965;
  v9 = -1;
  v10 = 5;
  v6 = 5;
  v11 = 6;
  if ( sub_20DD5C(a1, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7, 8u) )
  {
    strcpy(v3, "get power version failed");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "_bitmain_get_power_fw_version",
      29,
      265,
      100,
      v4);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v8) << 8) | (unsigned __int8)v8;
  }
}

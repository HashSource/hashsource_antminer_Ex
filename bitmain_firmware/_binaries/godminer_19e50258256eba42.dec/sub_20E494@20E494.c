int __fastcall sub_20E494(int a1)
{
  char v3[28]; // [sp+18h] [bp-181Ch] BYREF
  _BYTE v4[28]; // [sp+818h] [bp-101Ch] BYREF
  int v5; // [sp+1818h] [bp-1Ch] BYREF
  int v6; // [sp+181Ch] [bp-18h]
  int v7; // [sp+1820h] [bp-14h] BYREF
  __int16 v8; // [sp+1824h] [bp-10h]
  __int16 v9; // [sp+1826h] [bp-Eh]
  int v10; // [sp+1828h] [bp-Ch]
  char v11; // [sp+182Dh] [bp-7h]
  char v12; // [sp+182Eh] [bp-6h]
  char v13; // [sp+182Fh] [bp-5h]

  v11 = 4;
  v12 = 3;
  v7 = 50637397;
  v5 = 0;
  v6 = 0;
  v10 = -2147482880;
  v9 = 7;
  v8 = 7;
  v13 = 6;
  if ( sub_20DD5C(a1, (unsigned __int8 *)&v7, 6u, (unsigned __int8 *)&v5, 8u) )
  {
    strcpy(v3, "get AD conversion N failed");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "_bitmain_get_AD_conversion_N",
      28,
      370,
      100,
      v4);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v6) << 8) | (unsigned __int8)v6;
  }
}

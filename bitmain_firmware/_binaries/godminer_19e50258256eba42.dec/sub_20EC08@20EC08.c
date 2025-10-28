int __fastcall sub_20EC08(int a1, unsigned __int8 a2)
{
  char v4[32]; // [sp+1Ch] [bp-1820h] BYREF
  _BYTE v5[32]; // [sp+81Ch] [bp-1020h] BYREF
  int v6; // [sp+181Ch] [bp-20h] BYREF
  int v7; // [sp+1820h] [bp-1Ch]
  int v8; // [sp+1824h] [bp-18h] BYREF
  unsigned __int8 v9; // [sp+1828h] [bp-14h]
  char v10; // [sp+1829h] [bp-13h]
  __int16 v11; // [sp+182Ah] [bp-12h]
  __int16 v12; // [sp+182Eh] [bp-Eh]
  int v13; // [sp+1830h] [bp-Ch]
  char v14; // [sp+1835h] [bp-7h]
  char v15; // [sp+1836h] [bp-6h]
  char v16; // [sp+1837h] [bp-5h]

  v14 = 6;
  v15 = -127;
  v8 = -2130269611;
  v6 = 0;
  v7 = 0;
  v13 = -2147482880;
  v12 = a2 + 135;
  v9 = a2;
  v10 = 0;
  v11 = v12;
  v16 = 8;
  if ( sub_20DD5C(a1, (unsigned __int8 *)&v8, 8u, (unsigned __int8 *)&v6, 8u) )
  {
    strcpy(v4, "set watchdog failed");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "_bitmain_set_watchdog",
      21,
      506,
      100,
      v5);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v7) << 8) | (unsigned __int8)v7;
  }
}

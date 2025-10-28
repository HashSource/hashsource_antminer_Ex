int __fastcall sub_22044C(int a1, char a2, unsigned __int16 a3)
{
  int v4; // [sp+Ch] [bp-1020h]
  char v6; // [sp+13h] [bp-1019h]
  int v7; // [sp+14h] [bp-1018h]
  _BYTE v8[16]; // [sp+1Ch] [bp-1010h] BYREF
  __int16 v9; // [sp+101Ch] [bp-10h] BYREF
  char v10; // [sp+101Fh] [bp-Dh] BYREF
  unsigned __int16 v11; // [sp+1020h] [bp-Ch] BYREF
  unsigned __int8 v12; // [sp+1022h] [bp-Ah]
  unsigned __int8 v13; // [sp+1023h] [bp-9h]
  int v14; // [sp+1024h] [bp-8h]

  v7 = a1;
  v6 = a2;
  v14 = a3;
  if ( a3 > 0x3DEu || v14 <= 809 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "illegal voltage [%d, %d], set default voltage %d", 810, 990, 900, v4, a3, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      165,
      "ISL_set_voltage_dynamic",
      23,
      154,
      60,
      v8);
    v14 = 900;
  }
  v13 = 0;
  v12 = 3;
  v11 = 0;
  do
  {
    v10 = -1;
    sub_21F9AC(v7, v6, 0, (int)&v10, 1);
    usleep((__useconds_t)&stru_186A0);
    v9 = v14;
    sub_21F9AC(v7, v6, 33, (int)&v9, 2);
    usleep(0x30D40u);
    sub_2203BC(v7, v6, &v11);
    if ( v11 > v14 - 10 && v11 < v14 + 10 )
      break;
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "set vol %d,  %d, set again!", v14, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      165,
      "ISL_set_voltage_dynamic",
      23,
      181,
      60,
      v8);
    usleep(0x30D40u);
    ++v13;
  }
  while ( v13 <= (unsigned int)v12 );
  return v11;
}

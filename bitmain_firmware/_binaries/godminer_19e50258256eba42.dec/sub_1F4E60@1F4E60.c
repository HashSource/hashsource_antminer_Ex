bool __fastcall sub_1F4E60(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // r3
  unsigned __int8 *v4; // [sp+14h] [bp-1818h]
  char v5[20]; // [sp+18h] [bp-1814h] BYREF
  _BYTE v6[20]; // [sp+818h] [bp-1014h] BYREF
  int v7; // [sp+1818h] [bp-14h]
  unsigned __int16 v8; // [sp+181Eh] [bp-Eh]
  unsigned int i; // [sp+1820h] [bp-Ch]
  unsigned __int16 v10; // [sp+1826h] [bp-6h]

  v4 = a1;
  v10 = 0;
  v8 = 0;
  v7 = 0;
  i = 0;
  if ( !a1 || *a1 <= 3u )
    return 0;
  v7 = *a1;
  for ( i = 0; v7 - 2 > i; ++i )
  {
    v2 = v4++;
    v10 += *v2;
  }
  v8 = *v4 << 8;
  v8 |= v4[1];
  snprintf(v5, 0x800u, "sum1,sum2 = %d,%d", v10, v8);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/drv_pic/pic_1704.c",
    165,
    "check_pic_crc",
    13,
    437,
    20,
    v6);
  return v10 == v8;
}

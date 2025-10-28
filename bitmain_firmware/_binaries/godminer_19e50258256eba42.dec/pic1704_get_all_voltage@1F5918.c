int __fastcall pic1704_get_all_voltage(char a1, int *a2, int *a3, int *a4)
{
  char v9[32]; // [sp+24h] [bp-1820h] BYREF
  _BYTE v10[32]; // [sp+824h] [bp-1020h] BYREF
  _DWORD v11[3]; // [sp+1824h] [bp-20h] BYREF
  int v12; // [sp+1830h] [bp-14h] BYREF
  int v13; // [sp+1834h] [bp-10h]
  int v14; // [sp+1838h] [bp-Ch]

  v12 = 0;
  v11[0] = 255;
  memset(&v11[1], 0, 7);
  LOWORD(v13) = 55;
  v14 = 0;
  HIBYTE(v13) = a1;
  BYTE2(v13) = 11;
  if ( !(unsigned __int8)sub_1F3C40(v13, 0, &v12, (unsigned __int8 *)v11) )
    return 0;
  *a2 = (HIBYTE(v11[0]) << 8) | LOBYTE(v11[1]);
  *a3 = (BYTE1(v11[1]) << 8) | BYTE2(v11[1]);
  *a4 = (HIBYTE(v11[1]) << 8) | LOBYTE(v11[2]);
  snprintf(v9, 0x800u, "Received all voltage response: vol0 = %d, vol1 = %d, vol2 = %d.", *a2, *a3, *a4);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/drv_pic/pic_1704.c",
    165,
    "pic1704_get_all_voltage",
    23,
    551,
    20,
    v10);
  return 1;
}

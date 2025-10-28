int __fastcall sub_82400(int a1, int *a2, _DWORD *a3, int a4)
{
  _BYTE v9[60]; // [sp+38h] [bp-103Ch] BYREF
  int v10; // [sp+1038h] [bp-3Ch] BYREF
  unsigned int s; // [sp+103Ch] [bp-38h] BYREF
  _DWORD v12[7]; // [sp+1040h] [bp-34h] BYREF
  int v13; // [sp+105Ch] [bp-18h]
  int v14; // [sp+1060h] [bp-14h]
  int v15; // [sp+1064h] [bp-10h]

  v15 = 0;
  *a3 = 0;
  *a2 = -64;
  v15 = sub_81738(a1, 0, a4, 256, &s, &v10, 1);
  V_LOCK();
  sub_7AAF4((int)v12, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "remote status: %08x\n",
    s,
    a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_read_sensor_temp_remote_KAS_2380",
    44,
    1329,
    20,
    v9);
  if ( v15 == 1 )
  {
    v14 = HIBYTE(s) - 64;
    *a2 = v14;
    *a3 = v10;
  }
  return v15;
}

int __fastcall sub_ADBF8(int a1)
{
  int v2; // r0
  int v3; // r6
  _BYTE *v4; // r3
  int v5; // r2
  char v6; // t1
  int v7; // r0
  int v8; // r0
  char v10[17]; // [sp+10h] [bp-1820h] BYREF
  _BYTE v11[3]; // [sp+21h] [bp-180Fh] BYREF
  char v12[2048]; // [sp+30h] [bp-1800h] BYREF
  _BYTE v13[4096]; // [sp+830h] [bp-1000h] BYREF

  v2 = socket(2, 1, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    strcpy(v12, "error sock");
    V_LOCK(*(_DWORD *)"error sock");
    v7 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
      171,
      "get_eth_mac",
      11,
      145,
      100,
      v13);
    return -1;
  }
  else
  {
    strcpy(v10, "eth0");
    if ( ioctl(v2, 0x8927u, v10) < 0 )
    {
      strcpy(v12, "error ioctl");
      V_LOCK(*(_DWORD *)"error ioctl");
      v8 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
        171,
        "get_eth_mac",
        11,
        151,
        100,
        v13);
      close(v3);
      return -2;
    }
    else
    {
      v4 = v11;
      v5 = a1 - 1;
      do
      {
        v6 = *++v4;
        *(_BYTE *)++v5 = v6;
      }
      while ( v5 != a1 + 5 );
      close(v3);
      return 0;
    }
  }
}

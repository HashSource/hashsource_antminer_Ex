int __fastcall system_info_init(unsigned int a1)
{
  char *v1; // r8
  unsigned int v2; // r5
  unsigned int v3; // r3
  char v4; // r0
  int v5; // r4
  _DWORD *v6; // r3
  _DWORD *v8; // r3
  char v9[4096]; // [sp+18h] [bp-1000h] BYREF

  v1 = off_1306D4[a1];
  if ( a1 > 0xB )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1247636, 1246984, v1);
    V_UNLOCK();
    LOWORD(v8) = -14512;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v8,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/system_info.c",
      134,
      "system_info_init",
      16,
      13,
      100,
      v9);
    return -1;
  }
  else
  {
    v2 = 68 * a1 + 1246932;
    v3 = 17 * a1;
    if ( a1 - 5 > 2 )
      v4 = 10;
    else
      v4 = 4;
    v5 = 4 * v3 + 1247024;
    set_pic_device_high(v4);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1247792, v1, *(_DWORD *)(v2 + 124));
    V_UNLOCK();
    LOWORD(v6) = -14512;
    HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/system_info.c",
      134,
      "system_info_init",
      16,
      24,
      60,
      v9);
    power_info_init(
      *(_DWORD *)(v5 + 4),
      *(_DWORD *)(v5 + 8),
      *(_DWORD *)(v5 + 12),
      *(_DWORD *)(v5 + 16),
      *(_DWORD *)(v5 + 20));
    fan_info_init();
    fan_control_info_init(
      *(_DWORD *)(v5 + 32),
      *(_DWORD *)(v5 + 36),
      *(_DWORD *)(v5 + 40),
      *(_DWORD *)(v5 + 44),
      *(_DWORD *)(v5 + 48),
      *(_DWORD *)(v5 + 52),
      *(float *)(v5 + 56),
      *(_DWORD *)(v5 + 60),
      *(_DWORD *)(v5 + 64));
    return 0;
  }
}
